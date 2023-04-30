const int pir = D1;
const int led = D7;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pir, INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int val = digitalRead(pir);
  Serial.println(val);


  if (val == true)
  {
    digitalWrite(led, HIGH);
  }
  else
  {
    digitalWrite(led, LOW);
  }

  delay(100);
}
