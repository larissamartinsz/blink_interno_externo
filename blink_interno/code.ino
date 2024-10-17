void setup() {
  pinMode(11, OUTPUT);       // Define o pino 11 como saída (LED)
  pinMode(8, INPUT_PULLUP);  // Define o pino 8 como entrada com resistor pull-up (botão)
}

void loop() {
  if (digitalRead(8) == LOW) {  // Se o botão for pressionado (nível LOW)
    digitalWrite(11, LOW);      // Desliga o LED e interrompe o pisca-pisca
  } else {
    digitalWrite(11, HIGH);     // Liga o LED
    delay(1000);                // Aguarda 1 segundo
    digitalWrite(11, LOW);      // Desliga o LED
    delay(1000);                // Aguarda 1 segundo
  }
}
