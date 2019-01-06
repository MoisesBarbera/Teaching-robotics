//CODING AND ROBOTICS SOCIETY
//07-11-2018
//Moises Barbera (Coding), James Harding (Electronics), Miguel Li and Nii Yemo (Learning assistance) 
//CreativeCommons

#include <SoftwareSerial.h>
SoftwareSerial BTSerial(2, 3);

int light_1 = 13;                              //Asign each light a pin
int light_2 = 12;
int light_3 = 11;
int light_4 = 10;

int switching = 0;                             //Set a variable called "switching" that wil bw used later on

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);                           //Activate the bluetooth and allow it to print on the Serial Monitor
  BTSerial.begin(9600);

  pinMode(light_1, OUTPUT);                     //Asign every light as an OUTPUT
  pinMode(light_2, OUTPUT);
  pinMode(light_3, OUTPUT);
  pinMode(light_4, OUTPUT);

}

void loop() {

if (BTSerial.available()) {                    //Check if the bluetooth module on the Arduino is conected to another device
  switching = BTSerial.read();                 //If bluetooth connected read the message sent and store it in the int "switching"

                                             //In acordance with the "Bluetooth RC controler" app for ANDROID
                     
if (switching == 'F') switch_1();            //Checks if a key with name "F" has been pressed on the app and asigns it to light_1.
      else if (switching == 'B') switch_2();  //Checks if a key with name "B" has been pressed on the app and asigns it to light_2.
      else if (switching == 'L') switch_3();  //Checks if a key with name "L" has been pressed on the app and asigns it to light_3.
      else if (switching == 'R') switch_4();  //Checks if a key with name "R" has been pressed on the app and asigns it to light_4.
      else switchOff();

    }
}

void switch_1() {                            //When F is pressed, swithch_1 is activated and swithches on light_1
  digitalWrite(light_1, HIGH);
  digitalWrite(light_2, LOW);
  digitalWrite(light_3, LOW);
  digitalWrite(light_4, LOW);

}

void switch_2() {                          //When B is pressed, swithch_2 is activated and swithches on light_2
  digitalWrite(light_1, LOW);
  digitalWrite(light_2, HIGH);
  digitalWrite(light_3, LOW);
  digitalWrite(light_4, LOW);  

}

void switch_3() {                        //When L is pressed, swithch_3 is activated and swithches on light_3
  digitalWrite(light_1, LOW);
  digitalWrite(light_2, LOW);
  digitalWrite(light_3, HIGH);
  digitalWrite(light_4, LOW);
  }

void switch_4() {                       //When R is pressed, swithch_4 is activated and swithches on light_4
  digitalWrite(light_1, LOW);
  digitalWrite(light_2, LOW);
  digitalWrite(light_3, LOW);
  digitalWrite(light_4, HIGH);
}
void switchOff() {                      //When no key is pressed, no light switches on
  digitalWrite(light_1, LOW);
  digitalWrite(light_2, LOW);
  digitalWrite(light_3, LOW);
  digitalWrite(light_4, LOW);
  }
