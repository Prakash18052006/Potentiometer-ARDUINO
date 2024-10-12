int myvoltpin =A2;
int readval;
float  V2;
// const led = A4;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  readval = analogRead(myvoltpin);
  V2 = (5./1023.)*readval;
  Serial.println(V2);
  delay(1000);
  // put your main code here, to run repeatedly:

}
