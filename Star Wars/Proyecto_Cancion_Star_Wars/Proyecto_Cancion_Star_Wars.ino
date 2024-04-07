/**
 *
 * Proyecto Cancion
 *
 * Cancion: Marcha imperiar de Star Wars (versión simplificada)
 * Autor: John Williams
 *
 ********** ********** ********** ********** ********** ********** **********
 * Version 1.0
 * Fecha: 06/04/2024
 *
 * @author Alejandro Barrionuevo Rosado
 */

const int PinBuzzer = 6;  // Pin digital PWM
const int PinBoton = 2;   // Pin digital
const int PinR = 9;       // Pin digital PWM
const int PinG = 10;      // Pin digital PWM
const int PinB = 11;      // Pin digital PWM

const int TIEMPO = 1500;
int estadoBoton;

const float Do2 = 261.63;   
const float Re2 = 293.66;  
const float Mi2 = 329.63;    
const float Fa2 = 349.23;  
const float Sol2 = 392.00; 
const float SolS2 = 415.30; 
const float La2 = 440.00;    
const float Si2 = 466.16;    
const float Do3 = 523.25;   
const float DoS3 = 554.37;   
const float Re3 = 587.33;    
const float ReS3 = 622.25;   
const float Mi3 = 659.26;   
const float Fa3 = 698.46;    
const float FaS3 = 739.99;   
const float Sol3 = 783.99;  
const float SolS3 = 830.61;  
const float La3 = 880.00;   

const int NEGRA = 250;
const int BLANCA = 500;

/**
 * nota
 * 
 * Hace sonar una frecuencia (nota) durante
 * un periodo de tiempo, es decir, su duracion (negra o blanca).
 * 
 * Ejemplo:
 * nota(Do, NEGRA); 
 * 
 * @param nota float
 * @param duracion int
 */
void nota(float nota, int duracion) {
  tone(PinBuzzer, nota, duracion);
  delay(duracion);
  noTone(PinBuzzer);
  delay(duracion);
}

/**
 * setColor
 * 
 * Controla el color de un led RGB.
 * 
 * Rojo 0-255 
 * Verde 0-255 
 * Azul 0-255 
 * 
 * Ejemplo:
 * setColor(0,0,0); 
 * 
 * @param red int
 * @param green int
 * @param blue int
 */
void setColor(int red, int green, int blue) {
  analogWrite(PinR, red);
  analogWrite(PinG, green);
  analogWrite(PinB, blue);
}

/**
 * ledRojo
 * 
 * Utilizando la funcion setColor
 * pone el led rgb en rojo.
 * 
 */
void ledRojo() {
  setColor(255, 0, 0);
}

/**
 * ledVerde
 * 
 * Utilizando la funcion setColor
 * pone el led rgb en verde.
 * 
 */
void ledVerde() {
  setColor(0, 255, 0);
}

/**
 * ledAzul
 * 
 * Utilizando la funcion setColor
 * pone el led rgb en azul.
 * 
 */
void ledAzul() {
  setColor(0, 0, 255);
}

/**
 * cancion
 * 
 * Utilizando la funcion nota
 * hace sonar la cancion.
 * 
 */
void cancion() {
  // Primera sección
  nota(La2, 500);
  nota(La2, 500);
  nota(La2, 500);
  nota(Fa2, 350);
  nota(Do3, 150);
  nota(La2, 500);
  nota(Fa2, 350);
  nota(Do3, 150);
  nota(La2, 650);

  delay(500);

  nota(Mi3, 500);
  nota(Mi3, 500);
  nota(Mi3, 500);
  nota(Fa3, 350);
  nota(Do3, 150);
  nota(SolS3, 500);
  nota(Fa2, 350);
  nota(Do3, 150);
  nota(La2, 650);

  delay(500);

  // Segunda sección
  nota(La3, 500);
  nota(La2, 300);
  nota(La2, 150);
  nota(La3, 500);
  nota(SolS3, 325);
  nota(Sol3, 175);
  nota(FaS3, 125);
  nota(Fa3, 125);
  nota(FaS3, 250);

  delay(325);

  nota(La2, 250);
  nota(ReS3, 500);
  nota(Re3, 325);
  nota(DoS3, 175);
  nota(Do3, 125);
  nota(Si2, 125);
  nota(Do3, 250);

  delay(350);
}

void setup() {

  Serial.begin(9600);

  pinMode(PinBoton, INPUT);
  pinMode(PinR, OUTPUT);
  pinMode(PinG, OUTPUT);
  pinMode(PinB, OUTPUT);
}

void loop() {

  estadoBoton = digitalRead(PinBoton);
  Serial.println(estadoBoton);

  if (estadoBoton == HIGH) {

    ledVerde();
    delay(TIEMPO);
    ledAzul();

    // Comienza la cancion
    cancion();

    delay(TIEMPO);

  } else {
    ledRojo();
  }
}
