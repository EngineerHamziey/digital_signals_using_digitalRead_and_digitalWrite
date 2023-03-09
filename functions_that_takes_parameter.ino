#if 0

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

const int
  led1 = 2,
  led2 = 3,
  led3 = 4,
  led4 = 5;

//a void function is a function that doesn't return a value
void switchLed(int ledPin, bool shouldLedOn) {
    digitalWrite(ledPin, shouldLedOn);

  // OR

  // if (shouldLedOn == true) {
  //   digitalWrite(ledPin, true);
  // }else {
  //   digitalWrite(ledPin, LOW);
  // }
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
  for (int ledPin = 2; ledPin <= 5; ledPin++) {
    switchLed(ledPin, true);
    delay(500);
  }
  
  for (int ledPin = 2; ledPin <= 5; ledPin++) {
    switchLed(ledPin, false);
  }
  
  delay(500);
}

// void loop() {
//   // TO Turn it on
//   switchLed(led1, true);
//   delay(500);  //takes in integer, and the default unit milliseconds
//   switchLed(led2, true);
//   delay(500);  //takes in integer, and the default unit milliseconds
//   switchLed(led3, true);
//   delay(500);  //takes in integer, and the default unit milliseconds
//   switchLed(led4, true);
//   delay(500);  //takes in integer, and the default unit milliseconds

//   switchLed(led1, false);
//   switchLed(led2, false);
//   switchLed(led3, false);
//   switchLed(led4, false);
//   // TO Turn it OFF
//   delay(500);
// }

#endif