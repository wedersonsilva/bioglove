/*
  Código obtido no link abaixo:
  https://pandoralab.com.br/aprenda/modulo-rf-433-mhz/

  Modificado por: Wederson Silva
  
  v0.1.3

*/

#include <VirtualWire.h> //Insere a biblioteca VirtualWire
#define R_LED 8          //Define o pino 8 para o LED
char R_C_LED[2];         //Armazena o estado do LED
int R_BOT = 0;           //Configura o botao como nao acionado
 
void setup() {            //Chama a função setup
  Serial.begin(9600);     //Inicializa a serial
  pinMode(R_LED, OUTPUT); //Configura o pino 8 como saída
  vw_set_rx_pin(4);       //Configura o pino 4 como receptor
  vw_setup(5000);         //Velocidade de trasmissao em bps
  vw_rx_start();          //Inicializa o receptor
}
 
void loop() {                          //Chama a função loop
  uint8_t buf[VW_MAX_MESSAGE_LEN];     //Armazena os dados
  uint8_t buflen = VW_MAX_MESSAGE_LEN; //Define o tamanho dos dados
  if(vw_get_message(buf, &buflen)) {   //Verifica se exite dados
    int a;                             
    for(a = 0; a < buflen; a++) {        
      R_C_LED[a] = char(buf[a]);       //Armazena dados
    }
    R_C_LED[buflen] = '\0';
    int R_BOT = atoi(R_C_LED);          //Converte os dados de char para int
    if(R_BOT == 1) {                    //Se o botao for acionado, aciona o LED
      digitalWrite(R_LED, HIGH);        //Configura o LED como aceso
      Serial.print("Estado do LED = "); //Imprime no Monitor serial "Estado do LED = "
      Serial.println(R_C_LED);          //Imprime no Monitor serial o número do estado              
    }
    if(R_BOT == 0) {                    //Se o botao nao for acionado, nao aciona o LED
      digitalWrite(R_LED, LOW);         //Configura o LED como apagado
      Serial.print("Estado do LED = "); //Imprime no Monitor serial "Estado do LED = "
      Serial.println(R_C_LED);          //Imprime no Monitor serial o número do estado
    }
  }
}
