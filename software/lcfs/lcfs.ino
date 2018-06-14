/*  Low Cost Flex Sensor (Sensor Flex de Baixo Custo)

    Esse programa le alteracoes em cinco sensores conectados 
  a uma luva. Os movimentos de cada um dos dedos de uma mao 
  sao capturados.
    As leituras sao exibidas no Serial Monitor. Cada dedo é 
  representado por um número de 1 a 5, comecando pelo dedo 
  mindinho (1) ate o polegar (5).  

  Autor: Wederson Silva
  https://github.com/wedersonsilva/lcfs

  v0.1.6 Reorganiza e cria funcoes */

/* DECLARACAO DE VARIAVEIS */

/* Valores de cada sensor iniciados em zero */
int dedo1 = 0;
int dedo2 = 0;
int dedo3 = 0;
int dedo4 = 0;
int dedo5 = 0;

/* Remapeamento dos valores lidos pelos sensores */
int remap1 = 0;
int remap2 = 0;
int remap3 = 0;
int remap4 = 0;
int remap5 = 0;

void LER_SENSORES();
void REMAPEAR();
void EXIBIR();
void ENVIAR();

/* Configuração inicial */
void setup() {  
  Serial.begin(9600);
}

/* FUNCOES */

/* Leitura de cada sensor */
void LER_SENSORES(){  
  dedo1 = analogRead(A1);
  dedo2 = analogRead(A2);
  dedo3 = analogRead(A3);
  dedo4 = analogRead(A4);
  dedo5 = analogRead(A5);
}

/* Remapeamento dos valores */
void REMAPEAR(){
  remap1 = map(dedo1, 0, 1023, 1, 8);
  remap2 = map(dedo2, 0, 1023, 1, 8);
  remap3 = map(dedo3, 0, 1023, 1, 8);
  remap4 = map(dedo4, 0, 1023, 1, 8);
  remap5 = map(dedo5, 0, 1023, 1, 8);
}

/* Exibir valores na tela do Serial Monitor */
void EXIBIR(){
  Serial.print("| Minimo: ");
  Serial.print(dedo1); 
  Serial.print(" REMAP: ");
  Serial.print(remap1);  
  
  Serial.print(" | Anelar: ");
  Serial.print(dedo2);
  Serial.print(" REMAP: ");
  Serial.print(remap2);  
  
  Serial.print(" | Meio: ");
  Serial.print(dedo3);
  Serial.print(" REMAP: ");
  Serial.print(remap3);   
  
  Serial.print(" | Indicador: ");
  Serial.print(dedo4);
  Serial.print(" REMAP: ");
  Serial.print(remap4);  
  
  Serial.print(" | Polegar: ");
  Serial.print(dedo5);
  Serial.print(" REMAP: ");
  Serial.println(remap5);  
}

/* Funcao principal */
void loop() {  
  
  LER_SENSORES();
  REMAPEAR();
  EXIBIR();
        
  delay(200);                 // Pequeno intervalo
}
