#include "DHT.h"

DHT dht(3, DHT11);
//String tipoDado = "$STS";
//String separador = ",";
float temperatura = 0;
//float umidade = 0;

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("Iniciando leitura...");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  temperatura = dht.readTemperature();
 // umidade = dht.readHumidity();

  enviaDadosSerial();

}
void enviaDadosSerial(){
   // Serial.print(tipoDado);
    //Serial.print(separador);
    Serial.println(temperatura);
    //Serial.print(separador);
    //Serial.print(umidade);
    //Serial.println();
  }
