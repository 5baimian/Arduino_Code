//map(Val,0,1023,0,255)     等比映射，将模拟量的范围从0-1023映射到0-255

void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);//设置9号引脚为输出模式
  //pinMode(3,OUTPUT);
Serial.begin(9600);//串口通讯初始化
}

void loop() {
  // put your main code here, to run repeatedly:
int analogInputVal=analogRead(A0);//读取模拟输入值
Serial.println(analogInputVal);//将结果通过串口显示器进行显示
//控制led亮度可将speed改为brightness
int speed=map(analogInputVal,0,1023,0,255);//将模拟输入数值（0-1023）等比映射到模拟输出数值区间（0-255）内
analogWrite(9, speed);//根据模拟输入值调节LED的亮度
}
