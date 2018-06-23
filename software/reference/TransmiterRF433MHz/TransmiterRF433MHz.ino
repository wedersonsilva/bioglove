/*
  Programa : Módulo RF Transmissor com Arduino Uno
  Autor : FILIPEFLOP - Arduino e Cia
 
  Referência:
  https://www.arduino.cc/en/Reference.StringToCharArray

  Modificado por: Wederson Silva
  
  v0.1.16 Concatena e envia números variáveis
*/

#include <VirtualWire.h>
String mensagem;


String str = "";
int num1 = 0;
int num2 = 0;
char cstr[12];
String code = "";


void setup()
{
  Serial.begin(9600);  
  vw_set_tx_pin(2);           // Pino de dados do transmissor
  vw_setup(2000);             // Bits por segundo
  Serial.println("Digite o texto e clique em ENVIAR...");
}

void loop()
{ 
    
  // int to char array
  delay(200);
  num1++;
  num2++;
  str = code + num1 + num2;  
  Serial.print("NUM1: ");
  Serial.print(num1);
  Serial.print(" NUM2: ");
  Serial.print(num2);
  Serial.print(" STR: ");
  Serial.print(str);
  //str = String(num1, num2);
  str.toCharArray(cstr,16);
  Serial.print(" CSTR: ");
  Serial.println(cstr);      // prints "Hello String"
  //Serial.print("num 1 and num 2");
  //Serial.print(num1);
  //Serial.println(num2);
  
  vw_send((uint8_t *)cstr, 12);
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
