# Reybotics Class - Lab 5
## Base Robot Integration 

The goal of this lab is to build a simple line follower robot that can follow a straight line on the surface of a table or ground, and turn around and drive back after reaching the end of the line. The tasks specified in this lab are for guidance only, the main goal of this lab is to come out of it with a functioning robot that works reliably. The only required deliverables are the final Arduino code used and a video of the robot following a line beneath it. If line following was not working properly in previous labs, this may be swapped out for an ultrasonic detection method such as stopping short of a low barrier at the end of the line.  

## Objectives
1. Integrate 2x1 IR sensors to front of robot
2. Test various line widths and IR sensors placements for best results
3. Confirm stopping behavior at end of line
4. Implement 180 degree turn at end of line
5. Calibrate movement with new battery powered source
6. Complete integration for intermediate design
7. Stretch goal: adjust speeds based on detected power source
8. Stretch goal: try to follow a curving line

## Deliverables
You will be uploading supporting material to show that you have completed deliverables for all of the various tasks. Get comfortable with uploading photos, videos, and any other supporting material to places like Google Drive and YouTube and linking them in the "Deliverables" tables in each lab, like the one below:


Deliverable | Associated Task | Complete? |	Supporting Material (video links, etc. if applicable)
---			|	---		|	---		|	---		|
Successfully attach IR sensors to robot 			| Task 1c		|		| 
Determine optimal line width + sensor placing		| Task 2c		|		| 
Successfully set up robot to stop at end 			| Task 3c		|		| 
Successfully perform 180 turn consistently 			| Task 4b		|		| 
Integrate battery power source			 			| Task 5b		|		| 
Photo of complete integration of intermediate design	| Task 6c		|		| 
Video of complete integration of intermediate design	| Task 6d		|		| 
Upload Arduino code to this repo					| Task 6e		|		| 
Stretch goal: calibrate power source speeds			| Task 7c		|		| 
Stretch goal: successfully follow a curving line	| Task 8d		|		| 


## Tasks + Instructions  
1. **Integrate 2x1 IR sensors to front of robot**  
  a. Attach a 2x1 array of IR sensors temporarily to the front of your robot chassis at the optimal distances and angles determined in the previous labs. This may required adjustment of the robot chassis design later on in the lab once the positions are fixed. 
  b. Use this task as an opportunity to begin integrating the code for the IR sensors into the code previously developed for the motor control of the robot.  
  c. Take a picture of the results and link to it in the Deliverables section.  


2. **Test various line widths and IR sensors placements for best results**   
  a. With the IR sensors attached, experiment with different line widths and IR sensor spacings to determine what works best. Note this will be a different experiment from the last lab because now we will be using the wheels to control the location of the IR sensor array by moving them back and forth. This will cause a more arced travel path rather than a straight side to side path.  
  b. Once you have determined spacing and distances that works well, finalize these and potentially updated your robot chassis to match this.  
  c. Take a picture of the results and link to it in the Deliverables section. 

  
3. **Confirm stopping behavior at end of line**  
  a. With the IR sensors permanently fixed now, we will work on handling the event of getting to the end of the line. I imagine this will be kind of a "T" crossing, where the straight line will meet a perpendicular line of tape that will indicate to the robot that it is the end. You can implement this however you want, and our goal is simply to have a way to signal to the robot that the end of the line has been reached. 
  b. Play around with this until you get a set up that works well for telling the robot when it needs to stop (so it doesn't fall off the bar surface, for example). 
  c. Take a picture of the results and link to it in the Deliverables section. 
  
4. **Implement 180 degree turn at end of line**  
  a. Building on the previous step, implement an action of the robot so that it turns around 180 degrees once it reaches the "end of the line". This will allow the robot to traverse back and forth automatically on the straight line. 
  b. Update the Deliverables section as necessary once this is completed. 
  
  
5. **Calibrate movement with new battery powered source**  
  a. If not already done, integrate the battery power source and calibrate all the motor movement speeds to be able to achieve the same functions in the previous tasks of this lab. 
  b. Update the Deliverables section as necessary once this is completed. 
  
  
6. **Complete integration for intermediate design**  
  a. Now that all the individual features should be completed, perform integration on this intermediate project design by doing things such as but not limited to: cleaning up wiring, cleaning up the robot chassis to look nicer and cleaner, finalizing code and commenting it, etc.
  b. The goal is to work out any of the kinks in this design and reduce the possibility of errors, all while producing a nice, solid end product.  
  c. Take a picture of the results and link to it in the Deliverables section.
  d. Take a video of the robot in action on its line course and link to it in the Deliverables section.
  e. Upload your code as "reybotics_intermediate_control.ino". 


7. **Stretch goal: adjust speeds based on detected power source**  
  a. This may have been accompolished in a previously lab. 
  b. The goal of this task is to detect the power source to the robot and update the motor control speeds accordingly. 
  c. Update the Deliverables section as necessary once this is completed.


8. **Stretch goal: try to follow a curving line**  
  a. As a stretch goal, try to follow a curving line and see how well this functionality works. This may require some updates to the code to increase its sophistication and responsiveness. 
  b. Document this update with a video of the robot in action following a curved line and link to it in the Deliverables section.


## Resources
Description	| Link
--- | ---
How To Make Simple Line Follower Robot using Arduino	 | 	https://www.youtube.com/watch?v=QL4K7n2c5WM
How to Make Line Follower Robot Using Arduino	|	https://www.instructables.com/Line-Follower-Robot-Using-Arduino-2/
Line Follower Robot		|	https://create.arduino.cc/projecthub/saher-iqbal/line-follower-robot-36516b?ref=similar&ref_id=94910&offset=1
Differential Wheeled Robot	|	https://en.wikipedia.org/wiki/Differential_wheeled_robot
Everything You Need to Know About the 18650 Battery	|	https://commonsensehome.com/18650-battery/
Salvaging Rechargeables for Projects	|	https://www.instructables.com/Salvaging-Rechargeables-for-Projects/

