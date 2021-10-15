# Reybotics Class - Lab 6
## Enhancing Robot Functionality to Final Stage 

The goal of this lab is to build upon the previous lab and create a more feature-rich robot. Our goal is to create a line follower robot that can successfully deliver a drink to someone sitting to the side of it. Think of it as though the robot is on the top of a bar, moving back and forth and serving customers drinks. The tasks specified in this lab are for guidance only, the main goal of this lab is to build a robot that can hold a drink, locate a person sitting to the side of it (along the line it is following), and stop to serve them that drink and then return back for a new drink. The only required deliverables are the final Arduino code used and a video of the robot doing the previously described functions. 

## Objectives
1. Add in ultrasonic person detection to know where to stop
2. Confirm autonomous behavior
3. Add button control used when loading in drink
4. Add cup holder on top of robot (may require chassis redesign or addition)
5. Complete integration (clean up wires, update chassis, etc.)
6. Stretch goal: add extendo arm to raise glass to person

## Deliverables
You will be uploading supporting material to show that you have completed deliverables for all of the various tasks. Get comfortable with uploading photos, videos, and any other supporting material to places like Google Drive and YouTube and linking them in the "Deliverables" tables in each lab, like the one below:


Deliverable | Associated Task | Complete? |	Supporting Material (video links, etc. if applicable)
---			|	---		|	---		|	---		|
Add in ultrasonic detection				 			| Task 1c		|		|
Successfully set up autonomous running	 			| Task 2b		|		|
Add a button control used when loading drink		| Task 3c		|		|
Integrate cup holder to top of robot				| Task 4d		|		|
Photo of final integration				 			| Task 5c		|		|
Video of final integration				 			| Task 5d		|		|
Upload final Arduino code to this repo	 			| Task 5e		|		|
Stretch goal: add extendo arm for raising drink		| Task 6d		|		|

## Tasks + Instructions  
1. **Add in ultrasonic person detection to know where to stop**  
  a. Fix an ultrasonic sensor to the side of the robot and integrate it into the overall robot code base.  
  b. Use the ultrasonic sensor to detect where a person is sitting to the side of the robot. Think of it in the bar example, where the robot is moving up and down the bar waiting for someone to sit down and detect them. 
  c. Take a picture of the results and link to it in the Deliverables section.  


2. **Confirm autonomous behavior**   
  a. With the ultrasonic sensor integrated, set up the robot so that it continuously and autonomously follows the line, turns around at the end, and does not stop until someone sits down on the side of its path, at which point it will stop for a brief delay.  
  b. Take a video of the results and link to it in the Deliverables section.

  
3. **Add button control used when loading in drink**  
  a. Our next goal is to be able to signal the robot to begin its drink delivery by initiating it with a button. The idea is that it will be sitting on one end of the bar, and begin it's journey down with the drink once this button is pressed. Optionally, when it stops at the customer, the customer may also push the button to return it to its starting point.  
  b. Add either a wired pust button control OR use the RC remote from previous labs to accomplish this.  
  c. Take a video of the results and link to it in the Deliverables section.

  
4. **Add cup holder on top of robot (may require chassis redesign or addition)**  
  a. This task will involved some additional 3D design and possible updates to the robot chassis.  
  b. Add in a drink holder to the top of the robot that is sufficiently sturdy and does not interfere with the electronics controlling the robot. This should be a secured drink holder that will not cause the drink or robot to tip as it moves back and forth down the bar/line.  
  c. Experiment with different motor speeds now that the robot may have a heavier load on itself.  
  d. Take a photo of the results and link to it in the Deliverables section.


5. **Complete integration (clean up wires, update chassis, etc.)**  
  a. Now that all the individual features should be completed, perform integration on this final project design by doing things such as but not limited to: cleaning up wiring, cleaning up the robot chassis to look nicer and cleaner, finalizing code and commenting it, etc.
  b. The goal is to work out any of the kinks in this design and reduce the possibility of errors, all while producing a nice, solid end product.  
  c. Take a picture of the results and link to it in the Deliverables section.
  d. Take a video of the robot in action on its line course and link to it in the Deliverables section.
  e. Upload your final code as "reybotics_final_control.ino". 


6. **Stretch goal: add extendo arm to raise glass to person**  
  a. A stretch goal of this lab will be to raise and lower a glass using an extendo arm attached to the robot.  
  b. This will likely require a fair bit of redesign, as this feature is likely to cause the robot to tip over when fully extended.  
  c. You will likely want to implement this feature with a servo motor, however be careful with using one with sufficient power available. 
  d. Take a video of the robot in action on its line course and link to it in the Deliverables section.  


## Resources
Description	| Link
--- | ---
Item | Link
