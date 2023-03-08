#if 0

//a void function is a function that doesn't return a value
void onLeds() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
}

void offLeds() {
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
}

//we have 4 LEDS. We have an led one pin 3, by default
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}


void loop() {
  // TO Turn it on
  onLeds();
  delay(500);//takes in integer, and the default unit milliseconds
  
  // TO Turn it OFF
  offLeds();
  delay(500);
}

#endif