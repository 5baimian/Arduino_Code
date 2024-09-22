void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);//设置9号引脚为输出模式
Serial.begin(9600);//启动串口通讯
}

void loop() {
  // put your main code here, to run repeatedly:
//LED由暗到明
for(int brightness=0;brightness<=255;brightness++)
{
  analogWrite(9,brightness);
  Serial.println(brightness);
  delay(5);
}  
//LED由明到暗
for(int brightness=255;brightness>0;brightness--)
{
  analogWrite(9,brightness);
  Serial.println(brightness);
  delay(5);
}
}
