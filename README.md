## Handpan electrónico.

El objetivo del trabajo consiste en construir una estructura de hardware que mediante sensores reproduzca los sonidos que produciría un handpan. 

## Participantes.
Raquel Roca Pereira. r-roca
Iria Touriño Villanueva. Iriatourino.


## Objetivos del trabajo.
•	Programar la maqueta de handpan para que al tocarla reproduzca el sonido deseado.
•	Transmitir el sonido adecuado al ordenador y reproducirlo.


## PROGRAMA DEFINITIVO:

#include <SD.h>  
#include <SPI.h>    
#include <TMRpcm.h>  


#define pinSD 9
 
                     
TMRpcm tmrpcm;
                                                             
const int sensor1 = A0;
const int sensor2 = A1;
const int sensor3 = A2;
const int sensor4 = A3;
const int sensor5 = A4;
const int sensor6 = A5;

int nota1 = 0;
int nota2 = 0;
int nota3 = 0;
int nota4 = 0;
int nota5 = 0;
int nota6 = 0;

int sense1   = 350;
int sense2   = 350;
int sense3   = 350;
int sense4   = 350;
int sense5   = 350;
int sense6   = 350;

int volumen = 1;
int tiempo = 1;

int seleccion = 3;

void setup()
{
  pinMode (seleccion, INPUT );

  tmrpcm.speakerPin = 10;//pin del altavoz
   
  Serial.begin(9600);    

  if (!SD.begin(pinSD)) { // verifica la coneccion 
                          // de la tarjeta sd:
    Serial.println("Fallo en la tarjeta SD");  
    return;  
  }
}

void loop()
{
 
  nota1 = analogRead(sensor1);  // Lectura del sensor
  if (nota1 >  sense1)   // Si se ha captado una presión suficiente
  {
    tmrpcm.quality(volumen);
    tmrpcm.setVolume(volumen);
    tmrpcm.play("sonido23.wav");  // Se reprodue el sonido
    delay(tiempo);    // Pausa bloqueante para pruebas
   
  }

 
    nota2 = analogRead(sensor2);  // Lectura del sensor
  if (nota2 >  sense2)   // Si se ha captado una presión suficiente
  {
    tmrpcm.quality(volumen);
    tmrpcm.setVolume(volumen);
    tmrpcm.play("Re.wav");  // Se reprodue el sonido
    delay(tiempo);    // Pausa bloqueante para pruebas
   
  }


    nota3 = analogRead(sensor3);  // Lectura del sensor
  if (nota3 >  sense3)   // Si se ha captado una presión suficiente
  {
    tmrpcm.quality(volumen);
    tmrpcm.setVolume(volumen);
    tmrpcm.play("Mi.wav");  // Se reprodue el sonido
    delay(tiempo);    // Pausa bloqueante para pruebas
   
  }


    nota4 = analogRead(sensor4);  // Lectura del sensor
  if (nota4 >  sense4)   // Si se ha captado una presión suficiente
  {
    tmrpcm.quality(volumen);
    tmrpcm.setVolume(volumen);
    tmrpcm.play("Fa.wav");  // Se reprodue el sonido
    delay(tiempo);    // Pausa bloqueante para pruebas
   
  }


    nota5 = analogRead(sensor5);  // Lectura del sensor
  if (nota5 >  sense5)   // Si se ha captado una presión suficiente
  {
    tmrpcm.quality(volumen);
    tmrpcm.setVolume(volumen);
    tmrpcm.play("Sol.wav");  // Se reprodue el sonido
    delay(tiempo);    // Pausa bloqueante para pruebas
   
  }


    nota6 = analogRead(sensor6);  // Lectura del sensor
  if (nota6 >  sense6)   // Si se ha captado una presión suficiente
  {
    tmrpcm.quality(volumen);
    tmrpcm.setVolume(volumen);   
    tmrpcm.play("La.wav");  // Se reprodue el sonido
    delay(tiempo);    // Pausa bloqueante para pruebas
   
  }


   
}
 
