#if 0
void setup() {
// ==========================================================
  #if 0//increment and decrement
    int i = 5;
    i = i + 2; or  i += 2;new i = old i + 2
    i.e i = 7//same goes for other operators -, *, /, %(modulus) 
    short form
    if it were 1
    i++, meaning i = i + 1 or i += 1
    i-, meaning i = i - 1 or i -= 1

  #endif
// ========================================================
  Serial.begin(9600);
  //for (initialization; condition; increment/decrement)
  for(int pinNumber = 2; pinNumber <= 5; pinNumber++ ){
    Serial.println(pinNumber);
    pinMode(pinNumber, OUTPUT);
  }
}
void loop() {
  for(int pinNumber = 2; pinNumber <= 5; pinNumber++ ){
    Serial.println(
      "LED " +
      String(pinNumber) +
      "ON"
    );
    digitalWrite(pinNumber, HIGH);
    delay(500);
  }
  
  for(int pinNumber = 5; pinNumber >= 2; pinNumber-- ){
    Serial.println(
      "LED " +
      String(pinNumber) +
      "ON"
    );
    digitalWrite(pinNumber, LOW);
    delay(500);
  }
}
#endif