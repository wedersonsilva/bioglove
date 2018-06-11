/*
  Low Cost Flex Sensor (Sensor Flex de Baixo Custo)

  Esse programa lê alterações em cinco potenciômetros 
  atrelados à uma luva.
  Fios são conectados a cada um dos cinco dedos da mão, 
  e seus movimentos são percebidos por cada um dos 
  potenciômetros.

  A leitura de cada sensor é enviada ao Serial Monitor.

  Usando APENAS a mão direita, cada dedo é representado 
  por um número de 1 a 5, começando pelo dedo mindinho (1)
  até o polegar (5).  

  Autor: Wederson Silva
  https://github.com/wedersonsilva/lcfs

  v0.1.2 - Ler cinco potenciomêmtros e enviar ao Serial Monitor
*/

void setup() {  
  Serial.begin(9600);
}

void loop() {  
  int dedo1 = analogRead(A1);
  int dedo2 = analogRead(A2);
  int dedo3 = analogRead(A3);
  int dedo4 = analogRead(A4);
  int dedo5 = analogRead(A5);
  
  Serial.print("Minimo: ");
  Serial.println(dedo1);
  Serial.print(" Anelar: ");
  Serial.println(dedo2);
  Serial.print(" Meio: ");
  Serial.println(dedo3);
  Serial.print(" Indicador: ");
  Serial.println(dedo4);
  Serial.print(" Polegar: ");
  Serial.println(dedo5);
  
  delay(100);        
}
