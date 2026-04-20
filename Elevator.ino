int flr=0;
  int input0=13;
  int input1=1;
  int input2=2;
  int input3=4;
  int input5=5;
  int input6=0;
  int output1=6;
  int output2=7;
  int output3=8;
  int output4=9;
  int output5=10;
  int output6=11;
  int output7=12;
  int output8=3;
  int ground=0;
  int first=0;
  int second=0;
  int third=0;
  int weight=0;
  int way=0;
void setup() {
  
pinMode(input0,INPUT);
pinMode(input1,INPUT);
pinMode(input2,INPUT);
pinMode(input3,INPUT);
pinMode(input5,INPUT);
pinMode(input6,INPUT);
pinMode(output1,OUTPUT);
pinMode(output2,OUTPUT);
pinMode(output3,OUTPUT);
pinMode(output4,OUTPUT);
pinMode(output5,OUTPUT);
pinMode(output6,OUTPUT);
pinMode(output7,OUTPUT);
pinMode(output8,OUTPUT);
}

void loop() {
ground=digitalRead(input0);
first=digitalRead(input1);
second=digitalRead(input2);
third=digitalRead(input3);
weight=digitalRead(input5);
way=digitalRead(input6);
switch(flr){
  case 0:
  digitalWrite(output3,HIGH);
  if(first==HIGH)
  {digitalWrite(output1,HIGH);
  digitalWrite(output2,LOW);
  digitalWrite(output3,HIGH);
  delay(800);
  digitalWrite(output3,LOW);
  digitalWrite(output4,HIGH);
  digitalWrite(output1,LOW);
  digitalWrite(output2,LOW);
  flr=1;}
  if(second==HIGH)
  {digitalWrite(output1,HIGH);
  digitalWrite(output2,LOW);
  digitalWrite(output3,HIGH);
  delay(800);
  digitalWrite(output3,LOW);
  digitalWrite(output4,HIGH);
  delay(800);
  digitalWrite(output4,LOW);
  digitalWrite(output5,HIGH);
  digitalWrite(output1,LOW);
  digitalWrite(output2,LOW);
  flr=2;}
  if(third==HIGH)
  {digitalWrite(output1,HIGH);
  digitalWrite(output2,LOW);
  digitalWrite(output3,HIGH);
  delay(800);
  digitalWrite(output3,LOW);
  digitalWrite(output4,HIGH);
  delay(800);
  digitalWrite(output4,LOW);
  digitalWrite(output5,HIGH);
  delay(800);
  digitalWrite(output5,LOW);
  digitalWrite(output6,HIGH);
  digitalWrite(output1,LOW);
  digitalWrite(output2,LOW);
  flr=3;}
  if(weight==HIGH)
  {while(digitalRead(input5)==HIGH)
  {digitalWrite(output7,HIGH);
  delay(500);
    }
    digitalWrite(output7,LOW);
    }
    if(way==HIGH)
  {while(digitalRead(input6)==LOW)
  {digitalWrite(output8,HIGH);
  delay(500);
    }
    digitalWrite(output8,LOW);
    }
  break;
  case 3:
  digitalWrite(output6,HIGH);
  if(second==HIGH)
  {digitalWrite(output1,LOW);
  digitalWrite(output2,HIGH);
  digitalWrite(output6,HIGH);
  delay(800);
  digitalWrite(output6,LOW);
  digitalWrite(output5,HIGH);
  digitalWrite(output1,LOW);
  digitalWrite(output2,LOW);
  flr=2;}
  if(first==HIGH)
  {digitalWrite(output1,LOW);
  digitalWrite(output2,HIGH);
  digitalWrite(output6,HIGH);
  delay(800);
  digitalWrite(output6,LOW);
  digitalWrite(output5,HIGH);
  delay(800);
  digitalWrite(output5,LOW);
  digitalWrite(output4,HIGH);
  digitalWrite(output1,LOW);
  digitalWrite(output2,LOW);
  flr=1;}
  if(ground==HIGH)
  {digitalWrite(output1,LOW);
  digitalWrite(output2,HIGH);
  digitalWrite(output6,HIGH);
  delay(800);
  digitalWrite(output6,LOW);
  digitalWrite(output5,HIGH);
  delay(800);
  digitalWrite(output5,LOW);
  digitalWrite(output4,HIGH);
  delay(800);
  digitalWrite(output4,LOW);
  digitalWrite(output3,HIGH);
  digitalWrite(output1,LOW);
  digitalWrite(output2,LOW);
  flr=0;}
  if(weight==HIGH)
  {while(digitalRead(input5)==HIGH)
  {digitalWrite(output7,HIGH);
  delay(500);
    }
    digitalWrite(output7,LOW);
    }
    if(way==HIGH)
  {while(digitalRead(input6)==LOW)
  {digitalWrite(output8,HIGH);
  delay(500);
    }
    digitalWrite(output8,LOW);
    }
  break;
  case 1:
  digitalWrite(output4,HIGH);
  if(ground==HIGH)
  {digitalWrite(output1,LOW);
  digitalWrite(output2,HIGH);
  digitalWrite(output4,HIGH);
  delay(800);
  digitalWrite(output4,LOW);
  digitalWrite(output3,HIGH);
  digitalWrite(output1,LOW);
  digitalWrite(output2,LOW);
  flr=0;}
   if(second==HIGH)
  {digitalWrite(output1,HIGH);
  digitalWrite(output2,LOW);
  digitalWrite(output4,HIGH);
  delay(800);
  digitalWrite(output4,LOW);
  digitalWrite(output5,HIGH);
  digitalWrite(output1,LOW);
  digitalWrite(output2,LOW);
  flr=2;}
  if(third==HIGH)
  {digitalWrite(output1,HIGH);
  digitalWrite(output2,LOW);
  digitalWrite(output4,HIGH);
  delay(800);
  digitalWrite(output4,LOW);
  digitalWrite(output5,HIGH);
  delay(800);
  digitalWrite(output5,LOW);
  digitalWrite(output6,HIGH);
  digitalWrite(output1,LOW);
  digitalWrite(output2,LOW);
  flr=3;}
  if(weight==HIGH)
  {while(digitalRead(input5)==HIGH)
  {digitalWrite(output7,HIGH);
  delay(500);
    }
    digitalWrite(output7,LOW);
    }
    if(way==HIGH)
  {while(digitalRead(input6)==LOW)
  {digitalWrite(output8,HIGH);
  delay(500);
    }
    digitalWrite(output8,LOW);
    }
  break;
  case 2:
  digitalWrite(output5,HIGH);
    if(ground==HIGH)
  {digitalWrite(output1,LOW);
  digitalWrite(output2,HIGH);
  digitalWrite(output5,HIGH);
  delay(800);
  digitalWrite(output5,LOW);
  digitalWrite(output4,HIGH);
  delay(800);
  digitalWrite(output4,LOW);
  digitalWrite(output3,HIGH);
  digitalWrite(output1,LOW);
  digitalWrite(output2,LOW);
  flr=0;}
   if(first==HIGH)
  {digitalWrite(output1,LOW);
  digitalWrite(output2,HIGH);
  digitalWrite(output5,HIGH);
  delay(800);
  digitalWrite(output5,LOW);
  digitalWrite(output4,HIGH);
  digitalWrite(output1,LOW);
  digitalWrite(output2,LOW);
  flr=1;}
  if(third==HIGH)
  {digitalWrite(output1,HIGH);
  digitalWrite(output2,LOW);
  digitalWrite(output5,HIGH);
  delay(800);
  digitalWrite(output5,LOW);
  digitalWrite(output6,HIGH);
  digitalWrite(output1,LOW);
  digitalWrite(output2,LOW);
  flr=3;}
  if(weight==HIGH)
  {while(digitalRead(input5)==HIGH)
  {digitalWrite(output7,HIGH);
  delay(500);
    }
    digitalWrite(output7,LOW);
    }
    if(way==HIGH)
  {while(digitalRead(input6)==LOW)
  {digitalWrite(output8,HIGH);
  delay(500);
    }
    digitalWrite(output8,LOW);
    }
  break;
  }
  }