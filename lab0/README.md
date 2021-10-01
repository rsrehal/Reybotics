# Reybotics Class - Lab 0
## Getting familiar with Git and our development tools

The goal of this lab is to get familar with our development environment. We will be using Git to faciliate code review as well as resource downloading. Git and other revision control software packages are crucial in industry for software collaboration and development, and it is a good skill to slot in and learn through the tasks of this course. 

## Objectives
1. Set up Github access
2. Get familiar with Git
3. Set up Arduino development environment
4. Set up Fusion360
5. Order course materials

## Deliverables
You will be uploading supporting material to show that you have completed deliverables for all of the various tasks. Get comfortable with uploading photos, videos, and any other supporting material to places like Google Drive and YouTube and linking them in the "Deliverables" tables in each lab, like the one below:


Deliverable | Associated Task | Complete? |	Supporting Material (video links, etc. if applicable)
---			|	---		|	---		|	---		|
Update row with an "Y" right here, one column over --> | Task 2f		|	Y	|
Update main project's README.md to say "David was here" in visitor section | Task 2m	|		|
Update main project's README.md to say "David was here again" in visitor section | Task	2aa	|		|
Program Arduino successfully 		| Task 3r		|		| 
Fusion360 Design					| Task 4f 		|		| 
Import CAD design to Cura and slice | Task 4n 		|		| 
Export and upload design files		| Task 4o 		|		| 
Order course materials (hardware)	| Task 5a 		|		| 

## Tasks + Instructions  
1. **Set up Github access**    
  a. Download "Github for Desktop" for Windows, or an equivalent Git GUI software  
  b. Log in and get it set up with your account (see resources below)  
  c. Confirm you have access to the "Reybotics" repository rsrehal shared with you. You may need to explore this within the Github website first (see resources below)  
  d. Clone the "Reybotics" repository to a designated location on your computer where you will be doing all your work for this course.   

2. **Get familiar with Git and interact with this project's files**     
  a. Now that you have Github access and have the main project repository cloned to your computer, we can begin modifying files!  
  b. Confirm your cloned "Reybotics" repository includes the following top level files: README.md, LICENSE, .gitignore  
  c. Confirm your cloned "Reybotics" repository includes the following sub folders: .git, and lab0 through lab6  
  d. Enter the "lab0" folder. We will be doing most of the work in here for this lab.   
  e. Each lab will have it's own README.md file which outlines the tasks and objectives for the lab. This also includes an interactive "Deliverables" table which you will update as you complete the tasks for the lab.   
  f. In a text editor, modify lab0's README.md file to check off the first deliverable. I recommend Notepad++  
  g. Save the file.  
  h. Stage the changes within Github Desktop and prepare to commit the changes.   
  i. Enter in a verbose description for the commit which makes it clear what was updated.   
  j. Ensure lab0's "README.md" has been flagged for updating in this commit.   
  k. Commit the changes to the repo (Git repository).   
  l. "Push" the changes to the remote Github repo.   
  m. Verify on the Github website itself that this file was updated with your change by navigating to the lab0 subfolder. The README.md file is displayed by default in each subfolder.   
  n. We will now perform another simple update, but on a top level file.   
  o. Navigate to the top level of the repo and edit the main README.md file.   
  p. There is a location in the file for you to sign a "Visitor Log". Fill this out and leave a message saying "David was here" and save the file.   
  q. Commit and push the changes using the same approach as before.   
  r. Verify this section of the main repo has updated and the README.md displays these changes on the main page.   
  s. Now, we will attempt to pull changes from the remote repo. This is useful when another contributor to the project pushes their own changes.   
  t. In the Github website in your web browser, navigate to the main folder and click on the main "README.md" file.  
  u. We are going to edit this file and pull the changes into your computer directly.   
  v. Edit the README.md in the visitor log again, adding a new message "David was here again"  
  w. Save the file and commit the changes through the Github website itself.  
  x. Confirm in the website that the changes show up.   
  y. On your computer, open the main README.md file and confirm that this new Visitor Log line is not present.   
  z. Now, in Github Desktop, do a "Pull" request and see if you can get these changes from the remote repo.   
  aa. View the main README.md file again and confirm the second Visitor Log line now shows up.   
  ab. Update the "Deliverables" table of lab0 to reflect your successes!  
  
