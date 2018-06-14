/*
  Programa : Módulo RF Transmissor com Arduino Uno
  Autor : FILIPEFLOP - Arduino e Cia
 
  Referência:
  https://www.filipeflop.com/blog/modulo-rf-transmissor-receptor-433mhz-arduino/

  Modificado por: Wederson Silva
  
  v0.1.7 Testa o envio de numeros variaveis
*/

#include <VirtualWire.h>
String mensagem;


String str;
int num = 0;
char cstr[16];


void setup()
{
  Serial.begin(9600);  
  vw_set_tx_pin(4);           // Pino de dados do transmissor
  vw_setup(2000);             // Bits por segundo
  Serial.println("Digite o texto e clique em ENVIAR...");
}

void loop()
{ 
    
  // int to char array
  delay(200);
  num++;
  str = String(num);
  str.toCharArray(cstr,16);
  Serial.println(cstr);      // prints "Hello String"
  
  vw_send((uint8_t *)cstr, 16);
  vw_wait_tx();
   
//  char texto[3] = {'O','l','a'} ;
//  //texto[2] = count;
//  vw_send((uint8_t *)texto, 3);
//  vw_wait_tx();
  
//  
//  char data[40];
//  int numero;
//  if (Serial.available() > 0)
//  {
//    numero = Serial.readBytesUntil (13,data,40);
//    data[numero] = 0;
//    Serial.print("Enviado : ");
//    Serial.print(data);
//    Serial.print(" - Caracteres : ");
//    Serial.println(strlen(data));
//    //Envia a mensagem para a rotina que
//    //transmite os dados via RF
//    send(data);
//  }  
} 

void send (char *message)
{
  vw_send((uint8_t *)message, strlen(message));
  vw_wait_tx(); // Aguarda o envio de dados
  Serial.println("Enviado");
}
