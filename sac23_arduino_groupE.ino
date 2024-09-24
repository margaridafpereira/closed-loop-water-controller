// Define the pins
const int analogInputPin = A0;
const int analogInputPin_2 = A1;
const int enablePin = 9; // PWM pin
const int output1Pin = 8;
const int output2Pin = 7;
int AI0 = 0;
int AI1 = 0;
int pwmOutput = 0;

void setup() {
// Set up serial communication
  Serial.begin(9600);

  // Set pin modes for motor control
  pinMode(enablePin, OUTPUT);
  pinMode(output1Pin, OUTPUT);
  pinMode(output2Pin, OUTPUT);

  // Set initial motor direction
  digitalWrite(output1Pin, HIGH);
  digitalWrite(output2Pin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
AI0 = analogRead(analogInputPin);
AI1 = analogRead(analogInputPin_2);


  if (Serial.available()) {
    pwmOutput = Serial.parseInt();

  }

if (AI0<350){
 pwmOutput =0;
 }

if (AI1<350){
 pwmOutput =0;
 }

//pwmOutput = 130;
delay (1);  
 analogWrite(enablePin, pwmOutput);
//pwmOutput= serial.read();
 Serial.print("A");
 Serial.print(AI0);
 Serial.print("B");
 Serial.print(AI1);
 Serial.print("C");
 //Serial.print(pwmOutput);
 //Serial.println("D");

delay(1);

}
