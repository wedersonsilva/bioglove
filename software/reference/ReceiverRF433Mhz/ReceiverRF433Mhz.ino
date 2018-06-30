/* Programa: Módulo RF 413 Mhz Transmissor 
 
  Referências:
  https://www.pjrc.com/teensy/td_libs_VirtualWire.html

  Modificado por: Wederson Silva
  
  v0.1.22 Envia e recebe 10 níveis de flexão  */

#include <VirtualWire.h>

byte message[VW_MAX_MESSAGE_LEN];    // Armazena as mensagens recebidas
byte msgLength = VW_MAX_MESSAGE_LEN; // Armazena o tamanho das mensagens
int brilho1 = 0;
int brilho2 = 0;
int brilho3 = 0;
int brilho4 = 0;
int brilho5 = 0;

void setup()
{
  Serial.begin(9600);
  vw_set_rx_pin(4);                 // Pino de dados do receptor
  vw_setup(2000);                   // Bits por segundo
  vw_rx_start();                    // Inicializa o receptor

  /*  Usa apenas 4 LEDs porque a biblioteca VirtualWire afeta os pinos 
      de PWM 9 e 10   */
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(11, OUTPUT);  
     
  delay(2000);
}

void loop()
{
  uint8_t message[VW_MAX_MESSAGE_LEN];    
  uint8_t msgLength = VW_MAX_MESSAGE_LEN; 
  vw_wait_rx();
    
  if (vw_get_message(message, &msgLength)) // Non-blocking
  {                                    
    for (int i = 0; i < msgLength; i++)
    {                        
      message[i] = message[i] - '0';      
      
      brilho1 = message[0] * 28;
      analogWrite(3, brilho1);
      brilho2 = message[1] * 28;
      analogWrite(5, brilho2);
      brilho3 = message[2] * 28;
      analogWrite(6, brilho3);
      brilho4 = message[3] * 28;
      analogWrite(11, brilho4);            
    }
    
    Serial.println();
  }
}
