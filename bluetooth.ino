char data;
byte ledState = LOW;
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  if (Serial.available() > 0) {
    data = Serial.parseInt();
    Serial.println(data, DEC);
  }

  /*
      if (ledState == LOW) {
        ledState = HIGH;
      } else {
        ledState = LOW;
      }*/

  if (data == 1) {
    Serial.println(data);
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else if (data == 2) {
    Serial.println(data);
    digitalWrite(LED_BUILTIN, LOW);
  }

  digitalWrite(LED_BUILTIN, ledState);
  delay(50);
}

