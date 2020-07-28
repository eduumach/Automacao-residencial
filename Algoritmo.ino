const int pinoSensor = A0; 

int valorLido;
int rele1 = 8;
int analogSoloSeco = 400;
int analogSoloMolhado = 150;
int percSoloSeco = 0;
int percSoloMolhado = 100;
 
void setup(){
 Serial.begin(9600); 
 Serial.println("Lendo a umidade do solo..."); 
 delay(2000);
 
 pinMode(rele1, OUTPUT);
}
 
void loop(){  
 valorLido = constrain(analogRead(pinoSensor),analogSoloMolhado,analogSoloSeco); 
 valorLido = map(valorLido,analogSoloMolhado,analogSoloSeco,percSoloMolhado,percSoloSeco); 
 if(valor lido >= 80){ 
  digitalWrite(rele1, LOW); 
 }else{ //SE NÃO
  digitalWrite(rele1, HIGH);
 }
 delay(1000);
}
