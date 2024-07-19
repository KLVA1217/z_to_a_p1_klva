const int equal_pulse_width = 175;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(7, LOW); // sets the digital pin 7 off

  digitalWrite(6, HIGH); // sets the digital pin 6 on
  digitalWrite(5, HIGH); // sets the digital pin 5 on

  digitalWrite(4, LOW); // sets the digital pin 4 off

  ///////////////////////////////////////////////////////
  
  delay(equal_pulse_width);            // delay

  ///////////////////////////////////////////////////////
  
  digitalWrite(7, HIGH); // sets the digital pin 7 on

  digitalWrite(6, LOW); // sets the digital pin 6 off
  digitalWrite(5, LOW); // sets the digital pin 5 off

  digitalWrite(4, HIGH); // sets the digital pin 4 on

  ///////////////////////////////////////////////////////

  delay(equal_pulse_width);            // delay
}
