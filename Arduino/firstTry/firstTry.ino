int pins[] = {3, 5, 6, 9, 10};
constexpr size_t PIN_COUNT = sizeof(pins) / sizeof(pins[0]);
int currentBrightness[PIN_COUNT] = {0};

char selectedPin;
int brightness = 0;
int lastBrightness = -1;

bool isBlinking = false;
bool isVariable = false;

unsigned long previousMillis = 0;
unsigned long blinkInterval = 0;

void onAll() {
  for (size_t i = 0; i < PIN_COUNT; ++i){
    digitalWrite(pins[i], HIGH);
  }
}

void offAll() {
  for (size_t i = 0; i < PIN_COUNT; ++i){
    digitalWrite(pins[i], LOW);
  }
}

void resetModes() {
  isBlinking = false;
  isVariable = false;
  offAll();
}

void getDiodNumber(char pinNumber) {

  char pin = pinNumber - '0';
  if (pinNumber == 'G'){
    onAll();
  }
  else if (pinNumber == 'T'){
    offAll();
    digitalWrite(10, HIGH);
  }
  else{
    offAll();
    digitalWrite(pin, HIGH);
  }
}

void setBlinkFrequency(char blink){
  resetModes();
  if (blink == 'O'){
    isBlinking = false;
    offAll();
  }
  else if (blink == 'F'){
    isBlinking = true;
    blinkInterval = 300;
  }
  else if (blink == 'A'){
    isBlinking = true;
    blinkInterval = 1000;
  }
  else if (blink == 'S'){
    isBlinking = true;
    blinkInterval = 3000;
  }
}

void pwmTick(char mode){
  resetModes();
  if (mode == 'O'){
    offAll();
    isVariable = false;
  }
  else if (mode == 'C'){
    onAll();
  }
  else if (mode == 'V'){
    isVariable = true;
  }
}

void updateBrightness() {
    if (Serial.available() > 0) {
      char brightness = Serial.read(); 
      int targetBrightness = (unsigned char)brightness;

        for (int i = 0; i < PIN_COUNT; ++i) {
          if (currentBrightness[i] < targetBrightness) {
              ++currentBrightness[i];
          } else if (currentBrightness[i] > targetBrightness) {
              --currentBrightness[i];
          }
          analogWrite(pins[i], currentBrightness[i]);
        }  
    }
}

void setup() {
  Serial.begin(9600);
  for (size_t i = 0; i < PIN_COUNT; ++i){
    pinMode(pins[i], OUTPUT);
  }
}

void loop() {
  if (Serial.available()) {
    char command = Serial.read();

    //standart Off
    if (command == '0') {
      resetModes();
    } 
    //standart In
    else if (command == '1') {
      onAll();
    } 
    //select some Pin
    else if (command >= '3' && command <= '9' || command == 'T' || command == 'G') {
      selectedPin = command;
      getDiodNumber(selectedPin);
    }
    //choose Speed Blinking Pin
    else if (command == 'O' || command == 'F' || command == 'A' || command == 'S'){
      setBlinkFrequency(command);
    }
    //choose Mode Glowing Pin
    else if (command == 'O' || command == 'C' || command == 'V'){
      pwmTick(command);
    }
  }

  //settings Blinking
  if (isBlinking) {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= blinkInterval) {
      previousMillis = currentMillis;

      static bool isOn = false;
      if (isOn) {
        offAll();
      } else {
        getDiodNumber(selectedPin);
        //onAll();
      }
      isOn = !isOn;
    }
  }

  if (isVariable) {
    updateBrightness();
  }
}
