/*
  Programa: Módulo RF 413 Mhz Transmissor 
 
  Referências:
  https://www.arduino.cc/en/Reference.StringToCharArray

  Modificado por: Wederson Silva
  
  v0.1.17 Limpa (organiza) o código
*/

#include <VirtualWire.h>    // Biblioteca para controlar o módulo RF 413 Mhz

String MENSAGEM = "";       // String que será enviada
String PREFIXO = "";        // Prefixo para concatenar mensagem
char BUFFER[12];            // Buffer de "MENSAGEM"
int NUM1 = 0;               // 1o Número variável
int NUM2 = 0;               // 2o Número variável

void setup()
{
  Serial.begin(9600);  
  vw_set_tx_pin(2);           // Pino de dados do transmissor
  vw_setup(2000);             // Bits por segundo  
}

void loop()
{       
  NUM1++;                             // Adicionando 1 unidade
  NUM2++;                             // Adicionando 1 unidade
  
  MENSAGEM = PREFIXO + NUM1 + NUM2;  // Concatenando os números  
  MENSAGEM.toCharArray(BUFFER,16);    // Transformando em vetor de char

  /* Imprimindo mensagens de informação */
  Serial.print("NUM1: ");
  Serial.print(NUM1);
  Serial.print(" NUM2: ");
  Serial.print(NUM2);
  Serial.print(" MENSAGEM: ");
  Serial.print(MENSAGEM);    
  Serial.print(" BUFFER: ");
  Serial.println(BUFFER);      

  /* Funcão que envia a mensagem */
  vw_send((uint8_t *)BUFFER, 12);
  vw_wait_tx();                         // Espera todo o vetor ser enviado

  delay(100);                           // Espera para estabilizar o programa
   
} 
