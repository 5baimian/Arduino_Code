int redled=3;
int greenled=4;
int yellowled=5;
int i=0;
void setup() 
{
  //将三接口设置为输出接口
  pinMode(redled,OUTPUT);
  pinMode(greenled,OUTPUT);
  pinMode(yellowled,OUTPUT);
}

void loop() 
{
  digitalWrite(redled,HIGH);
  delay(5000);
digitalWrite(redled,LOW);
digitalWrite(greenled,HIGH);
delay(5000);
for(i=0;i<3;i++)
{
  digitalWrite(greenled,LOW);
  delay(500);
  digitalWrite(greenled,HIGH);
  delay(500);
}
digitalWrite(greenled,LOW);
digitalWrite(yellowled,HIGH);
delay(3000);
digitalWrite(yellowled,LOW);


}
