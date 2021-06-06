#define BUZZER_PIN D1
#define REED_1_PIN D2

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(REED_1_PIN, INPUT); 
  Serial.begin(9600);
}

void loop() {
  int reed1Val = digitalRead(REED_1_PIN);
  
  if (reed1Val == 0) {
    digitalWrite (BUZZER_PIN, LOW);
  } else {
    digitalWrite (BUZZER_PIN, HIGH);
  }
  Serial.println(reed1Val);
  
  delay(100);
}
