//this program turns an LED ON and OFF every 1.5s
void setup() {
   pinMode(2, OUTPUT); // output pin

}

void loop() {
  digitalWrite(2, HIGH); // turn LED on
  delay(500); // wait 0.5 second (500ms)
  digitalWrite(2, LOW); // turn LED off
  delay(500); // wait 0.5 second (500ms)
}
