const int pinoSensor = A0; //PINO UTILIZADO PELO SENSOR
//VARIÁVEL QUE ARMAZENA O PERCENTUAL DE UMIDADE DO SOLO E OS RELE
int valorLido;
int rele1 = 8;
 
int analogSoloSeco = 400;
int analogSoloMolhado = 150;
int percSoloSeco = 0;
int percSoloMolhado = 100;
 
void setup(){
 Serial.begin(9600); //INICIALIZA A SERIAL
 Serial.println("Lendo a umidade do solo..."); //IMPRIME O TEXTO NO MONITOR SERIAL
 delay(2000); //INTERVALO DE 2 SEGUNDOS
 //DEFINIR RELES
 pinMode(rele1, OUTPUT);
}
 
void loop(){  
 valorLido = constrain(analogRead(pinoSensor),analogSoloMolhado,analogSoloSeco); //MANTÉM valorLido DENTRO DO INTERVALO (ENTRE analogSoloMolhado E analogSoloSeco)
 valorLido = map(valorLido,analogSoloMolhado,analogSoloSeco,percSoloMolhado,percSoloSeco); //EXECUTA A FUNÇÃO "map" DE ACORDO COM OS PARÂMETROS PASSADOS
 if(valor lido >= 80){ //SE O VALOR LIDO FOR IGUAL NOVENTA EXECUTE ESSE COMANDO
  digitalWrite(rele1, LOW); //ATIVAR RELE1
 }else{ //SE NÃO
  digitalWrite(rele1, HIGH); //DESATIVAR RELE1
 }
 delay(1000);  //INTERVALO DE 1 SEGUNDO
}
