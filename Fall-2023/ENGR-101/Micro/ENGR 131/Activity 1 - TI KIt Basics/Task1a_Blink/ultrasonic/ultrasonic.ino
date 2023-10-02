#define INPUT_PIN = 25
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(INPUT_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  float sensorReading = analogRead(INPUT_PIN);
  Serial.print(sensorReading);
  delay(1000);
}
