//déclaration de variable, 2 est le port ou on a branche notre lampe led
int led = 2;

void setup() {
  // on configure notre port 2 en sortie
  pinMode(led,OUTPUT);
}

void loop() {
  //code a repeter indefiniment
  digitalWrite(led,HIGH); // on allume la lampe led
  delay(500);// on attend 1s 
  digitalWrite(led,LOW); // on eteint la lampe led
  delay(500); // on attend 1s 
}
