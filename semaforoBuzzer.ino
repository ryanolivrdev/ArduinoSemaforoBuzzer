
// SEMAFORO
int led1 = 2;
int led2 = 8;
int led3 = 12;

int ledPedestreVermelho = 10;
int ledPedestreVerde = 9;

// BUZZER
int buttonPin = 7;
int buzzerPin = 6;
int estadoButton = 0;

void setup() {
  // SEMAFORO
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  pinMode(ledPedestreVermelho,OUTPUT);
  pinMode(ledPedestreVerde,OUTPUT);

  // BUZZER
  pinMode(buttonPin,INPUT);
  pinMode(buzzerPin,OUTPUT);
}

void semaforo() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(ledPedestreVermelho, HIGH);
  digitalWrite(ledPedestreVerde,LOW);
  delay (10000);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay (3000);
  digitalWrite(ledPedestreVermelho, LOW);
  digitalWrite(ledPedestreVerde,HIGH);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay (10000);
}

void buzzer(){
  estadoButton = digitalRead(buttonPin);

  if(estadoButton == HIGH){
     digitalWrite(buzzerPin,HIGH);
  }else{
    digitalWrite(buzzerPin,LOW);
  }
};



void loop() {
//  semaforo();
  buzzer();
}
