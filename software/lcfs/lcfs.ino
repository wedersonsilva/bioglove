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

  v0.1.5 Remapeamento de valores lidos de 0-1023 para 1-8
*/

int valor1 = 0;
int valor2 = 0;
int valor3 = 0;
int valor4 = 0;
int valor5 = 0;

void setup() {  
  Serial.begin(9600);
}

void loop() {  
  int dedo1 = analogRead(A1);
  int dedo2 = analogRead(A2);
  int dedo3 = analogRead(A3);
  int dedo4 = analogRead(A4);
  int dedo5 = analogRead(A5);
  
  valor1 = map(dedo1, 0, 1023, 1, 8);
  valor2 = map(dedo2, 0, 1023, 1, 8);
  valor3 = map(dedo3, 0, 1023, 1, 8);
  valor4 = map(dedo4, 0, 1023, 1, 8);
  valor5 = map(dedo5, 0, 1023, 1, 8);
  
  
  Serial.print("| Minimo: ");
  Serial.print(dedo1); 
  Serial.print(" REMAP: ");
  Serial.print(valor1);  
  
  Serial.print(" | Anelar: ");
  Serial.print(dedo2);
  Serial.print(" REMAP: ");
  Serial.print(valor2);  
  
  Serial.print(" | Meio: ");
  Serial.print(dedo3);
  Serial.print(" REMAP: ");
  Serial.print(valor3);  
  
  Serial.print(" | Indicador: ");
  Serial.print(dedo4);
  Serial.print(" REMAP: ");
  Serial.print(valor4);  
  
  Serial.print(" | Polegar: ");
  Serial.print(dedo5);
  Serial.print(" REMAP: ");
  Serial.println(valor5);  
  
  delay(200);        
}
