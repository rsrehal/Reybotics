# Reybotics Class - Lab 4
## Sensor Interfacing 

The goal of this lab is to get familar with the various sensors we may be using to provide inputs to our robot's control system. 

## Objectives
1. Set up IR sensor to detect dark and light surfaces
2. Set up a 2x1 array of IR sensors to detect dark/light contrasting lines
3. Set up ultrasonic sensor to detect stationary objects
4. Test ultrasonic sensor detection distances
5. Compare sensitivity of IR sensor detection vs. ultrasonic sensor detection

## Deliverables
You will be uploading supporting material to show that you have completed deliverables for all of the various tasks. Get comfortable with uploading photos, videos, and any other supporting material to places like Google Drive and YouTube and linking them in the "Deliverables" tables in each lab, like the one below:


Deliverable | Associated Task | Complete? |	Supporting Material (video links, etc. if applicable)
---			|	---		|	---		|	---		|
Successfully detect light and dark surfaces 				| Task 1h		|		| 
Successfully detect contrasting line on a surface			| Task 2e 		|		|
Successfully detect an object with ultrasonic sensor		| Task 3d 		|		|  
Determine reasonable ultrasonic detection distance			| Task 4c 		|		| 
Show a comparison between IR sensors and ultrasonic detection 	| Task 5 		|		| 


## Tasks + Instructions  
1. **Set up IR sensor to detect dark and light surfaces**  
  a. We will be playing with and developing the interface for using the IR sensors purchased for this lab.  
  b. The IR sensors come as self contained modules with 3 pins - VIN (+5V), GND, and OUT. Out is described as a digital output which indicates whether an object is detected.  
  c. Digging further into the behavior of the OUT signal, we can determine that really what the sensor is looking for is a return of the IR light that it is sending out from the transmitter (clear LED) and is being detected by the IR receiver (dark, opaque LED).  
  d. This then leads us to understand that if we have a black or white surface, then different amount of IR light will reflect back.   
  e. Develop in interface to the IR sensor module to be able to read and report out the status of the OUT signal to the terminal via an Arduino.  
  f. Play with the following parameters to confirm we can find a set up that allows us to distinguish between a white and black surface: distance IR sensor is held above the surface, angle of the IR sensor facing the surface, and type of black or white tape used on surface. Example: if the surface is white, place black tape on it. If the surface is black, place white tape on it in a line. Experiment with different combinations until you can reliably detect the difference between a light and dark surface.  
  g. If the above step is not successful, you may need to try using a different sensor to detect a contrasting line on a surface. Our goal is to be able to track a contrasting line on the ground below our robot.  
  h. Take a video of the results and link to it in the Deliverables section. 


2. **Set up a 2x1 array of IR sensors to detect dark/light contrasting lines**   
  a. Once you are able to distinguish between a light and dark surface using a single IR sensor, we will expand this detection to two sensors inline on the same horizontal plane.  
  b. Update your code from Task 1 to interface two sensors to your Arduino.  
  c. Fix two sensors inline with each other using a pencil or other rigid object. This will be for testing purposes only.  
  d. Using this fixture, try to detect a contrasting line on a surface (example: a thick, black line of tape on a white piece of paper) by moving the sensor fixture back and forth perpendicular to the line. Our goal is to be able to detect when the sensors have the line directly between them, and when they stray from that position, it will be detected.  
  e. Take a video of the results and link to it in the Deliverables section. 

  
3. **Set up ultrasonic sensor to detect stationary objects**  
  a. Next, we will attempt to detect an object using an ultrasonic sensor. This is potentially an alternative to our IR sensors, but could also serve as an accessory to our robot system in other ways.  
  b. Using one of the purchased ultrasonic modules, interface it with the Arduino.  
  c. Develop code for object detection that reports when an object is detected via the Arduino serial interface.   
  d. Take a video of the results and link to it in the Deliverables section. 
  
4. **Test ultrasonic sensor detection distances**  
  a. Building on the previous task, we will now test how well the ultrasonic sensors work.  
  b. Try detecting objects at various distances and angles and find what works best.  
  c. Note down an ideal distance range and mark this deliverable as completed. 


5. **Compare sensitivity of IR sensor detection vs. ultrasonic sensor detection**  
  a. Play around with and compare the sensitivity of IR sensor detection vs. ultrasonic object detection.  
  b. For example, can an ultrasonic sensor angled down at the ground at ~45 degrees detect a speed bump in the surface before the robot runs over it?  
  c. Take a brief video of the results and link to it in the Deliverables section. 


## Resources
Description	| Link
--- | ---
Arduino-based optical proximity sensor using IR LEDs	 | 	https://www.engineersgarage.com/arduino-ir-led-ir-photodiode-proximity-sensor/

