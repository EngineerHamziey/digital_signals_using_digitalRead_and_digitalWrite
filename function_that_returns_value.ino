#if 1

#if 0
    if (condition) {
      //code to run when true
    }else if (another condition) {
      //code to run when true
    }else if (another condition) {
      //code to run when true
    }else {
      
    }
#endif

// a better way to declare constant
// #define  led1 2
// #define  led2 3
// #define  led3 4
// #define  led4 5

const int
  led1 = 2,
  led2 = 3,
  led3 = 4,
  led4 = 5;

//a void function is a function that doesn't return a value
void switchLed(int ledPin, bool shouldLedOn) {
  digitalWrite(ledPin, shouldLedOn);
}

void blinkLed(bool onAll) {
  if (onAll == true) {
    for (int ledPin = 2; ledPin <= 5; ledPin++) {
      switchLed(ledPin, true);
      delay(500);
    }
  } else {
    for (int ledPin = 2; ledPin <= 5; ledPin++) {
      switchLed(ledPin, false);
    }
  }
}

//we have 4 LEDS. We have an led one pin 3, by default
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // for(initialization; condition; ++/--)
  blinkLed(true);
  blinkLed(false);

  delay(500);
}

#endif