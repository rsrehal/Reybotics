# Reybotics Class - Lab 3
## Motor Control 

The goal of this lab is set up more sophisticated motor control hardware and set it up for use in later labs. 

## Objectives
1. Integrate motor driver shield
2. Control robot with motor driver shield using serial connection inputs
3. Send remote control commands to Arduino
4. Control robot manually with remote control
5. Fine tune motor control to allow robot to drive straight reliably
6. Stretch goal: integrate battery pack
7. Stretch goal: add voltage monitoring to detect power source being used

## Deliverables
You will be uploading supporting material to show that you have completed deliverables for all of the various tasks. Get comfortable with uploading photos, videos, and any other supporting material to places like Google Drive and YouTube and linking them in the "Deliverables" tables in each lab, like the one below:


Deliverable | Associated Task | Complete? |	Supporting Material (video links, etc. if applicable)
---			|	---		|	---		|	---		|
Successfully integrate motor driver shield 							| Task 1h		|		| 
Program Arduino to accept serial input controls						| Task 2b 		|		| 
Receive remote control button commands and send back on serial port	| Task 3i 		|		| 
Program Arduino to control robot manually with remote control		| Task 4e 		|		| 
Fine tune Arduino program to have robot drive straight				| Task 5b		|		| 
Stretch goal: show robot running on battery power					| Task 6g		|		| 
Stretch goal: show power source detection working					| Task 7h 		|		| 


## Tasks + Instructions  
1. **Integrate motor driver shield**  
  a. Gather your motor driver shield, Arduino Uno, and two DC motors and prepare to integrate them.  
  b. For this task, we will plan to power the motor driver shield off of the Arduino's +5V supply. In the future, we will likely transition to a higher voltage source via batteries.  
  c. Inspect the motor driver shield's terminal connections and get familiar with what will be connected where. There should be outputs for the two DC motors and a power input terminal, as well as a control input terminal.  
  d. Important note: the power input terminal may have 3 connections: +12V, GND, +5V. It is important to note the function of each connection, as it is not explicitly clear. Most likely, it means the following: GND is the common return which will be shared with the Arduino, the +12V connection is an INPUT that likely accepts anywhere from +5V to over +12V (we will be hooking up the Arduino's +5V output pin to this terminal), and the +5V connection is an OUTPUT which can be used to power the Arduino in some circumstances (this connection will be unused if we are powering the shield with the Arduino's +5V suppply). These are not guaranteed to be labeled this way on the motor shield, but this description should serve as a starting point.  
  e. Connect all the components together and confirm operation by using your previously developed Arduino code to actuate the motors. This should be done outside of the robot chassis. The Arduino should still be powered via the USB cable.  
  f. Troubleshoot as necessary, and once everything appears to be working properly, move to integrating this new setup into the 3D printed robot chassis. This may require adding new mounting points and/or re-designing the chassis.  
  g. Run the same code as you did in Step 1e but now with the hardware integrated into the robot chassis.  
  h. Take a video of the results and link to it in the Deliverables section.  


2. **Control robot with motor driver shield using serial connection inputs**   
  a. Using the hardware setup from the previous Task, update your Arduino program to accept commands over the Arduino's serial connection.  
  b. Take a video of the results and link to it in the Deliverables section. 

  
3. **Send remote control commands to Arduino**  
  a. In this task we will set up the RC control module being used for this project.  
  b. Using the 3 pin receiver module, connect it using a breadboard and jumper wires to the Arduino. Note the pinout of the board. The side labeled with a '-' sign will have it's GND connection on the pin closest to the '-'. The middle pin should be a +5V input, which can be retrieved from the Arduino. The remaining pin should be the sensor output which may be a digital output and can be connected to an appropriate Arduino pin.  
  c. Using an appropriate "IRremote" library for the Arduino (you will need to find this), begin interfacing with the receiver module.  See the Resources section of the lab for more information.  
  d. Set up a simple program to report the data sent over by the IR receiver and to send it over the serial port to the computer. Use this program to test the various remote control button presses and ensure your Arduino is receiving things properly.  
  e. Make an informal legend to track which remote control button presses correspond to what data being received by the Arduino. 
  g. Work out any kinks with this interface, and ensure the Arduino can receive commands from the remote control in a responsive manner. 
  j. Be sure to add and upload your code to this repo as "3_rc_feedback.ino".
  i. Take a video of the results and link to it in the Deliverables section. 

  
