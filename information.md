# Extra Code Information for Project: EnAble v3.0

Here is some extra information about the code contained in v3.0.py. This is information such as [Micro:Bit](https://microbit.org) serial data code, and other related code. 

## Micro:Bit
### Serial Data Codes
B'1' = SHAKE

B'2' = LOGO UP

B'3' = LOGO DOWN

B'4' = SCREEN DOWN

B'5' = SCREEN UP

B'6' = TILT LEFT

B'7' = TILT RIGHT

B'8' = FREEFALL 

B'9' = 3G

B'10' = 6G 

B'11' = 8G

B'12' = BUTTON A

B'13' = BUTTON B

B'14' = BUTTONS AB 

## Connecting Pins
### Servo Motors
Index Finger: 5
Middle Finger: 6
Ring Finger: 13
Pinky Finger: 19
Thumb: 26

### FSR Sensors
CLK: 12
MISO: 16
MOSI: 20
CS: 21

## How to Change from Prostheic Hand, to some other Prosthetic Device
### Step 1
For those of you who are creating a prostheic deivce with the software based off Project: EnAble, this is how you would do this. You will want to make a fork of Project: EnAble off of the [GitHub Repository](http://github.com/projectenable/Project-Enable). 

### Step 2
You will want to then ONLY ALTER v3.0.py. You will only alter information after the comment that says, "START OF CODE (CAN EDIT AS YOU WISH)". Because we use a Micro:Bit as our main sensor for the Raspberry Pi version of the project, we will be altering the functions based off the code. 

#### Step 2.1 - Importing Libraries
Make sure that you have all the libraries imported correctly for your project. You will most likely not need more than I have already provided. 

Some you may have to install onto the Raspberry Pi. You can do this by running the following commands: 
##### PIL/Pillow
`sudo apt-get install python3-pip`
`pip3 install pillow`

##### Touchscreen Libraries
`sudo rm -rf LCD-show`
`git clone https://github.com/goodtft/LCD-show.git`
`chmod -R 755 LCD-show`
`cd LCD-show/`
`sudo ./MPI3508-show`

##### Tkinter (may need)
`sudo apt-get install python3-tk`

#### Bluetooth Connectivity (for Project: EnAble Android Application) -- Upcoming Update

PAIR YOUR PHONE TO THE RASPBERRY PI AND DO THE FOLLOWING STEPS

`sudo bluetoothctl`
`connect PHONE_MAC_ADDRESS`
`trust PHONE_MAC_ADDRESS`

NOW EDIT THE FOLLOWING FILE

`sudo nano /lib/systemd/system/bluetooth.service`
add --compat to line "ExecStart=/usr/lib/bluetooth/bluetoothd" 

Should look like: "ExecStart=/usr/lib/bluetooth/bluetoothd --compat"

NOW RECONNECT THE PHONE TO THE RASPBERRY PI

DO THE FOLLOWING STEPS
`sudo nano /etc/rc.local`

Add `sudo rfcomm watch hci0` before the `exit 0` line 

** REBOOT ** 

NOW YOU MAY RUN `test_bluetooth.py` or `bluetooth.py`

As of right now, bluetooth is experimental, it does not seem to like to corroperate with the app, so we may need to give it it's own separate run file. It shouldn't be too difficult but as of right now we are focusing on other things.

##### Other Libraries Used (should already be preinstalled)
`import subprocess`
`from fileinput import close`
`import RPi.GPIO as GPIO`
`import time`
`from time import sleep`
`import os`
`import random`
`import serial`
`import bluetooth`


#### Step 2.2 - Importing Micro:Bit Serial Information
If you are simply connecting the Micro:Bit to the Raspberry Pi via. USB, you will not need to edit this area. Assuming you are running [Raspberry Pi OS](https://www.raspberrypi.com/software/). If you are running off of other software, the "z1port" may or may not need to be changed according to what port you connect. 

#### Step 2.3 - Setting Variables for Sensors and Motors
For this section, I have already entered the variables for pressure sensors for a prosthetic hand, servo motors for a prosthetic hand. If you are using servo motors, then you dont have to change anything else afterwards. If you ARE NOT using servo motors, then you can change the "SETUP SERVO MOTORS" section. 

Overall, you only need to edit the port numbers according to what you assign. This is what I have assigned. 

#### Step 2.4 - Sensitivity
This is a part that you will edit. If you are wanting multiple modes and need to ask the user for input, then you can edit this to the input that you want. 

NOTE! You can also assign buttons if you want to do this instead of asking for input from the user

#### 2.5 - Functions 
This is probably the part that you will alter the most. This is where you will change what happens based off your functions. In my project, I have 3 input modes, "Low, Medium, and High". For each one, I only change when the motors stop based off the amount of pressure gathered by the pressure sensors. If you are not using modes, then you wont need multiple functions. 

Each function does assignments based off the serial data gathered by the Micro:Bit. You will edit what the motors do based off the serial data that you choose. What you see is what I chose for a prosthetic hand. 

#### 2.6 - Calling the Program 
This is where I call the functions based off the sensitvity. If the user enters low, then run low... and so forth. 

If you are not using multiple modes, just call your function. 

### Step 3
Now that you have altered all your code to do what you would like. Please be sure that you a have a license key for the project. I know that this is annoying and that you wont want one, but they are completely free. This is just to avoid piracy of my program/project. Please be respectful of this. 

According to License Requirements, you must keep all the code together. This means, although you are allowed to edit what is in v3.0.py, you CANNOT delete any files or edit what is in other files. 

You must also state somewhere in your code, "Project: EnAble is under Copyright © 2023 Jeron Osguthorpe". I am going off the honor system, I have spent years on this project and I just am hoping that the development community will respect the work that I have done. 

## Prosthetic Hand - What I have Provided
If you are wanting to reporduce the prosthetic hand that I have created, then all the files needed are included. The 3D Printing files are including in the folder "v3.0 3D Files for Prosthetic Hand". All you will need is a License Key (email enable@codingtrickyt.com). 

## Other Information Regarding Project: EnAble
[GitHub Organization Link](http://github.com/projectenable) **edit:Sites will be changing soon** 

[GitHub Repository Link](http://github.com/projectenable/Project-Enable)

[Project: EnAble Website](http://enable.codingtricksyt.com)

Contact Email: enable@codingtricksyt.com

[YouTube](http://youtube.com/codingtricks)

[Twitter](http://twitter.com/proj_enable)

[License, Code of Conduct, and Contributing](http://github.com/projectenable/Project-Enable)

[Donate](http://enable.codingtricksyt.com)