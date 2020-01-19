//  void setup() {
//    // put your setup code here, to run once:
//  #include <Servo.h>
//  }
//  
//  void loop() {
//    // put your main code here, to run repeatedly:
//  
//  }
#include <Servo.h>
//#define  servomaxx   180   // max degree servo horizontal (x) can turn
//#define  servomaxy   180   // max degree servo vertical (y) can turn
//#define  servomaxz   180   // max degree servo 3D vertical (z) can turn
//#define  screenmaxx   320   // max screen horizontal (x)resolution
//#define  screenmaxy   240    // max screen vertical (y) resolution
//#define  servocenterx   90  // center po#define  of x servo
//#define  servocentery   90  // center po#define  of y servo
//#define  servocenterz   90  // center po#define  of z servo
//#define  baudrate 9600  // com port speed. Must match your C++ setting
//#define distancex 1  // x servo rotation steps
//#define distancey 1  // y servo rotation steps
//#define distancez 1  // z servo rotation steps

// create servo object to control a servo
Servo myservo1;
Servo myservo2;
Servo myservo3;
//Servo myservo4;

int valx = 0; //store x data from serial port
int valy = 0; //store y value from serial port
int pos1 = 0;
int ang = atan(valx/valy);// significant increments of vertical (y) camera movement

//short MSB = 0; // to build 2 byte integer from serial in byte
//short LSB = 0; //to build 2 byte integer from serial in byte
//int MSBLSB = 0; //to build 2 byte integer from serial in byte

void setup() {
//  Serial.begin(baudrate);        // connect to the serial port
  myservo1.attach(3); // attaches the servo on pin 9 to the servo object
  myservo2.attach(9);// attaches the servo on pin 3 to the servo object
  myservo3.attach(5);// attaches the servo on pin 5 to the servo object
//  myservo4.attach(6);// attaches the servo on pin 6 to the servo object
//  myservo1.write(servocenterx); 
//  delay(200);
//  myservo2.write(servocentery); 
//  delay(200);
//  myservo3.write(servocenterz); 
////  delay(200);
}

void loop() {
  
//  while(Serial.available() <=0); // wait for incoming serial data
//  if (Serial.available() >= 4)  // wait for 4 bytes. 
//  {
//    // get X axis 2-byte integer from serial
//    MSB = Serial.read();
//    delay(5);
//    LSB = Serial.read();
//    MSBLSB=word(MSB, LSB);
//    valx = MSBLSB; 
//    delay(5);
//
//    // get Y axis 2-byte integer from serial
//    MSB = Serial.read();
//    delay(5);
//    LSB = Serial.read();
//    MSBLSB=word(MSB, LSB);
//    valy = MSBLSB; 
//    delay(5);
// // read last servos positions
//    pos1 = servox.read(); 
//    pos2 = servoy.read();
//    

//Find out if the X component of the face is to the left of the middle of the screen.
//    if(valx < (screenmaxx/2 - incx)){
//      if( pos1 >= incx ) pos1 += distancex; //Update the pan position variable to move the servo to the left.
//    }
////Find out if the X component of the face is to the right of the middle of the screen.
//    else if(valx > screenmaxx/2 + incx){
//      if(pos1 <= servomaxx-incx) pos1 -=distancex; //Update the pan position variable to move the servo to the right.
//    }
//Find out if the Y component of the face is below the middle of the screen.
//    if(valy < (screenmaxy/2 - incy)){
//      if(posy >= 5)posy += distancey; //If it is below the middle of the screen, update the tilt position variable to lower the tilt servo.
//    }
//    //Find out if the Y component of the face is above the middle of the screen.
//    else if(valy > (screenmaxy/2 + incy)){
//      if(posy <= 175)posy -= distancey; //Update the tilt position variable to raise the tilt servo.
//    }
//  servo motor 1
  for (pos1 = 0; pos1 <= 90; pos1 += 1) { // goes from 0 degrees to 180 degrees
//     in steps of 1 degree
    myservo1.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos1 = 90; pos1 >= 0; pos1 -= 1) { // goes from 180 degrees to 0 degrees
    myservo1.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

////servo motor 2
//  for (pos2 = 0; pos2 <= 180; pos2 += 1) { // goes from 0 degrees to 180 degrees
//    // in steps of 1 degree
//    myservo2.write(pos2);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
//  for (pos2 = 180; pos2 >= 0; pos2 -= 1) { // goes from 180 degrees to 0 degrees
//    myservo2.write(pos2);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }

////servo motor 3
//  for (pos3 = 0; pos3 <= 90; pos3 += 1) { // goes from 0 degrees to 180 degrees
//    // in steps of 1 degree
//    myservo3.write(pos3);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
//  for (pos3 = 90; pos3 >= 0; pos3 -= 1) { // goes from 180 degrees to 0 degrees
//    myservo3.write(pos3);              // tell servo to go to position in variable 'pos'
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
//
//  myservo1.write(servocenterx); 
//  delay(200);
//  myservo2.write(servocentery); 
//  delay(200);
//  myservo3.write(servocenterz); 
//  delay(200);


}
