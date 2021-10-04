# Reybotics Class - Lab 1
## Basic Arduino Control 

The goal of this lab is to get familar with using the various capabilities of the Arduino Uno. We will explore different control functions that are commonly used in robotics, and that will become important as we work towards building our robot project. 

## Objectives
1. Make an LED blink on and off
2. Control the brightness of an LED with a PWM
3. Control a DC motor (on/off only)
4. Control the speed of a DC motor (with PWM)
5. Serial Port / UART printouts + inputs
6. Stretch goal: control a servo motor
7. Stretch goal: interface with digital display (LCD)

## Deliverables
You will be uploading supporting material to show that you have completed deliverables for all of the various tasks. Get comfortable with uploading photos, videos, and any other supporting material to places like Google Drive and YouTube and linking them in the "Deliverables" tables in each lab, like the one below:


Deliverable | Associated Task | Complete? |	Supporting Material (video links, etc. if applicable)
---			|	---		|	---		|	---		|
Program Arduino to blink an LED 						| Task 1f		|		| 
Program Arduino to vary brightness of an LED			| Task 2f 		|		| 
Program Arduino to turn a motor on and off				| Task 3g 		|		| 
Program Arduino to vary speed of the motor				| Task 4g 		|		| 
Turn a motor on/off via serial keyboard commands		| Task 5i 		|		| 
Control the motor speed  via serial keyboard commands	| Task 5k 		|		| 
Optional: showcase servo motor control					| Task 6e 		|		| 
Optional: show case LCD interface						| Task 7f 		|		| 



## Tasks + Instructions  
1. **Make an LED blink on and off**  
  a. /n this task we will write a simply program for the Arduino to make an LED blink.  
  b. Find a resisor and LED to use with the Arduino.   
  c. Size the resistor appropriately using Ohm's law and the approximate voltage drop of the LED. The output value of the Arduino pins will be +5V when high.  
  d. If there is not a large number of resistors to choose from, select one with value between 100-1kohms.  
  e. Program the Arduino using a Digital Output pin to apply a 5V signal (High) and a 0V signal (low), alternating. 
  f. Use delays within the Arduino code to make this human visible. A suggested interval between blinks is 500ms.  
  e. Use your breadboard to connect your selected Arduino pin to the LED and resistor. Make sure Ground (GND) on the Arduino is connected to your Ground rail on the breadboard.   
  f. Take a video of the results and link to it in the Deliverables section. 
  h. Be sure to add and upload your code to this repo as "1_blinky.ino".  


2. **Control the brightness of an LED with a PWM**    
  a. Next, we will use the PWM functionality of the Arduino to vary the brightness of the LED.  
  b. Using the PWM feature of the Arduino, we will vary the **duty cycle** of the output waveform to vary the brightness.  Read more about duty cycle to get familiar with this concept.  
  c. Instead of turning the LED on and off, we will be switching it on and off faster than the human eye can perceive it using the PWM signal. The Arduino PWM outputs are on the order of 1-4kHz. Since the LED will be blinking so fast, the human eye will average the blinking and register a variably dimmed light output. 
  d. Connect an appropriate PWM capable output pin to the LED connections from the previous task. Refer to the resources to find a pinout description for the Arduino Uno. 
  e. Set up your code to instead produce a PWM output instead of a Digital Output. Play with the duty cycle values and observe how the brigthness of the LED changes. 
  f. Record a short video of the Arduino being programmed with different duty cycles and the brightness changing, and link this in the deliverables section.   
  g. Be sure to add and upload your code to this repo as "2_pwm_brightness.ino".  

  
3. **Control a DC motor (on/off only)**  
  a. We will set up the Arduino to do simple control of a DC motor.   
  b. Using the motor purchased for this course, connect the positive lead to a digital output pin on the Arduino and the negative lead to an appropriate GND connection from the Arduino.  
  c. We will not be utilizing the motor driver board for this lab, as we only wish to do simple control.   
  d. The Arduino will output a +5V signal with a limited current. This should be enough to drive the motor, although it will probably be a weak drive. Do not worry about this for now, as we simply want to be able to control it to some degree.  
  e. Write a program which outputs a digital high to turn the motor on, and then a digital low to turn the motor off. We will not be able to reverse the direction of the motor in this set configuration.   
  f. For the above step, use a time interval that allows for the motor to run for a bit and then stop for a bit. Something between 1-5 seconds should work well.   
  g. Record a short video of the Arduino controlling the motor to run on and off, and link this in the deliverables section.    
  h. Bonus: If you wish to see the motor go in the opposite direction, simply switch the positive and negative lead connections.   
  i. Be sure to add and upload your code to this repo as "3_motor_on_off.ino".  
  
