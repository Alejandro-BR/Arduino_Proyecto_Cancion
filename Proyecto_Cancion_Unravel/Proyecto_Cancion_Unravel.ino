/********** ********** ********** ********** ********** ********** **********
 * Programacion y moontaje: Alejandro Barrionuevo Rosado 
 * Musico: Jesus Bermejo Rosado
 * Fecha: 03-04-05-06/03/2022
 ********** ********** ********** ********** ********** ********** **********
 * Cacion:  Unravel
 * Artistas: TK from Ling tosite Sigure
 * Album:   Fantastic Magic
 * Opening 1 de Tokyo Ghoul
 * https://www.youtube.com/watch?v=7aMOurgDB-o&ab_channel=Funimation
 *
 ********** ********** ********** ********** ********** ********** **********
 * Version 2.0 
 * Fecha: Marzo 2024
 * @author Alejandro Barrionuevo Rosado
 ********** ********** ********** ********** ********** ********** **********/

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
const float Si = 493;
const float Re2 = 1174.66;
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

    setColor(0, 255, 0);
    delay(TIEMPO);
    setColor(0, 0, 255);

    // Comienza la cancion

    // Parte 1

    nota(LaS, NEGRA);
    nota(Do, NEGRA);
    nota(LaS, NEGRA);
    nota(La, NEGRA);
    nota(Sol, BLANCA);
    nota(Do, NEGRA);
    nota(LaS, NEGRA);
    nota(La, NEGRA);

    // Parte 2

    nota(Sol, BLANCA);
    nota(Sol, NEGRA);
    nota(Fa, BLANCA);
    nota(ReS, NEGRA);
    nota(ReS, NEGRA);
    nota(Fa, NEGRA);
    nota(Re, BLANCA);

    // Parte 3

    nota(Re, NEGRA);
    nota(Re, BLANCA);
    nota(Re, NEGRA);
    nota(Re, BLANCA);
    nota(Re2, NEGRA);
    nota(Re2, BLANCA);
    nota(LaS, NEGRA);
    nota(La, BLANCA);
    nota(La, NEGRA);
    nota(La, BLANCA);
    nota(LaS, NEGRA);
    nota(LaS, BLANCA);

    // Parte 4

    nota(LaS, NEGRA);
    nota(Do, NEGRA);
    nota(LaS, NEGRA);
    nota(La, NEGRA);
    nota(Sol, BLANCA);
    nota(Do, NEGRA);
    nota(LaS, NEGRA);
    nota(La, NEGRA);

    // Parte 5

    nota(Sol, BLANCA);
    nota(Sol, NEGRA);
    nota(Fa, BLANCA);
    nota(ReS, NEGRA);
    nota(ReS, NEGRA);
    nota(Fa, NEGRA);
    nota(Re, BLANCA);

    // Parte 6

    nota(Re, NEGRA);
    nota(Re, BLANCA);
    nota(Re, NEGRA);
    nota(Re, BLANCA);
    nota(Re2, NEGRA);
    nota(Re2, BLANCA);
    nota(LaS, NEGRA);
    nota(La, BLANCA);
    nota(La, NEGRA);
    nota(La, BLANCA);
    nota(LaS, NEGRA);
    nota(LaS, BLANCA);

    // Parte 7

    nota(La, NEGRA);
    nota(LaS, NEGRA);
    nota(LaS, NEGRA);
    nota(LaS, BLANCA);
    nota(LaS, NEGRA);
    nota(Re2, NEGRA);
    nota(Re2, NEGRA);
    nota(Do, NEGRA);
    nota(Do, BLANCA);
    nota(LaS, NEGRA);
    nota(Do, NEGRA);
    nota(LaS, NEGRA);
    nota(La, NEGRA);
    nota(Fa, NEGRA);
    nota(Re, BLANCA);

    // Parte 8

    nota(La, NEGRA);
    nota(LaS, NEGRA);
    nota(LaS, NEGRA);
    nota(LaS, BLANCA);
    nota(LaS, NEGRA);
    nota(Re2, NEGRA);
    nota(Re2, NEGRA);
    nota(Do, NEGRA);
    nota(Do, NEGRA);
    nota(LaS, BLANCA);
    nota(Re2, NEGRA);
    nota(Do, NEGRA);
    nota(Do, BLANCA);
    nota(La, NEGRA);
    nota(Do, NEGRA);
    nota(LaS, NEGRA);
    nota(Re, NEGRA);
    nota(Do, BLANCA);

    // Parte 9

    nota(Fa, NEGRA);
    nota(Fa, NEGRA);
    nota(Re, NEGRA);
    nota(Re, NEGRA);
    noTone(PinBuzzer);
    delay(NEGRA);
    nota(Re, NEGRA);
    nota(Do, NEGRA);
    nota(Re, NEGRA);
    nota(Re, NEGRA);
    noTone(PinBuzzer);
    delay(NEGRA);
    nota(Fa, NEGRA);
    nota(Fa, NEGRA);
    nota(Re, NEGRA);
    nota(Re, NEGRA);
    noTone(PinBuzzer);
    delay(NEGRA);
    nota(Re, NEGRA);
    nota(Do, NEGRA);
    nota(Re, NEGRA);
    nota(Re, NEGRA);
    noTone(PinBuzzer);
    delay(NEGRA);

    // Parte 10

    nota(Fa, NEGRA);
    nota(Fa, NEGRA);
    nota(Re, NEGRA);
    nota(Re, NEGRA);
    noTone(PinBuzzer);
    delay(NEGRA);
    nota(Re, NEGRA);
    nota(Do, NEGRA);
    nota(Re, NEGRA);
    nota(Re, NEGRA);
    noTone(PinBuzzer);
    delay(NEGRA);
    nota(Fa, NEGRA);
    nota(Fa, NEGRA);
    nota(Re, NEGRA);
    nota(Re, NEGRA);
    noTone(PinBuzzer);
    delay(NEGRA);
    nota(Re, NEGRA);
    nota(Do, NEGRA);
    nota(Re, NEGRA);
    nota(Re, NEGRA);
    noTone(PinBuzzer);
    delay(NEGRA);
    nota(Fa, NEGRA);
    nota(Fa, NEGRA);
    nota(Re, NEGRA);
    nota(Re, NEGRA);
    noTone(PinBuzzer);
    delay(NEGRA);
    nota(Re, NEGRA);
    nota(Do, NEGRA);
    nota(Re, NEGRA);
    noTone(PinBuzzer);
    delay(NEGRA);
    nota(Re, BLANCA);

    // Parte 11

    nota(Re2, NEGRA);
    nota(Re2, NEGRA);
    nota(Do, BLANCA);
    nota(Re2, NEGRA);
    nota(Do, BLANCA);
    nota(Do, NEGRA);
    nota(Do, NEGRA);
    nota(LaS, NEGRA);
    nota(La, NEGRA);
    nota(LaS, NEGRA);
    nota(La, NEGRA);
    nota(Fa, BLANCA);

    // Parte 12

    nota(Re, NEGRA);
    nota(Re, NEGRA);
    nota(Do, NEGRA);
    nota(Do, NEGRA);
    nota(LaS, BLANCA);
    nota(LaS, NEGRA);
    nota(La, NEGRA);
    nota(LaS, NEGRA);
    nota(Fa, NEGRA);
    nota(LaS, BLANCA);
    nota(LaS, NEGRA);
    nota(Sol, NEGRA);
    nota(Fa, NEGRA);
    nota(LaS, NEGRA);
    nota(Re2, NEGRA);
    nota(LaS, BLANCA);
    nota(LaS, NEGRA);
    nota(LaS, BLANCA);
    nota(La, NEGRA);
    nota(Sol, NEGRA);
    nota(La, NEGRA);
    nota(LaS, BLANCA);
    nota(LaS, NEGRA);
    nota(La, NEGRA);
    nota(LaS, NEGRA);
    nota(La, NEGRA);
    nota(Fa, BLANCA);
    nota(LaS, NEGRA);
    nota(Re2, NEGRA);
    nota(Do, BLANCA);
    nota(Do, NEGRA);
    nota(Do, NEGRA);
    nota(LaS, BLANCA);
    nota(LaS, NEGRA);
    nota(La, NEGRA);
    nota(LaS, NEGRA);
    nota(La, NEGRA);
    nota(Fa, BLANCA);

    // Parte 13

    nota(LaS, NEGRA);
    nota(Re2, NEGRA);
    nota(Do, NEGRA);
    nota(Do, BLANCA);
    nota(Do, NEGRA);
    nota(Do, NEGRA);
    nota(LaS, NEGRA);
    nota(LaS, BLANCA);
    nota(LaS, NEGRA);
    nota(La, NEGRA);
    nota(LaS, NEGRA);
    nota(Fa, NEGRA);
    nota(LaS, BLANCA);

    // Parte 14

    nota(LaS, NEGRA);
    nota(Sol, NEGRA);
    nota(Fa, NEGRA);
    nota(Re2, NEGRA);
    nota(LaS, BLANCA);
    nota(LaS, NEGRA);
    nota(LaS, BLANCA);
    nota(La, NEGRA);
    nota(Sol, NEGRA);
    nota(La, NEGRA);
    nota(LaS, BLANCA);

    // Termina la cancion
    delay(TIEMPO);

  } else {
    setColor(255, 0, 0);
  }
}
