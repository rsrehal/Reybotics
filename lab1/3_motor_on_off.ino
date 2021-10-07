//program that turns a DC motor ON and OFF
int motor_pin = 3;

void setup() {
  pinMode(motor_pin, OUTPUT);
}

void loop() {
  digitalWrite(motor_pin, HIGH);
  delay(1500);
  digitalWrite(motor_pin, LOW);
  delay(1500);
}
