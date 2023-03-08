#if 1
  #if 0
    if (condition) {
      //code to run when true
    }else if (another condition) {
      //code to run when true
    }else {
      
    }
  #endif

//a void function is a function that doesn't return a value
void switchLed(int ledPin, bool ledState) {
  // if (ledState == true) {
  //   digitalWrite(ledPin, HIGH);
  // }else {
  //   digitalWrite(ledPin, LOW);   
  // }
  
  digitalWrite(ledPin, ledState);   
}

//we have 4 LEDS. We have an led one pin 3, by default
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  // TO Turn it on
  switchLed(LED_BUILTIN, true);
  delay(500);//takes in integer, and the default unit milliseconds
  
  switchLed(LED_BUILTIN, false);
  // TO Turn it OFF
  delay(500);
}

#endif