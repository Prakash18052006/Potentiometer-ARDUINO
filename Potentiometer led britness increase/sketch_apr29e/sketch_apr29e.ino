int myvoltpin =A0;
int readval;
int led = 10;
int writeval;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(myvoltpin, INPUT);
  // put your setup code here, to run once:
}
void loop() {
  readval = analogRead(myvoltpin);
  Serial.println(readval);
  writeval =0.249*readval;
  analogWrite(led , writeval);
  delay(50);
  // put your main code here, to run repeatedly:
}