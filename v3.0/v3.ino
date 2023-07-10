/*
Welcome to Project:EnAble v3.0 - Arduino Edition
Project:EnAble is under Copyright © 2023 Jeron Osguthorpe

Project: EnAble
Author: Jeron Osguthorpe
Version: v3.1.0 - Beta

BASIC INFORMATION REGARDING PROJECT: ENABLE
Git Hub Organization Link: https://github.com/projectenable
Git Hub Repository Link: https://github.com/projectenable/Project-Enable
Website: https://enable.codingtricksyt.com
Email: enable@codingtricksyt.com
YouTube: https://youtube.com/codingtricks
Twitter: https://twitter.com/proj_enable
License, Code of Conduct, and Contributing: https://github.com/projectenable/Project-Enable
Donate: https://enable.codingtricksyt.com/

ChatGPT Involment: ChatGPT was used to help create part of the project. Among ChatGPT, 
Copilot was also used to help create this part of the project. ChatGPT is a project by OpenAI. 
Copilot is a project by OpenAI and GitHub. Both projects are under the MIT License.

Total Project Lines of Code: 1137

*/
#include <Servo.h>

// Initiate the Servos
Servo indexServo;
Servo middleServo;
Servo ringServo;
Servo pinkyServo;
Servo thumbServo;

// Initiate the buttons
const int indexButton = 8;
const int middleButton = 9;
const int ringButton = 10;
const int pinkyButton = 11;
const int thumbButton = 12;

int indexButtonState = 0;
int middleButtonState = 0;
int ringButtonState = 0;
int pinkyButtonState = 0;
int thumbButtonState = 0;

// Initiate the FSR Readings
int indexFSRReading = 0;
int middleFSRReading = 0;
int ringFSRReading = 0;
int pinkyFSRReading = 0;
int thumbFSRReading = 0;

void setup(){
  // Mark FSR as Inputs
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);

  // Mark Servos as Ouputs
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  // Attach Servos
  indexServo.attach(3);
  middleServo.attach(4);
  ringServo.attach(5);
  pinkyServo.attach(6);
  thumbServo.attach(7);

}
void loop(){
  // Assign Values to the Read
  indexFSRReading = analogRead(A0);
  middleFSRReading = analogRead(A1);
  ringFSRReading = analogRead(A2);
  pinkyFSRReading = analogRead(A3);
  thumbFSRReading = analogRead(A4);

  // Read Buttons
  indexButtonState = digitalRead(indexButton);
  middleButtonState = digitalRead(middleButton);
  ringButtonState = digitalRead(ringButton);
  pinkyButtonState = digitalRead(pinkyButton);
  thumbButtonState = digitalRead(thumbButton);

  // If Statements 
  if (indexButtonState == HIGH) {
    indexServo.write(180);
  }
  if (middleButtonState == HIGH) {
    middleServo.write(180);
  }
  if (ringButtonState == HIGH) {
    ringServo.write(180);
  }
  if (pinkyButtonState == HIGH) {
    pinkyServo.write(180);
  }
  if (thumbButtonState == HIGH) {
    thumbServo.write(180);
  }

  // Write to the Servos
  /*
  indexServo.write(indexFSRReading/6);
  middleServo.write(middleFSRReading/6);
  ringServo.write(ringFSRReading/6);
  pinkyServo.write(pinkyFSRReading/6);
  thumbServo.write(thumbFSRReading/6);
  */

}