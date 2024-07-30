#define pinA A0 // Porta analógica que será utilizada (A0)

float umidade;
float porcenUmidade;

void setup() {
  Serial.begin(9600);
  pinMode(pinA, INPUT);
}

void loop() {
  umidade = analogRead(pinA); // Valor da umidade
  porcenUmidade = map(umidade, 1023.0, 0.0, 0.0, 100.0); // Define a umidade em porcentagem
  
  if (porcenUmidade >= 0.0 && porcenUmidade <= 25.0){
    Serial.print("Status da planta: Solo Seco");
    Serial.println("Umidade(%): ");
    Serial.print(porcenUmidade);
  } else if (porcenUmidade > 25.0 && porcenUmidade <= 50.0){
    Serial.print("Status da planta: Precisando Regar");
    Serial.println("Umidade(%): ");
    Serial.print(porcenUmidade);
  } else if (porcenUmidade > 50.0 && porcenUmidade <= 100.0){
    Serial.print("Status da planta: Solo Umido");
    Serial.println("Umidade(%): ");
    Serial.print(porcenUmidade);
  }
}
