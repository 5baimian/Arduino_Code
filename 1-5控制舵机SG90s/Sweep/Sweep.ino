/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>

Servo myservo;  // create Servo object to control a servo，创建Servo对象用以控制电机
// twelve Servo objects can be created on most boards 很多开发板允许同时创建12个Servo对象

int pos = 0;    // variable to store the servo position 存储伺服电机角度信息的变量

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the Servo object Servo对象连接在9号引脚
  Serial.begin(9600);//启动串口通讯
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    Serial.println(pos);
    delay(10);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    Serial.println(pos);
    delay(10);                       // waits 15 ms for the servo to reach the position
  }
}
