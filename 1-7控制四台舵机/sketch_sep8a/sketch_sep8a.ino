#include<Servo.h>
Servo base,fArm,rArm,claw;//建立四个电机对象
int dataIndex=0;
void setup() 
{
  base.attach(11);//base伺服电机连接引脚11 电机代号‘b’
  rArm.attach(10);//rArm伺服电机连接引脚10 电机代号‘r’
  fArm.attach(9);//fArm伺服电机连接引脚9 电机代号‘r’
  claw.attach(6);//claw伺服电机连接引脚6 电机代号‘c’
  Serial.begin(9600);
  Serial.println("Please input serial data ");

}

void loop() 
{
 if(Serial.available())
 {
  char servoName=Serial.read();//获取电机指令中电机编号信息
  Serial.print("servoName= ");
  Serial.print(servoName);
  Serial.print(",");

  int data=Serial.parseInt();//获取电机指令中电机的角度信息
  switch(servoName)
  {//根据电机指令中电机信息决定对哪一个电机进行角度设置
  case 'b'://电机指令b,设置电机base角度
  base.write(data);
  Serial.print("Set base servo value: ");
  Serial.println(data);
  break;

  case 'r'://电机指令b,设置电机base角度
  rArm.write(data);
  Serial.print("Set rArm servo value: ");
  Serial.println(data);
  break;

  case 'f'://电机指令f,设置电机fArm角度
  fArm.write(data);
  Serial.print("Set fArm servo value: ");
  Serial.println(data);
  break;
  
  case 'c'://电机指令c,设置电机claw角度
  claw.write(data);
  Serial.print("Set claw servo value: ");
  Serial.println(data);
  break;


  }
 }

}
