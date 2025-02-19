int motorPin = 9;
int emitterPin = 10;
int recieverPin = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(motorPin, OUTPUT);
  pinMode(emitterPin, OUTPUT);
  pinMode(recieverPin, INPUT);

  digitalWrite(motorPin, HIGH); // turn the motor on (full speed)
  delay(3000);
  digitalWrite(motorPin, LOW);
  
  Serial.begin(9600); //start the serial monitor
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(emitterPin, HIGH)
  delay(20)
}
