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

  v0.1.1 - Teste com apenas um sensor
*/

void setup() {  
  Serial.begin(9600);
}

void loop() {  
  int dedo1 = analogRead(A1);
  Serial.print("Mindinho: ");
  Serial.println(dedo1);
  delay(1);        
}
