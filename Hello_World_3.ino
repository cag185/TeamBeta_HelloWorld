const int Delay = 500;
const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT); //led1
  pinMode(LED2, OUTPUT); //led2
  pinMode(LED3, OUTPUT); //led3
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED1, HIGH);
  delay(Delay);
  digitalWrite(LED1, LOW);
  delay(Delay);

  digitalWrite(LED2, HIGH);
  delay(Delay);
  digitalWrite(LED2, LOW);  
  delay(Delay);
  
  digitalWrite(LED3, HIGH);
  delay(Delay);
  digitalWrite(LED3, LOW);
  delay(Delay);
}
