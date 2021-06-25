float InNumbers[] = {0, 0, 0};


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0 ) {
    delay(400);
    InNumbers[0] = Serial.parseFloat();
    InNumbers[1] = Serial.parseFloat();
    while (Serial.available() > 0) {
      Serial.read();
    }
  InNumbers[2] = InNumbers[0] + InNumbers[1];
  Serial.print(InNumbers[2]);
  }
}
