/*  Low Cost Flex Sensor (Sensor Flex de Baixo Custo)

    Esse programa lê alterações em cinco sensores conectados 
  à uma luva. Os movimentos de cada um dos dedos de uma mão 
  são capturados.
    As leituras são exibidas no Serial Monitor. Cada dedo é 
  representado por um número de 1 a 5, começando pelo dedo 
  mínimo (1) até o polegar (5).  

  Autor: Wederson Silva
  https://github.com/wedersonsilva/lcfs

  v0.1.15 Renomeia valores */

/* DECLARACAO DE VARIAVEIS */

/* Valores de cada sensor iniciados em zero */
int dedo1 = 0;
int dedo2 = 0;
int dedo3 = 0;
int dedo4 = 0;
int dedo5 = 0;

/* Posição inicial de cada dedo */
int posicao1 = 0;
int posicao2 = 0;
int posicao3 = 0;
int posicao4 = 0;
int posicao5 = 0;

/* Funções do código */
void LER_SENSORES();
void POSICIONAR();
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

/* Remapeamento dos valores em até 8 posições*/
void POSICIONAR(){
  posicao1 = map(dedo1, 0, 1023, 1, 8);
  posicao2 = map(dedo2, 0, 1023, 1, 8);
  posicao3 = map(dedo3, 0, 1023, 1, 8);
  posicao4 = map(dedo4, 0, 1023, 1, 8);
  posicao5 = map(dedo5, 0, 1023, 1, 8);
}

/* Exibir valores na tela do Serial Monitor */
void EXIBIR(){
  Serial.print("| Minimo: ");
  Serial.print(dedo1); 
  Serial.print(" POSICAO: ");
  Serial.print(posicao1);  
  
  Serial.print(" | Anelar: ");
  Serial.print(dedo2);
  Serial.print(" POSICAO: ");
  Serial.print(posicao2);  
  
  Serial.print(" | Meio: ");
  Serial.print(dedo3);
  Serial.print(" POSICAO: ");
  Serial.print(posicao3);   
  
  Serial.print(" | Indicador: ");
  Serial.print(dedo4);
  Serial.print(" POSICAO: ");
  Serial.print(posicao4);  
  
  Serial.print(" | Polegar: ");
  Serial.print(dedo5);
  Serial.print(" POSICAO: ");
  Serial.println(posicao5);  
}

/* FUNCAO PRINCIPAL */
void loop() {  
  
  LER_SENSORES();
  POSICIONAR();
  EXIBIR();
        
  delay(200);                 // Pequeno intervalo
}
