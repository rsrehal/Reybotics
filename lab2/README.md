# Reybotics Class - Lab 2
## CAD Design of Chassis + 3D Printing 

The goal of this lab is to practice our 3D design skills and create a starting point for our robot. We will use 3D CAD tools to design and 3D print a prototype chassis for use with our robot in the following labs. The chasiss will allow us to integrate two motors to start to get some mobility going. 

## Objectives
1. Design a robot chassis
2. 3D print your robot chassis
3. Simple integration with motors
4. Stretch goal: 3D print wheels
5. Stretch goal: 3D print four bar linkage

## Deliverables
You will be uploading supporting material to show that you have completed deliverables for all of the various tasks. Get comfortable with uploading photos, videos, and any other supporting material to places like Google Drive and YouTube and linking them in the "Deliverables" tables in each lab, like the one below:


Deliverable | Associated Task | Complete? |	Supporting Material (video links, etc. if applicable)
---			|	---		|	---		|	---		|
Create a 3D model of a robot chassis 				| Task 1m		|		| 
3D print the robot chassis							| Task 2e 		|		| 
Assemble chassis with motors						| Task 3g 		|		| 
Optional: 3D print alternative wheels				| Task 4c 		|		| 
Optional: Document 3D model of four bar linkage		| Task 5d 		|		| 
Optional: 3D print and assemble four bar linkage	| Task 5e 		|		| 


## Tasks + Instructions  
1. **Design a robot chassis**  
  a. The main purpose of this lab will be to design a simple robot chassis that will enable us to house the DC motors for the wheels as well as the supporting electronics for the robot. This task will be dedicated to designing this chassis in CAD software.  
  b. The specifications for the chassis will be listed in the next few instruction steps, and you will need to take this specifications and design a chassis that meets that spec.  
  c. ====== Spec begins ======  
  d. The chassis must house two of the Dc motors used in this project. The motors must be able to be swapped in and out easily, and also be securely attached to the chassis (either through press fit or screwed in connections).  
  e. The chassis must have a floating third "wheel" which will simply be a half-sphere used to provide support. See the Resources section for more info on a "Differential Wheeled Robot". The idea is that there will be two driven wheels at the back, and a support "wheel" in the front to provide an easy turning mechanism without the need for another actual wheel or motorized component. This will essentially be a three wheel robot.  
  f. The chassis must provide a housing for an Arduino Uno and related component. This can be as simple as an outline on the top that the Arduino drops into securely.  
  g. The chassis must provide locations to insert sensors for future use. Take a look at the IR sensors and ultrasonic sensors and provide attachment points for them for future use. The IR sensors will have two, equally spaced attachment points in the front of the robot, and the ultrasonic sensors may be on either the right of left side of the robot, as well as potentially in the front. Do not spend too much time on this, as we will revise in later labs. Just keep this in mind and leave space for it for future re-designs.  
  h. Design for manufacturing in mind. Try to minimize support structures needed, as well as making decisions which will help the structrual strength of the chassis.  
  i. Leave an area for use with batteries in the future. You can use the two or three battery holders ordered for this lab as an example footprint to design to.  
  j. Add in text that says "Reybot" at some visible location on the chassis. This can either be extruded up out of the face or down into the face.  
  k. Design with robustness in mind but with minimum infill and easy feature sizes to 3D print to.  
  l. ====== Spec ends ======   
  m. Document your design and export the project file as well as STL/3MF files. Update the Deliverable table as needed and add any necesarry files to the repo.  


2. **3D print your robot chassis**   
  a. In this step we will 3D print the chassis we designed in the last task.  
  b. Export and slice your design using your preferred software and then 3D print the chassis.  
  c. Save the gcode file to this repo.  
  d. Iterate on your design until your print outputs a chassis that meets all your desired tolerances such that it fits all your components properly, as specified in the last task.  
  e. Document your design and export the project file as well as STL/3MF files. Update the Deliverable table as needed and add any necesarry files to the repo. Include build pictures of the 3D printing in action.  
  
3. **Simple integration with motors**  
  a. Assemble your motors and Arduino into the chassis printed in the last step.  
  b. We will test how well this chassis allows our primitive robot to move around.  
  c. Using the Arduino code developed in the previous lab, try maneuvering the robot forward by driving both wheels with an ON signals from the Arduino outputs. Observe how easily the robot moves forward. If it struggles, this may require a redesign of the "third wheel" feature. Get creative with this if the intial solution does not work well.  
  d. Drive the right wheel and see how well the robot turns. This will be a key feature of having the fixed third wheel, so it is important to evaluate this functionality.  
  e. Drive the left wheel and see  how well the robot turns, evaluating it as before.  
  f. Ensure the motors have stayed fixed in place during these tests, otherwise a redesign of the chassis will be necessary. The motors should be fixed in place and not wiggling around while the robot is moving.  
  g. Document your results in a video and update the Deliverables table as necessary. 

  
4. **Stretch goal: 3D print wheels**  
  a. As a stretch goal, have fun and design and 3D print some alternative wheels for use with the motors. Experiment with different sizes, widths, etc.   
  b. Ensure that they can attach to the motors using a press fit and are secure when the motor is actuated.  
  c. Document your design appropriately and update the deliverable section as needed.  


5. **Stretch goal: 3D print four bar linkage**  
  a. A stretch goal of this lab is to design and 3D print a four bar linkage for potential use in raising and object up and down.  
  b. Experiment with this design by modeling it in a CAD software and then attempting to 3D print and assemble it.   
  c. Design it with using a stepper motor in mind. A stepper motor would be a great way to raise and lower this linkage.  
  d. Document your 3D model and add the project file and STL/3MF file to this lab's Git repo. Update deliverables sections as needed.     
  e. Document the results of 3D printing and assembly of the design for this task. Update deliverables section as needed.   


## Resources
Description	| Link
--- | ---
Differential Wheeled Robot Description | https://en.wikipedia.org/wiki/Differential_wheeled_robot

