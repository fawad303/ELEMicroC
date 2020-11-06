//Global Variables
//Vaariables for street signal
int Rr=0;
int Yr=1;
int Gr=2;


//variables for padestrian signal
int Rp=3;
int Gp=4;
int PB=7;
int Br=8;

int x=2;
void setup() {
 pinMode(Rr,OUTPUT);
  pinMode(Yr,OUTPUT);
  pinMode(Gr,OUTPUT);

 pinMode(Rp,OUTPUT);
  pinMode(Gp,OUTPUT);

pinMode(PB,INPUT);
pinMode(Br,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   digitalWrite(Rr,HIGH);
      delay(200);
      digitalWrite(Rr,LOW);
      digitalWrite(Yr,HIGH);
      delay(300);      
      digitalWrite(Yr,LOW);     
      digitalWrite(Gr,HIGH);    
digitalWrite(Rp,HIGH);
  while (x==1 || x<30000){
 x++;
    if (digitalRead(PB)== HIGH && digitalRead(Br)==HIGH && Gr==HIGH ){
           delay(100);


      digitalWrite(Gr,LOW);
      digitalWrite(Yr,HIGH);
      delay(150);
      digitalWrite(Yr,LOW);
      digitalWrite(Rr,HIGH);
      delay(100);
      digitalWrite(Rp,LOW);
         digitalWrite(Gp,HIGH);
        delay(150);
      digitalWrite(Gp,LOW);
      digitalWrite(Rp,HIGH);
      delay(50);
    x=1;
  }
    
  }
if (digitalRead(PB)== LOW){
      

      digitalWrite(Gr,LOW);
      digitalWrite(Yr,HIGH);
      delay(150);
      digitalWrite(Yr,LOW);
      digitalWrite(Rr,HIGH);
      delay(100);
      digitalWrite(Rp,LOW);
         digitalWrite(Gp,HIGH);
        delay(150);
      if (digitalRead(PB)== HIGH){delay(250);}

      digitalWrite(Gp,LOW);
      
  digitalWrite(Rp,HIGH);
    
  delay(100);  }
  

    else if(digitalRead(PB)== LOW && digitalRead(Br)== HIGH & Gr==HIGH){
      
digitalWrite(Gr,HIGH);
       delay(500);
      }
     
      

  }