4. **Control the speed of a DC motor (with PWM)**  
  a. We will not take motor control a step further and attempt to adjust the speed the motor runs at.  
  b. Given that we are not able to drive the motor at its full power since we are limited by the Arduino's output capabilities, this task may not work to well. But overall it should illustrate the point of our control. 
  c. We will be using an PWM output from the Arduino to attempt to control the speed of the motor.   
  d. The basic premise is that by varying the duty cycle of the control signal to the motor, we can achieve the same effect as the LED - we can allow the signal to be "averaged" if we switch it fast enough, and use this to variably control the speed of the motor.   
  e. Program the Arduino to output a PWM signal and make the appropriate electrical connections to the motor.   
  f. Vary this PWM duty cycle and view the motor speed, and it should be changing (depending on the drive ability of the Arduino, this may fail. Motors typically have an inrush/startup current that needs to be satisfied before they can get moving. If the duty cycle is too low it may fail to move due to the Arduino not being able to give it enough power. This should be solved in later labs when we move to using the motor driver board).  
  g. Record a short video of the Arduino being programmed with different duty cycles and the motor speed changing, and link this in the deliverables section. 
  h. Be sure to add and upload your code to this repo as "4_pwm_motor_speed.ino".   


5. **Serial Port / UART printouts + inputs**  
  a. In this task we will be getting familiar with our main communication channel with the Arduino when it is running code - the Serial interface.   
  b. The Arduino has a serial input and output connection over USB which can be accessed through the computer. We can receive status messages and send commands over this if it is set up properly. This can all be done within the Arduino IDE, although other serial monitors can be used as well (e.g. PuTTY, TeraTerm, etc.).   
  c. Copy and rename your code from Task 3 as "5_motor_serial_control.ino".  
  d. Modify the code to output a serial message indicating whether it turned the motor on or off.  
  e. Monitor and verify this works properly through the Arduino IDE's serial monitor.  
  f. Now we will take this a step further and modify this program to accept user inputs over the serial interface.  
  g. Read up on how to accept keyboard inputs via the Serial Monitor within your Arduino program.  
  h. Modify the program from this section to turn the motor on or off when a specific command is entered by your computer over the Serial Interface. The goal is to be able to control the motor's state only by using commands from your computer.  
  i. Record a short video of the motor being controlled by keyboard commands over the serial interface, and link this in the deliverables section. 
  j. Take this a step further and make the program accept speed commands which tell the Arduino how fast the motor should be turning. It should still accept on/off commands.  
  k. Record a short video of the motor speed being controlled by keyboard commands over the serial interface, and link this in the deliverables section. 
  l. Be sure to add and upload your code to this repo as "5_motor_serial_control.ino".   

6. **Stretch goal: control a servo motor**  
  a. A stretch goal for this lab will be to control a servo motor.  
  b. Servo motors are useful for more precisely controlling the position at which the motor moves to. This is ideal for discret movements, and not so good for something like driving wheels on a car. Servos also don't typically provide a lot of power for driving big loads (at least for our use cases).  
  c. Read up on how servos work, and specifically how to drive the one you have available to you.  
  d. Write an Arduino program to move the servo to specific positions and so fun things with it.  You probably can get away with powering it directly from the Arduino.  
  e. Showcase your results with a video and link in the deliverables section.  
  f. Upload any relevant code as "6_servo_control.ino". 

7. **Stretch goal: interface with digital display (LCD)**  
  a. A stretch goal for this lab will be to interface an LCD for verbose program output.  
  b. Read up on the details of the specific LCD display you have available to you.  
  c. There is likely a library to be utilized for this specific LCD. See the Resources section of this lab for more info.  
  d. Write some test programs to interface with the LCD and see if you can get text output on it, as well as text outputs to specific locations on the LCD.  
  e. Take this a step further and write your test program to accept a message via the serial connection and output it to the LCD. Get familiar with using Strings in the Arduino programming environment.  
  f. Showcase your results with a video and link in the deliverables section.  
  g. Upload any relevant code as "7_LCD_interface.ino".  



## Resources
Description	| Link
--- | ---
Arduino Tutorial 1: Setting Up and Programming the Arduino for Absolute Beginners | https://www.youtube.com/watch?v=fJWR7dBuc18
An Introduction to Arduino Uno Pinout	|	https://www.circuito.io/blog/arduino-uno-pinout/
Arduino Uno Pins – A Complete Practical Guide	|	https://roboticsbackend.com/arduino-uno-pins-a-complete-practical-guide/
Arduino UNO Pinout, Specifications, Board Layout, Pin Description	|	https://www.electronicshub.org/arduino-uno-pinout/
How to Use a Breadboard	| 	https://www.sciencebuddies.org/science-fair-projects/references/how-to-use-a-breadboard
AQM0802A LCD Arduino Library	| 	https://www.arduino.cc/reference/en/libraries/fabo-213-lcd-mini-aqm0802a/
Arduino PWM Reference 	| 	https://www.arduino.cc/en/Tutorial/Foundations/PWM
Secrets of Arduino PWM	|	https://www.arduino.cc/en/Tutorial/SecretsOfArduinoPWM
Arduino PWM Tutorial	|	https://create.arduino.cc/projecthub/muhammad-aqib/arduino-pwm-tutorial-ae9d71


