void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int Temp = analogRead(37);
  float Voltage = Temp * (5/2048.0);
  float Kelvin = Voltage* (1/.01);
  float Celsius = Kelvin - 303.15;
  Serial.println(Celsius);
  delay(1000);
  if (Celsius = 40)  digitalWrite(5,HIGH);
  if (Celsius != 40)  digitalWrite (5,LOW);

}