4. **Control robot manually with remote control**  
  a. Update your code from Task 2 to accept inputs via the remote control interface instead of the serial port interface.  
  b. The goal is to be able to move the robot around using the remote control. Take care that the robot does not move too far as it may still be relying on it's connection to the computer for power.  
  c. You can define the command structure, although the simplest way to do this is have the direction controls on the remote map directly to the robot's movement direction.  
  d. Be sure to add and upload your code to this repo as "4_manual_rc_control.ino".
  e. Take a video of the results and link to it in the Deliverables section. 

  
5. **Fine tune motor control to allow robot to drive straight reliably**  
  a. Experiment with different speed settings for the left and right motors, and settle on values that allow the robot to move in a straight line with minimal drift. This may require lower speeds overall rather than speeds near it's max.  
  b. Take a video showing the robot traveling in a straight line and link to it in the Deliverables section. 


6. **Stretch goal: integrate battery pack**  
  a. As a stretch goal, we are going to replace the power source with one from a rechargeable battery pack.  
  b. Use the batteries purchased for this project. Charge them and prepare to integrate them. We will need 2-4 batteries.  
  c. We will be wiring the rechargeable batteries *in series* with each other to create a larger voltage supply than any of them can create on their own.  
  d. Two batteries should be sufficient to start with, as this will nominally yield 7.2V with both in series.  
  e. Replace the connections on the motor driver board with ones using the battery pack wires. Keep in mind the battery pack will now be providing the input voltage to the board, and the Arduino can *receive* it's +5V supply from the integrated +5V output supply which is also on the motor driver board. This will eliminate the need to power the Arduino and the robot overall with the USB connection from the computer.  
  f. Complete integration of the battery pack and repeat Tasks 4-5 but now tailoring the speeds to the battery pack provided torques.  Keep track of the various values for the motor speeds used for each power source, USB and battery pack respectively. 
  g.  Take a video of the results and link to it in the Deliverables section. 
  h. Experiment with using 2-4 batteries to gauge the speed and power of the robot in the different configurations. WIdeally we would use only 2 batteries, however this may not provide sufficient torque to the motors. If this is the case, move to a 3 battery system. 


7. **Stretch goal: add voltage monitoring to detect power source being used**  
  a. An optional but useful addition to this project could be to add a voltage monitoring to detect which power source the robot is being powered with. This would allow the Arduino to automatically adjust it's motor speed control values to prevent the robot from being driven too fast or too slow if the power source was swapped out.  
  b. Our general approach to this will be to tap off of the motor driver board's voltage input connection, use a resistor divider to scale down the voltage below 5V max, and then use the Arduino's analogRead() functionality to read in the voltage.  
  c. I would recommend using a resistor dividier that scaled down the input voltage by either 1/2 or 1/4.  
  d. Make the appropriate connections using jumper wire and components on your breadboard.  
  e. Create a simple Arduino program to read in the voltage from this monitor circuit. Be sure to scale the voltage back up before repording out the value via the serial port. 
  f. Be sure to add and upload your code to this repo as "4_manual_rc_control.ino".
  g. Once this is working, integrate this functionality into the code developed in Task 5 (or Task 6 if it was completed) Be sure to add and upload your code to this repo as "6_voltage_monitoring.ino".
  h. Take a video of the results showing both possible power sources connected and link to it in the Deliverables section. 


## Resources
Description	| Link
--- | ---
How to use the L298N Motor Driver	 | 	https://create.arduino.cc/projecthub/ryanchan/how-to-use-the-l298n-motor-driver-b124c5
How To Control a DC Motor with an Arduino	|	https://www.allaboutcircuits.com/projects/control-a-motor-with-an-arduino/
Arduino Lesson 13. DC Motors	|	https://learn.adafruit.com/adafruit-arduino-lesson-13-dc-motors
DC Motors Control Using Arduino PWM with L298N H-Bridge	|	https://create.arduino.cc/projecthub/Fouad_Roboticist/dc-motors-control-using-arduino-pwm-with-l298n-h-bridge-d6ec91
L298N Motor Driver – Arduino Interface, How It Works, Codes, Schematics	|	https://howtomechatronics.com/tutorials/arduino/arduino-dc-motor-control-tutorial-l298n-pwm-h-bridge/
Use an IR Remote Transmitter and Receiver with Arduino	|	https://create.arduino.cc/projecthub/electropeak/use-an-ir-remote-transmitter-and-receiver-with-arduino-1e6bc8
How to Set Up an IR Remote and Receiver on an Arduino	| https://www.circuitbasics.com/arduino-ir-remote-receiver-tutorial/
Arduino Infrared Remote Tutorial	|	https://www.instructables.com/Arduino-Infrared-Remote-tutorial/
How to use an IR receiver and remote with Arduino	|	https://www.makerguides.com/ir-receiver-remote-arduino-tutorial/

