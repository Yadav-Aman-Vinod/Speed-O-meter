int T = 8;
int E = 9;
float t,ef,d,a,s,f ,d1,a1,s1,f1,d2,s2,a2,f2,o;

void setup() {
pinMode(E,INPUT);
pinMode(T,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
Serial.begin (9600);
}

void loop() {
digitalWrite(T,0);
delay(1);
digitalWrite(T,1);
delayMicroseconds(10);
digitalWrite(T,0);

t = pulseIn(E,1);
ef =t/2;
d2 = 0.0348*ef-0.92 ;
delay(100);

digitalWrite(T,0);
delay(1);
digitalWrite(T,1);
delayMicroseconds(10);
digitalWrite(T,0);

t = pulseIn(E,1);
ef =t/2;
s2 = 0.0348*ef-0.92 ;

a2=d2-s2;
f2=a/0.1;



digitalWrite(T,0);
delay(1);
digitalWrite(T,1);
delayMicroseconds(10);
digitalWrite(T,0);

t = pulseIn(E,1);
ef =t/2;
d1 = 0.0348*ef-0.92 ;
delay(50);

digitalWrite(T,0);
delay(1);
digitalWrite(T,1);
delayMicroseconds(10);
digitalWrite(T,0);

t = pulseIn(E,1);
ef =t/2;
s1 = 0.0348*ef-0.92 ;

a1=d1-s1;
f1=a/0.05;


digitalWrite(T,0);
delay(1);
digitalWrite(T,1);
delayMicroseconds(10);
digitalWrite(T,0);

t = pulseIn(E,1);
ef =t/2;
d = 0.0348*ef-0.92 ;
delay(30);

digitalWrite(T,0);
delay(1);
digitalWrite(T,1);
delayMicroseconds(10);
digitalWrite(T,0);

t = pulseIn(E,1);
ef =t/2;
s = 0.0348*ef-0.92 ;

a=d-s;
f=a/0.03;

o=f+f1+f2/3;
Serial.println(o);
delay(1000);
 
  
}

