//program that alters the brightness of LED using pwm

//initializing LED pin
int led_pin = 3;
int delay_time = 2000;
void setup() {
  //declare LED pin as output
  pinMode(led_pin, OUTPUT);
}

void loop() {
  //demostrates how incrementally increasing duty cycle --> incrementally increases brightness
  analogWrite (led_pin, 0);
  delay (delay_time);
  analogWrite (led_pin, 64);
  delay (delay_time);
  analogWrite (led_pin, 127);
  delay (delay_time);
  analogWrite (led_pin, 191);
  delay (delay_time);
  analogWrite (led_pin, 255);

  //demonstrates how gradually increasing/decreasing duty cycle causes LED to gradually brighten/dim
  
  //increase duty cycle from 0-100%, gets brighter
  for(int i=0; i<255; i++){
    analogWrite(led_pin, i);
    delay(5);
  }
  //decrease duty cycle from 100-0%, gets dimmer
    for(int i=255; i>0; i--){
    analogWrite(led_pin, i);
    delay(5);
  }
}
