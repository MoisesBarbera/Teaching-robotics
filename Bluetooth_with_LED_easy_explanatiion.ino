//CODING AND ROBOTICS SOCIETY
//07-11-2018
//Moises Barbera (Coding), James Harding (Electronics), Miguel Li and Nii Yemo (Learning assistance) 
//CreativeCommons
  
int frontLed = 13;                          //Asign each light a pin                
int backLed = 12;
int leftLed = 11;
int righLed = 10;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);                            //Activate the bluetooth and allow it to print on the Serial Monitor

  pinMode(frontLed, OUTPUT);                     //Asign every light as an OUTPUT
  pinMode(backLed, OUTPUT);
  pinMode(leftLed, OUTPUT);
  pinMode(righLed, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

if (Serial.available()) {                     //Check if the bluetooth module on the Arduino is conected to another device
 char bluetoohInput = Serial.read();        // If bluetooth connected read the message sent and store it in the variable "bluetoothInput"


  //In acordance with the "Bluetooth RC controler" app for ANDROID
  

    if (bluetoohInput == 'F'){                //When key F is pressed turn on frontLed
        digitalWrite(frontLed, HIGH);
        digitalWrite(backLed, LOW);
        digitalWrite(leftLed, LOW);
        digitalWrite(righLed, LOW);
        
      } else if (bluetoohInput == 'B'){        //When key B is pressed turn on backLed
        digitalWrite(frontLed, LOW);
        digitalWrite(backLed, HIGH);
        digitalWrite(leftLed, LOW);
        digitalWrite(righLed, LOW);
        
      }else if (bluetoohInput == 'L'){        //When key L is pressed turn on leftLed
        digitalWrite(frontLed, LOW);
        digitalWrite(backLed, LOW);
        digitalWrite(leftLed, HIGH);
        digitalWrite(righLed, LOW);
        
      }else if (bluetoohInput == 'R'){        //When key R is pressed turn on righLed
        digitalWrite(frontLed, LOW);
        digitalWrite(backLed, LOW);
        digitalWrite(leftLed, LOW);
        digitalWrite(righLed, HIGH);
        
      }else {                                 //When no key is pressed, no light switches on
        digitalWrite(frontLed, LOW);
        digitalWrite(backLed, LOW);
        digitalWrite(leftLed, LOW);
        digitalWrite(righLed, LOW);
        }
    }
}