3. **Set up Arduino development environment**    
  a. We will be setting up the Arduino development environment for use in the rest of this course.    
  b. Grab your Arduino Uno, computer, and a USB type B to USB type A cable (the one that can plug into the Arduino Uno).  
  c. Download the Arduino IDE software from https://https://www.arduino.cc/en/software  
  d. Install the Arduino IDE software. If you already have it installed, ensure it has been updated to the latest version (v1.8.16 as of this writing).  
  e. The tricky part of the setup happens if you need to install additional Virtual COM port drivers. This driver enables the USB connection to act as a simple Serial connection. If you have a 3rd party Arduino, then there will be extra steps that you need to take. Especially if your Arduino Uno uses the CH430 chip. If you have a board straight from the Arduino company itself, you likely won't have any additonal installation steps.   
  f. If you end up needing to install the CH430 drivers, search online for the extra steps required before proceeding.  
  g. Connect your Arduino Uno to the computer and confirm it powers on (there may be an LED indicator)  
  h. Launch the Arduino IDE software  
  i. Open "Device Manager" and look at the COM ports to see which one may be used to interact with the Arduino.   
  j. We will be confirming proper functionality of the Arduino by using their provided examples.   
  k. In the Arduino IDE software, navigate to and open the following: File --> Examples --> 01. Basics --> AnalogReadSerial  
  l. Ensure you have the proper board selected. Go to Tools --> Board --> Arduino AVR Boards --> Arduino Uno    
  m. Program the "AnalogReadSerial" example onto your Arduino Uno and confirm it was loaded successful.   
  n. To help with verifying things are loaded, go to File --> Preferences --> Settings --> Show Verbose Output During and check "upload"  
  o. Open a Serial Monitor by going to Tools --> Serial Monitor  
  p. Configure it so it is using the correct COM port and correct serial communication speed. You can verify this by looking at the code in the example (the speed should be 9600 baud)  
  q. Click the "Reset" button on the Arduino Uno  
  r. Verify that you are seeing some text showing up on the Serial Monitor every so often. It doesn't matter too much what the values are, just that new data is coming in and updating.   
  s. If you see that output on the Serial Monitor, you have set up your Arduino to function properly and for use in future labs!  
  t. Update "Deliverables table" in this lab's README.md  
  
4. **Set up Fusion360**    
  a. Download and install Autodesk Fusion360.  
  b. Set up an account with Autodesk.  
  c. Open Fusion360 and sign in with your account.   
  d. Start a new design and name it "lab0_design".   
  e. Create a new 3D model from scratch, as specified in the next step.   
  f. The new design will be a hollow sphere with a 10mm outer radius, and a 2mm shell thickness.  
  g. This design will not be used anywhere and is more for quick CAD practice. Ensure the design is properly constrained.       
  h. Once you are done with the CAD design, save it and prepare for file export. A good way to show off your design in the "Deliverables" section above is to take a screen capture video or handheld video of your design as your move around it in 3D view and view the insides/outsides. This is a form of documentation that will work for us.     
  i. Autodesk defaults to cloud saving, and it is a good habit to save backups of your project files and mesh exports to your local computer.   
  j. Within Fusion360, right click on your relevant body and export this design as a mesh.   
  k. Export the design as both a .stl and .3mf file  
  l. Export the project file as a .f3d file for later use.   
  m. Download and install your slicer software of choice (Cura, Prusa related stuff, etc.)  
  n. Drop the .3mf file into your slicer (Cura, Prusa slicer, etc.), and use the slicer to generate a Gcode file (will be saved as a .gcode file). We will not be printing this file but it is good practice to generate and save this file to have handy.   
  o. Add the 4 design files into the Git repository and commit + push them to Github so that they will be a part of the lab's repo.   
  p. Update "Deliverables table" in this lab's README.md  
  
5. **Order course materials**    
  a. Take a look at the course materials listed in the main project's "README.md". Order any materials that you do not already have in order to be prepared for the rest of the course.   
  b. Update the Deliverables table as appropriate.   

## Resources
Description	| Link
--- | ---
Getting started with GitHub Desktop 	|	https://docs.github.com/en/desktop/installing-and-configuring-github-desktop/overview/getting-started-with-github-desktop 
Git for Beginners: An Overview and Basic Workflow	|	https://www.liquidlight.co.uk/blog/git-for-beginners-an-overview-and-basic-workflow/
git - the simple guide (no BS)	|	https://rogerdudler.github.io/git-guide/
Seeing Github repositories where you are a Collaborator | https://stackoverflow.com/questions/12453358/see-repositories-where-i-am-collaborator
Getting started with Arduino Uno	| https://www.arduino.cc/en/Guide/ArduinoUno
Getting Started With Arduino: A Beginner's Guide	|	https://www.makeuseof.com/tag/getting-started-with-arduino-a-beginners-guide/
How to Get Started with Arduino | https://www.digikey.com/en/maker/blogs/2018/how-to-get-started-with-arduino
Markdown Viewer (for checking .md files before uploading) | https://dillinger.io/


