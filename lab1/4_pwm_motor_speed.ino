//program that alters the speed of a DC motor using pwm

int motor_pin = 3;
int delay_time = 3000;

void setup() {
  pinMode(motor_pin, OUTPUT);
}

void loop() {
  //used higher duty cycle since, at lower cycle, motor doesnt have enough startup current
  //will look into using motor driver board to solve this
  
  analogWrite(motor_pin, 127);
  delay(delay_time);
  analogWrite(motor_pin, 191);
  delay(delay_time);
  analogWrite(motor_pin, 255);
  delay(delay_time);
}
