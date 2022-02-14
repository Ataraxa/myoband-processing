void setup() {
  Serial.begin(9600);

}

void loop() {
  for (int i = 0; i < 14; i++) {
    float rnd_data = random(200) + random(100) * 0.01;
    Serial.print(rnd_data);
    Serial.print('x');
  }
  float rnd_data = random(200) + random(100) * 0.01;
  Serial.println(rnd_data);

}
