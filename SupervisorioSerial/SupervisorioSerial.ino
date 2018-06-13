#include "DHT.h"

DHT dht(3, DHT11);
//String tipoDado = "$STS";
//String separador = ",";
float temperatura = 0;
//float umidade = 0;

void setup() {
  Serial.begin(9600);
  dht.begin();
  //Serial.println("Iniciando leitura...");
}

void loop() {
  // put your main code here, to run repeatedly:
    temperatura = dht.readTemperature();
 // umidade = dht.readHumidity();
   enviaDadosSerial();
   delay(10000);

}
void enviaDadosSerial(){
    Serial.println(temperatura);
  }
