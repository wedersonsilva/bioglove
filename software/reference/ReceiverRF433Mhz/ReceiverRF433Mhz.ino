/*
  Programa: Módulo RF 413 Mhz Transmissor 
 
  Referências:
  https://www.pjrc.com/teensy/td_libs_VirtualWire.html

  Modificado por: Wederson Silva
  
  v0.1.21 :+1: Recebe, divide e transmite para 4 LEDs o código recebido 
*/

#include <VirtualWire.h>

byte message[VW_MAX_MESSAGE_LEN];    // Armazena as mensagens recebidas
byte msgLength = VW_MAX_MESSAGE_LEN; // Armazena o tamanho das mensagens
int valor = 0;
int brilho1 = 0;
int brilho2 = 0;
int brilho3 = 0;
int brilho4 = 0;
int brilho5 = 0;
String str;

void setup()
{
  Serial.begin(9600);
  vw_set_rx_pin(4);                 // Pino de dados do receptor
  vw_setup(2000);                   // Bits por segundo
  vw_rx_start();                    // Inicializa o receptor

  /* Usa apenas 4 LEDs porque exige PWM e os pinos 9 e 10 não podem 
     ser usados junto à biblioteca VirtualWire. */
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
    //Serial.print("Recebido: ");
    //Serial.println((char)message);

                 
    for (int i = 0; i < msgLength; i++)
    {            
      //Serial.write(message[i]);
      
      message[i] = message[i] - '0';

      //Serial.write(message[i]);
      
      brilho1 = message[0] * 31;
      analogWrite(3, brilho1);
      brilho2 = message[1] * 31;
      analogWrite(5, brilho2);
      brilho3 = message[2] * 31;
      analogWrite(6, brilho3);
      brilho4 = message[3] * 31;
      analogWrite(11, brilho4);
      //brilho5 = message[4] * 31;
      //analogWrite(13, brilho5);

      //Serial.print("Brilho: ");
      //Serial.println(brilho);
      //Serial.print("MESSAGE[0]: ");
      //Serial.println(message[0]);
      
//      if((char)message[i] =='5')
//        {
//            // Serial.print(" AQUI ");
//            //digitalWrite(13, true); //Encendemos el Led
//        }      
//      else
//        {
//            //digitalWrite(13, false); //Encendemos el Led
//        }      
//delay(100);
    }
    
    Serial.println();
  }
}
