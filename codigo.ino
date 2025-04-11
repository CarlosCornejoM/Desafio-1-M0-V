const int enA    = 3;
const int enB    = 10;
const int in1    = 4;
const int in2    = 5;
const int in3    = 7;
const int in4    = 8;
const int ledPin1 = 9;
const int ledPin2 = 6;

void blinkLED(int led, int times, int onTime, int offTime) {
  for (int i = 0; i < times; i++) {
    digitalWrite(led, HIGH);
    delay(onTime);
    digitalWrite(led, LOW);
    delay(offTime);
  }
}

void setup() {

 pinMode(enA, OUTPUT);
 pinMode(enB, OUTPUT);
 pinMode(in1, OUTPUT);
 pinMode(in2, OUTPUT);
 pinMode(in3, OUTPUT);
 pinMode(in4, OUTPUT);
}

void loop() {


blinkLED(ledPin1,3, 200, 200);
delay(2000);
//Tramo 1
avanzar(255,600,3);
delay(400);
// G1
avanzar(255,380,1);
delay(400);
//T2
avanzar(255,1400,3);
delay(400);

//G2
avanzar(255,450,2);

 delay(400);
//T3
 avanzar(255,750,3);
delay(400);

//G3
 avanzar(255,460,1);
 delay(400);

//T4
 avanzar(255,2330,3);
 delay(400);

//G4
  avanzar(255,400,1);
  delay(400);

  //T5
 avanzar(255,750,3);
 delay(400);

 //G5
  avanzar(255,500,2);
  delay(400);

  //T6
 avanzar(255,1000,3);

blinkLED(ledPin2,3, 200, 200);
  

 

}

 int avanzar(int velocidad, int tiempo, int motor){
  if (motor==1){
    if (velocidad>=0){
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);}
    if(velocidad<0){
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);}
    }
    analogWrite(enA, abs(velocidad));
  if (motor==2){
    if (velocidad>=0){
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);
    }
    if(velocidad<0){
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
    }
    
    analogWrite(enB, abs(velocidad));

  }
  if (motor==3){
    if (velocidad>=0){
      digitalWrite(in1, HIGH);
      digitalWrite(in2, LOW);
      digitalWrite(in3, LOW);
      digitalWrite(in4, HIGH);}
    if (velocidad<0){
      digitalWrite(in1, LOW);
      digitalWrite(in2, HIGH);
      digitalWrite(in3, HIGH);
      digitalWrite(in4, LOW);
    }
    analogWrite(enA, abs(velocidad));
    analogWrite(enB, abs(velocidad));
  }

  delay(tiempo);
  analogWrite(enA, 0);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enB, 0);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
 }


