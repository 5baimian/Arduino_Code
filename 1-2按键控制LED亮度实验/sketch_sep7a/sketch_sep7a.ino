boolean pushButton1;//创建布尔型变量用来存储按键开关1的电平状态
boolean pushButton2;//创建布尔型变量用来存储按键开关2的电平状态
int ledpin=9;//led引脚号
int brightness=128;//led亮度参数

void setup() {
  pinMode(2,INPUT_PULLUP);//将引脚2设置为输入上拉模式
  pinMode(8,INPUT_PULLUP);//将引脚8设置为输入上拉模式
  pinMode(ledpin,OUTPUT);//将LED引脚设置为输出模式
  Serial.begin(9600);//启动串口通讯
}

void loop() {
  pushButton1=digitalRead(2);//读取引脚2电平状态并将其赋值给布尔变量
  pushButton2=digitalRead(8);//读取引脚8电平状态并将其赋值给布尔变量
  if(!pushButton1&&brightness>0)//当按下按键开关1并且LED亮度参数大于1
  {
    brightness--;//减低LED亮度参数
  }
  else if(!pushButton2&&brightness<255)//当按下开关2并且LED亮度参数小于255
  {
    brightness++;//增加LED亮度参数
  }
  analogWrite(ledpin,brightness);//模拟输出控制LED的亮度
  Serial.println(brightness);//将LED亮度参数显示在窗口监视器上
  delay(10);

}
