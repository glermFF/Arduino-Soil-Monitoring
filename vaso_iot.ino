// Sistema de monitoramento da planta;

#include <stdlib.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define pinA A0 // Porta analógica que será utilizada (A0)
#define OLED_RESET 4
//#define SCREEN_WIDTH 128
//#define SCREEN_HEIGHT 64

Adafruit_SSD1306 OLED(OLED_RESET);

float umidade;
float porcenUmidade;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  OLED.begin(SSD1306_SWITCHCAPVCC, 0X3C);
  pinMode(pinA, INPUT);
}

int GetUmidade(){
  umidade = analogRead(pinA); // Entrada analogica para pegar valor da umidade 
  porcenUmidade = map(umidade, 1024.0, 316.0, 0.0, 100.0); // Define a umidade em porcentagem
  return porcenUmidade;
}

void header(){
  umidade = GetUmidade();
  OLED.clearDisplay();
  OLED.setTextSize(1);
  OLED.setTextColor(WHITE);
  OLED.setCursor(0, 1);

  // Retorna Status sobre o solo
  if (porcenUmidade >= 0.0 && porcenUmidade <= 25.0){
    OLED.println("Status da planta: Solo Seco");
    OLED.display();
  } else if (porcenUmidade > 25.0 && porcenUmidade <= 75.0){
    OLED.println("Status da planta: Precisando Regar");
    OLED.display();
  } else if (porcenUmidade > 75.0 && porcenUmidade <= 100.0){
    OLED.println("Status da planta: Solo Umido");
    OLED.display();
  }
  
}

void loop() {
  umidade = GetUmidade();
  
  // Configurações de exibição do display
  OLED.clearDisplay();
  OLED.setTextSize(1);
  OLED.setTextColor(WHITE);
  OLED.setCursor(0, 10);

  header();
  
  OLED.println("Umidade(%): ");
  OLED.print( umidade );
  OLED.display();
}
