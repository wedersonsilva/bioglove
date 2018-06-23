/*
  Programa: Módulo RF 413 Mhz Transmissor 
 
  Referências:
  https://www.pjrc.com/teensy/td_libs_VirtualWire.html

  Modificado por: Wederson Silva
  
  v0.1.18 Organiza e diminui o código ao mínimo
*/

#include <VirtualWire.h>

byte message[VW_MAX_MESSAGE_LEN];    // Armazena as mensagens recebidas
byte msgLength = VW_MAX_MESSAGE_LEN; // Armazena o tamanho das mensagens
int valor = 0;

void setup()
{
  Serial.begin(9600);
  vw_set_rx_pin(4);                 // Pino de dados do receptor
  vw_setup(2000);                   // Bits por segundo
  vw_rx_start();                    // Inicializa o receptor
     
  delay(2000);
}


void loop()
{
  uint8_t message[VW_MAX_MESSAGE_LEN];    
  uint8_t msgLength = VW_MAX_MESSAGE_LEN; 
  vw_wait_rx();
    
  if (vw_get_message(message, &msgLength)) // Non-blocking
  {                   
    Serial.print("Recebido: ");
               
    for (int i = 0; i < msgLength; i++)
    {            
      Serial.write(message[i]);      
    }
    
    Serial.println();
  }
}
