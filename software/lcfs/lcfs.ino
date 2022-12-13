/*  Bioglove: Protótipo de um transdutor de flexão bioinspirado

    Esse programa lê valores de cinco sensores conectados a
  cada um dos dedos de uma luva. O movimento de cada dedo é 
  captado individualmente.
    
    As leituras são exibidas no Serial Monitor e enviadas 
  através de transmissor RF 433Mhz à um receptor RF conectado 
  à outro Arduino. 
  
  Cada dedo da luva é representado por um número de 1 a 5, 
  começando pelo dedo mínimo (1) até o polegar (5).  

  Autor: Wederson Silva
  https://github.com/wedersonsilva/bioglove

  v0.1.22 Envia e recebe 10 níveis de flexão */

#include <VirtualWire.h>    // Biblioteca do módulo RF 413 Mhz

/* DECLARACAO DE VARIAVEIS */

/* Variáveis usadas no transmissor */
String MENSAGEM = "";       // Mensagem que deve ser enviada
String PREFIXO = "";        // Prefixo necessário para concatenar valores
char BUFFER[6];             // Buffer de "MENSAGEM"

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

/* Funções */
void LER_SENSORES();
void POSICIONAR();
void EXIBIR();
void ENVIAR();

/* CONFIGURAÇÃO INICIAL */
void setup() {  
  Serial.begin(9600);
  vw_set_tx_pin(2);           // Pino (2) de dados do transmissor 
  vw_setup(2000);             // Bits por segundo  
}

/* INÍCIO DAS FUNÇÕES */

/* Leitura analógica de cada sensor */
void LER_SENSORES(){  
  dedo1 = analogRead(A1);
  dedo2 = analogRead(A2);
  dedo3 = analogRead(A3);
  dedo4 = analogRead(A4);
  dedo5 = analogRead(A5);
}

/* Remapeamento dos valores de 1024 posições para apenas 10 posições*/
void POSICIONAR(){
  posicao1 = map(dedo1, 0, 1023, 0, 9);
  posicao2 = map(dedo2, 0, 1023, 0, 9);
  posicao3 = map(dedo3, 0, 1023, 9, 0);
  posicao4 = map(dedo4, 0, 1023, 9, 0);
  posicao5 = map(dedo5, 0, 1023, 9, 0);
}

/* Concatena, transforma em vetor de char e envia a mensagem */
void ENVIAR(){
  MENSAGEM = PREFIXO + posicao1 + posicao2 + posicao3 + posicao4 + posicao5;
  MENSAGEM.toCharArray(BUFFER,6);

  vw_send((uint8_t *)BUFFER, 6);    // Função que envia o vetor de char
  vw_wait_tx();                     // Espera todo o vetor ser enviado

  delay(200);                       // Espera para estabilizar o programa
}

/* Exibir valores na tela do Serial Monitor */
void EXIBIR(){
  Serial.print("| Min: ");
  Serial.print(dedo1); 
  Serial.print(" POS: ");
  Serial.print(posicao1);  
  
  Serial.print(" | Ane: ");
  Serial.print(dedo2);
  Serial.print(" POS: ");
  Serial.print(posicao2);  
  
  Serial.print(" | Mei: ");
  Serial.print(dedo3);
  Serial.print(" POS: ");
  Serial.print(posicao3);   
  
  Serial.print(" | Ind: ");
  Serial.print(dedo4);
  Serial.print(" POS: ");
  Serial.print(posicao4);  
  
  Serial.print(" | Pol: ");
  Serial.print(dedo5);
  Serial.print(" POS: ");
  Serial.println(posicao5);  
}

/* FUNCAO PRINCIPAL */
void loop() {  
  
  LER_SENSORES();
  POSICIONAR();
  ENVIAR();
  EXIBIR();         
}


/* FIM DO PROGRAM */

/*  P.S.: Este projeto já foi conhecido por 
    Low Cost Flex Sensor (Sensor Flex de Baixo Custo)	*/
