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

const int 
  led1 = 2,
  led2 = 3,
  led3 = 4,
  led4 = 5;

//a void function is a function that doesn't return a value
void switchLed(int ledPin, bool shouldLedOn) {
  // if (shouldLedOn == true) {
  //   digitalWrite(ledPin, true);
  // }else {
  //   digitalWrite(ledPin, LOW);   
  // }
  
  // OR
  
  digitalWrite(ledPin, shouldLedOn);   
}

//we have 4 LEDS. We have an led one pin 3, by default
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}


void loop() {
  // TO Turn it on
  switchLed(led1, true);
  delay(500);//takes in integer, and the default unit milliseconds
  
  switchLed(led1, false);
  // TO Turn it OFF
  delay(500);
}

#endif