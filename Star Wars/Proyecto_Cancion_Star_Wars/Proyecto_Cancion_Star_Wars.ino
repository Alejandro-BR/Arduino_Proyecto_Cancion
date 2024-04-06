/**
 *
 * Proyecto Cancion
 *
 * Cancion: Melodía principal de Star Wars (versión simplificada)
 * Autor: John Towner Williamsl
 * https://www.youtube.com/watch?v=nXnW8QEeGDo&ab_channel=bsocine
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

const float Do = 523.25;
const float DoS = 554.37;
const float Re = 587.33;
const float ReS = 622.25;
const float Mi = 659.26;
const float Fa = 698.46;
const float FaS = 739.99;
const float Sol = 783.99;
const float SolS = 830.61;
const float La = 880;
const float LaS = 932.33;
const float Si = 987.77;
const float Do2 = 1046.50;
const float DoS2 = 1108.73;
const float Re2 = 1174.66;
const float ReS2 = 1244.51;
const float Mi2 = 1318.51;
const float Fa2 = 1396.91;
const float FaS2 = 1479.98;


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
  nota(Mi, NEGRA);
  nota(Mi, NEGRA);
  nota(Mi, NEGRA);
  nota(DoS, NEGRA);
  nota(Si, NEGRA);
  nota(Si, NEGRA);
  nota(Mi2, BLANCA);
  
  // Segunda sección
  nota(Re, NEGRA);
  nota(Re, NEGRA);
  nota(DoS, NEGRA);
  nota(Si, NEGRA);
  nota(Si, NEGRA);
  nota(Mi2, BLANCA);
  
  // Tercera sección
  nota(Re, NEGRA);
  nota(DoS, NEGRA);
  nota(Si, NEGRA);
  nota(Si, NEGRA);
  nota(DoS, BLANCA);
  
  // Cuarta sección
  nota(La, NEGRA);
  nota(La, NEGRA);
  nota(La, NEGRA);
  nota(La, NEGRA);
  nota(Sol, NEGRA);
  nota(Fa, NEGRA);
  nota(Mi, NEGRA);
  nota(Re, NEGRA);
  
  // Quinta sección
  nota(DoS, NEGRA);
  nota(Si, NEGRA);
  nota(Si, NEGRA);
  nota(LaS, NEGRA);
  nota(Si, NEGRA);
  nota(Si, NEGRA);
  nota(DoS2, NEGRA);
  nota(LaS, NEGRA);
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
