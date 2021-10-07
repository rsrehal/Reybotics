//program that prompts user to input 1-5 value to either: turn motor speed at 25,50,75,100 percent of speed or turn off the motor
int motor_pin = 3;

void setup() {
  pinMode(motor_pin, OUTPUT);

  Serial.begin(9600); //set baud rate
  
  Serial.println("What do you want to do to the motor: ");
  Serial.println("1. Run at 25%");
  Serial.println("2. Run at 50%");
  Serial.println("3. Run at 75%");
  Serial.println("4. Run at 100%");
  Serial.println("5. Stop");
  Serial.println();

}

void loop() {
  int input_byte;
  
  if(Serial.available() > 0){
        input_byte = Serial.read();
        //Serial.println(input_byte);
        
        if(input_byte == 49){
          Serial.println("25% speed");
          analogWrite(motor_pin, 64);;
        }
        
        if(input_byte == 50){
          Serial.println("50% speed");
          analogWrite(motor_pin, 127);
        }
        
        if(input_byte == 51){
          Serial.println("75% speed");
          analogWrite(motor_pin, 191);
        }
        
        if(input_byte == 52){
          Serial.println("100% speed");
          digitalWrite(motor_pin, HIGH);
        }
        
        if(input_byte == 53){
          input_byte = Serial.read();
          Serial.println("Motor OFF");
          digitalWrite(motor_pin, LOW);
        }
  }
 input_byte = 0;

}
