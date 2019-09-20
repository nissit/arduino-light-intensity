int temperature=A2;
float t;
// int led=9;
int alarm = 2;
int pot = A1;
int P;

void setup() {
  	// put your setup code here, to run once
  	// pinMode(led, OUTPUT);
	pinMode(alarm, OUTPUT);  
	Serial.begin(9600);
}

void loop() {
  	// put your main code here, to run repeatedly:

	//t= t*0.125-22.0;
	P = analogRead(pot);
	P = map(P, 0, 1023, 0, 255);
	analogWrite(9, P);
	Serial.println(P);
	analogWrite(alarm, P);

	//if (t>27){
	//  digitalWrite(alarm,HIGH);
	//   digitalWrite(led2,LOW);
	//  digitalWrite(led,HIGH);
	// 
	//  
	//}else 
	//  {
	//  digitalWrite(alarm,LOW);
	//  digitalWrite(led2,HIGH);
	//  digitalWrite(led,LOW);
	//  
	//}
}

