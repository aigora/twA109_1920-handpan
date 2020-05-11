

#include <SD.h>
#include <SPI.h>
#include <TMRpcm.h>

#define pinSD 10
TMRpcm tmrpcm;

const int sensor1 = A0;  //Pin de conexion del piezo electrico
const int sensor2 = A1;
const int sensor3 = A2;
const int sensor4 = A3;
const int sensor5 = A4;
const int sensor6 = A5;
const int sensor7 = A6;
const int sensor8 = A7;

int sense1 = 350; //Sensibilidad del sensor
int sense2 = 350;
int sense3 = 350;
int sense4 = 350;
int sense5 = 350;
int sense6 = 350;
int sense7 = 350;
int sense8 = 350;

int tiempo = 60;  // tiempo maximo de reproduccion de un sonido

int nota1 = 0;    // Estado en el que esta un sensor antes de recibir un golpe
int nota2 = 0;
int nota3 = 0;
int nota4 = 0;
int nota5 = 0;
int nota6 = 0;
int nota7 = 0;
int nota8 = 0;

int volumen1 = 4;  // Volumen
int volumen2 = 4;
int volumen3 = 4;
int volumen4 = 4;
int volumen5 = 4;
int volumen6 = 4;
int volumen7 = 4;
int volumen8 = 4;


// Función para la configuración

void setup()
{
  tmrpcm.speakerPin = 9;      //pin del altavoz
  Serial.begin(9600);         // Velocidad del puerto serie

  if (!SD.begin(pinSD))       // Verifica la coneccion de la tarjeta sd:
  {                      
    Serial.println("Fallo en la tarjeta SD");
    return;
  }
}

//sensor 1//
void loop()
{
  nota1 = analogRead(sensor1);  // Lectura del sensor
  if (nota1 >  sense1)   // Si se ha captado una presión suficiente
  {
     tmrpcm.setVolume(volumen1);  // Se establece el volumen
     Serial.println(volumen1);
     tmrpcm.play("sonido1.wav");  // Reproduce el sonido descargado en la tarjeta correspondiente al sensor
           
  }     delay(tiempo);
}


/////sensor 2/////
void loop()
{
  nota2 = analogRead(sensor2);  // Lectura del sensor
  if (nota2 >  sense2)   // Si se ha captado una presión suficiente
  {
     tmrpcm.setVolume(volumen2);  // Se establece el volumen
     Serial.println(volumen2);
     tmrpcm.play("sonido2.wav");  // Reproduce el sonido descargado en la tarjeta correspondiente al sensor
           
  }     delay(tiempo);
}

/////sensor 3/////
void loop()
{
  nota3 = analogRead(sensor3);  // Lectura del sensor
  if (nota3 >  sense3)   // Si se ha captado una presión suficiente
  {
     tmrpcm.setVolume(volumen3);  // Se establece el volumen
     Serial.println(volumen3);
     tmrpcm.play("sonido3.wav");  // Reproduce el sonido descargado en la tarjeta correspondiente al sensor
           
  }     delay(tiempo);
}


/////sensor 4/////
void loop()
{
  nota4 = analogRead(sensor4);  // Lectura del sensor
  if (nota4 >  sense4)   // Si se ha captado una presión suficiente
  {
     tmrpcm.setVolume(volumen4);  // Se establece el volumen
     Serial.println(volumen4);
     tmrpcm.play("sonido4.wav");  // Reproduce el sonido descargado en la tarjeta correspondiente al sensor
           
  }     delay(tiempo);
}


/////sensor 5/////
void loop()
{
  nota5 = analogRead(sensor5);  // Lectura del sensor
  if (nota5 >  sense5)   // Si se ha captado una presión suficiente
  {
     tmrpcm.setVolume(volumen5);  // Se establece el volumen
     Serial.println(volumen5);
     tmrpcm.play("sonido5.wav");  // Reproduce el sonido descargado en la tarjeta correspondiente al sensor
           
  }     delay(tiempo);
}


/////sensor 6/////
void loop()
{
  nota6 = analogRead(sensor6);  // Lectura del sensor
  if (nota6 >  sense6)   // Si se ha captado una presión suficiente
  {
     tmrpcm.setVolume(volumen6);  // Se establece el volumen
     Serial.println(volumen6);
     tmrpcm.play("sonido6.wav");  // Reproduce el sonido descargado en la tarjeta correspondiente al sensor
           
  }     delay(tiempo);
}


/////sensor 7/////
void loop()
{
  nota7 = analogRead(sensor7);  // Lectura del sensor
  if (nota7 >  sense7)   // Si se ha captado una presión suficiente
  {
     tmrpcm.setVolume(volumen7);  // Se establece el volumen
     Serial.println(volumen7);
     tmrpcm.play("sonido7.wav");  // Reproduce el sonido descargado en la tarjeta correspondiente al sensor
           
  }     delay(tiempo);
}


/////sensor 8/////
void loop()
{
  nota8 = analogRead(sensor8);  // Lectura del sensor
  if (nota8 >  sense81)   // Si se ha captado una presión suficiente
  {
     tmrpcm.setVolume(volumen8);  // Se establece el volumen
     Serial.println(volumen8);
     tmrpcm.play("sonido8.wav");  // Reproduce el sonido descargado en la tarjeta correspondiente al sensor
           
  }     delay(tiempo);
}
     
   
 
