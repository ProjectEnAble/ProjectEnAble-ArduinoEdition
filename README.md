# Project: EnAble
Copyright © 2023 Jeron Osguthorpe
[projectenable.org](https://projectenable.org)

## Current Recommended Version - v3.1.0a - Beta
### Version History

|Version | Supported          | Beta | Alpha |
| ------- | ------------------ | ---- | ----- |
| 3.1.0a - Beta | :white_check_mark: | :white_check_mark: | :x: |

# About
Project: EnAble is an open source prosthetic system and design created by Jeron Osguthorpe with hopes to help make the world more accessible. Project: EnAble uses a series of sensors, motors and micro computers (either RPi or Arduino) in order to control customizable
prosthetic devices.

# License and Copyright Information
Project: EnAble is under Copyright © 2023 by Jeron Osguthorpe. It is under the LGPL-2.1 License.

The Project is Open Source, however:
- You may alter files after download, but we are not held responsible for any changes or damages
- You must keep the licence and copyright files within the library
- Security files are a must and cannot be removed
- You are not allowed to make any system wide changes without authorization. You can make local changes but not system wide changes without approval.

# CHANGE LOGS

8.30.21

index.py is created to test the touch sensors. The touch sensors were purchased off of Amazon for 10 of them for about $8. The serial number for the sensors is TTP223 Sensor Module. The sensor module successfully works with the Raspbery Pi 3B+ 

8.31.21 - Part A: 

motors.py, microbit.py, motorspy2.py files were all crated to test certain funciton (look in directory). Remington came over to help program the sensors and the motors. Before he came over, I got all the sensors working and got it so that if the sensor goes off the motors move. We changed it with the help of Rem to make it so that it is now when the sensor is pressed the motor stops. All of this  is contained in motorspy2.py. We are trying to make it so that and "or" statement inside a while statement works. 

9.1.21

motorspy2.py alteration. Fixed the problem with getting both the sensors to stop the motor. Did this by changing it form an "or" statement to an "and" statement. For some reason, this works.

9.2.21 

Today we had science research because it is a Thurday. I realized in class that I only have 26 avaiable pins for the sensors and the motors at the same time. So I decided to put two sensors into one pin becasue as long as it can send an input to the raspberry pi, it should work. I have decided that I am just going to stick with the Raspberry Pi an the Micro:bit because I really don't want to have to convert everything from Python into Micro:Python becasue honestly that is just a pain. Everthing has been assigned its new pins and they are all contained inside of the new file that I made.

9.2.21

fixed a couple of spelling mistakes in README.MD. I did this mostly to see if I can use git and github correctly, before I make any big changes to the code.

9.2.21

Just barely added a bunch of Micro:Bit Serial codes. Here is the list 
Shake = 1 
Logo up = 2
Logo Down = 3
Screen Down = 4
Screen Up = 5
Tilt Left = 6
Tilt Right = 7
Freefall = 8
3G = 9
6G = 10
8G = 11 
A = 12
B = 13 
AB = 14 


12.14.2021

Changed the motors around in the code and fixed the sleep problem. The entire hand is now assembled, Just have to figure out where I want to put the motors. Other than that the project is pretty much done. It is supposed to be done by 12.16.2021...so I really need to hurry, but it should be all fine. Hopefully Rem can fix the code and get it to me soon. I also uploaded a "main.py" this is now the new main file. 

6.18.2022

As of June 18th of 2022, this is the final last edit of Project: EnAble v2.0. Project: EnAble v3.0 will now commence including the new forms for the science fairs that the project will be competing in, including the many different forms of the project. Past versions will be avaible in their respective folders. Thanks to everyone who was and is supporting me with this project, we ended up winning First Place in our local science fair, The Air Force award as well as the chance to go to Atlanta, Georgia for the International Science and Engineering Fair (ISEF 2022)!  

6.18.2022 - B

As of June 18th of 2022, the forms for the 2023 year of the project have now been uploaded. The project goes from May 16th 2022 to whenever finished (must be before May 16th 2023). The research plan has also been uploaded for the 2023 project. The 2023 project is refered to as Project: EnAble v3.0. The number after the decimal will change later on in version notes, but the overall project for the year will be refereed to as "Project: EnAble v3.0". The project this year has now been completely opened up to OPEN SOURCE. Anyone can use the files within this project as long as they are following the licenses provided (see LICENCES). All forms and information regarding v1.0 are under the year "2021" however, the files are missing. This project is competing for the International Science and Engineering Fair under Jeron Osguthorpe. Please see more info under v3.0 release notes when it is released. License notes have been updated for the 2023 year. "Project: EnAble is officially licensed with Copyright under the "GNU LESSER GENERAL PUBLIC LICENSE Version 2.1"

6.19.2022

As of June 19th of 2022, Project: EnAble v3.0 has started production. See the todo list in the "Projects" tab to see what we are doing for Project: EnAble v3.0 at the moment. 

7.24.2022

Been a while since we have updated the chagne logs. As of right now, we are in the 3D design and printing of the development of Project: EnAble v3.0. Soon hereafter we will have the Gauntlet finished. After that, we will work on the development of the palm, and then the fingers. The Philanges being used this year are going to be an altered design of the philagnes used in the Cyborg Arm by Creighton University, also the philagnes used in v2.0 of Project: EnAble. Hopefully, we will be able to get the Raspberry Pi version of everything up and printed. The only deifference between the Raspberry Pi version and the Arduino version in terms of the phiscial 3D Printed hand, is the Gauntlet. The Gauntlet will be accomondated for the Arduino, however, should not look much different. Thanks for all your support, it is greatly appreciated. Check out our twitter account at http://twitter.com/proj_enable and at our Webstie at http://projectenable.org. To give suggestions, ask questions or anything else, please check our discussions page or email me at jeronosg@outlook.com. If you would like to donate, please see our donations links. If you would like to see how far we are in development, please see our projects page. Again, thanks, and we will keep you updated. 

8.15.2022

Development of 3D Designs for a Hand for the Project:EnAble v3.0 open source system is on pause. However, development of the Program of Project:EnAble v3.0 has now started and should have the main release finished in a week or so for Raspberry Pi. Development for Arduino version has not started yet. Check out the discusssion and projects tab for more information. 

9.14.2022

Development has continued. At the moment, basic bugs in the "v3.0" file in the Beta version of Project: EnAble v3.0 have been fixed. Development will stay on pause with code for the next big while I once again, continue to work on the design of the hand. The two main designs that I am having trouble with are the Gauntlet, and the Palm. If you have any suggessions of what I can do with anything, please either message me, visit the discussions tab, make an issue, or tag me on twitter. Thanks. 

9.16.2022 - A

Development of Project: EnAble v3.0.02 - BETA has begun. Sadly, the continuation of the design of the gauntlet has not. I should be getting to that later (as in later today). Project: EnAble v3.0.02 - BETA and above will be using a licensing service offered by Cryptolens. Becasue our project aims to be affordable and open source, the licenses will be free. You will have to request a license however in order to use the program. This is to try to eliminate as much piracy as possible. I am aware that there are ways to get around this by editing the code, I at this point in time am just going to trust the honor system with how far we are with the project. You guys are the best and thank you so much for your suport and your understanding. Let me know if you have any questions, comments, concerns or anything else. 

9.16.2022 - B

Created information.md. information.md gives basic information while programing, such as Micro:Bit information, as well as how to change the project to work with different prosthetics. I also made edits to v3.0.py, making it a bit more cleaned up and organzied. Updated SECURITY.md.

9.17.2022 - 9.18.2022

Updated v3.0.py. Made changes concerning the functions for shaking someones hand and/or canceling the functions. Updated the gauntlet making changes that will fix multiple measurement errors. Also made a YT video containing everything that is/will be new with v3.0.02/03. You can find said video [here](https://youtu.be/PkbhiCFiDQM).

12.10.2022

I know that it has been a while since I have updated this. I apologize for that. In terms of official releases on the project, you can see more in the project history. You can also find out more by visiting our [Twitter Page](http://twitter.com/Proj_EnAble).

1.23.2023
As of today, v3.0.03-BETA is released along side the [YouTube Video](https://www.youtube.com/watch?v=dp4VP448C9U). This is the final BETA release of Project: EnAble v3.0 before the official release. The official release will be released towards the end of Febuary to the beginning of March. If you have any questions, comments or concersn please see the contact information above. If you would like ot know more of Project: EnAble v3.0.03-BETA see the the release under "RELEASES". Thanks for all your support.

3.7.2023
As of today, v3.0.0 is released. This is the official release of Project: EnAble v3.0. If you have any questions, comments or concersn please see the contact information above. If you would like ot know more of Project: EnAble v3.0.0 see the the release under "RELEASES". Thanks for all your support.

5.4.2023 
Bluetooth Support is now added! Now you can use the official Android Project: EnAble app (releasing in late May 2023), to control the sensitivity of the prosthetic devies(s). *NOTE: This is only for Raspberry Pi Edition*. Setting up bluetooth suppport can be found in the information.md file. This contains all the information you need to set up your device. The official Android app will be relased along with Project: EnAble v3.1.0 - Beta in late May of 2023. Expect some crazy new featuers as well as custom sensitivity and user profiles! If you would like to learn more of how this was created, check out the YouTube Channel [Coding Tricks](http://youtube.com/codingtricks). Thank you all for your support!  

6.7.2023
Update on everything. We will be presenting at a tech conference in Chicago in late June. For this tech conference we will be presenting the Arduino v3.1.0 - Beta version of the project. As of today, this version has not been officially released, but it will be in the upcoming weeks. 

7.10.2023
Update again. Chicago was a success! Thank you to all those who have been supporting me and the project thorugh this journey! I am happy to announcethat we will be changing the repositories for the project up a bit. Releasing later today will be two different repositories, one of which will be the Raspberry Pi repository (releasing with v3.1.0 - Beta), and the other will be the Arduino repository (releasing with v3.1.0a - Beta). As with these versions, the official Android App for the Raspberry Pi version can be found at the official website, http://enableapp.codingtricksyt.com. **edit: site will be changing soon**. Thanks again for all your support. 

7.10.2023 - B
As another announcemnt, Project: EnAble v2.0 - Final is no longer supported and will be disapearing along with the old repository. 
