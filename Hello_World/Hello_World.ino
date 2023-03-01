const int Delay = 500; //Noah French made this comment!

void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(Delay);
  digitalWrite(13, LOW);
  delay(Delay);
}

//This comment is a certified Howard Malc Production