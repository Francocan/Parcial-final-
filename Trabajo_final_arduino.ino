
char labview;
String datos;
float kelvin=0;
float celsius=0;
void setup() {
  Serial.begin(9600);
  datos.reserve(200);
  pinMode(3,OUTPUT);

}

void loop() {
 if(Serial.available()>0)
 {labview=Serial.read();
 datos+=labview;
 if(labview=='e') 
 digitalWrite(3,HIGH);
 Serial.print("que mkda");
 Serial.println(datos);
  
kelvin=analogRead(0)*0.004882812*100;
celsius=kelvin-273.15;
Serial.println(celsius);
delay(100);
  
}
}
