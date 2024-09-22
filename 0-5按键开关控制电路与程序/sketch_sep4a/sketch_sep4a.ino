/*DigitalReadSerial
read adigital input on pin 2,prints the result to the serial monitor
读取引脚2的数字输入，将结果显示在串口监视器中*/
/* digitalRead()       读取数字引脚的高低电平（0/1）



*/
int pushbutton=2;
void setup()
 {
   //initialize serial communication at 9000 bits per second
   //串口通讯初始化，每秒9600位
   Serial.begin(9600);
   //at the pushbutton's pin an input
   //设置按键引脚为输入
   pinMode(pushbutton,INPUT);  

}

void loop() 
{
  //read the input pin
  //读取输入引脚
  int buttonState=digitalRead(pushbutton);
  //print out the state of the button
  //显示按键状态
  Serial.println(buttonState);
  delay(10);//delay in between reads for stability 为确保程序稳定运行进行短暂停止

}
