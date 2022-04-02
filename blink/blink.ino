void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(0, HIGH);
  Serial.println("Hello, world!");
  delay(1000);
  digitalWrite(0, LOW);
  delay(1000);
}
