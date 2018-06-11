/*
  Código obtido no link abaixo:
  https://pandoralab.com.br/aprenda/modulo-rf-433-mhz/

  Modificado por: Wederson Silva
  
  v0.1.3

*/

#include <VirtualWire.h> //Insere a biblioteca VirtualWire
#define T_BOT 5          //Define o pino 5 para o botao
char T_C_LED[2];         //Armazena o estado do LED
int T_LED = 0;           //Define o LED como apagado
 
void setup() {                 //Chama a função setup
  Serial.begin(9600);          //Inicializa a serial
  pinMode(T_BOT,INPUT_PULLUP); //Configura o pino 5 como entrada
  vw_set_tx_pin(4);            //Configura o pino 2 como transmissor
  vw_setup(5000);              //Velocidade de trasmissao em bps
}
 
void loop() {                                     //Chama a função loop
  if(digitalRead(T_BOT) == LOW) {                 //Configura o botao como acionado
    T_LED = !T_LED;                               //Inverte o estado do LED
    itoa(T_LED, T_C_LED, 2);                      //Converte os dados de int para char
    vw_send((uint8_t *)T_C_LED, strlen(T_C_LED)); //Envia os dados
    vw_wait_tx();                                 //Aguarda a transmissao de dados
    delay(100);                                   //Tempo em que o LED permanece aceso
    Serial.print("Estado do botao = ");           //Imprime no Monitor serial "Estado do botao = "
    Serial.println(T_C_LED);                      //Imprime no Monitor serial o número do estado
  }
}
