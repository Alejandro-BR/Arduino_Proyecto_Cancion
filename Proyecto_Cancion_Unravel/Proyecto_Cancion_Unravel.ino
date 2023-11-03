/********** ********** ********** ********** ********** ********** **********
 *Programacion y moontaje: Alejandro Barrionuevo Rosado 
 *Musico: Jesus Bermejo Rosado
 *Fecha: 03-04-05-06/03/2022
 ********** ********** ********** ********** ********** ********** **********
 * Cacion:  Unravel
 * Artistas: TK from Ling tosite Sigure
 * Album:   Fantastic Magic
 * Opening 1 de Tokyo Ghoul
 * https://www.youtube.com/watch?v=7aMOurgDB-o&ab_channel=Funimation
 ********** ********** ********** ********** ********** ********** **********/
//PIN
int pinBuzzer = 6; //PIN DIGITAL PWM
int const pinBoton = 2;
int PIN_R = 9 ; //PIN DIGITAL PWM
int PIN_G = 10; //PIN DIGITAL PWM
int PIN_B = 11; //PIN DIGITAL PWM
//VARIABLES
int retardo = 200;
int t = 1500;
int EstadoBoton;
//TONOS:
float Do = 523.25; 
float DoS = 554.37; 
float Re = 587.33;
float ReS = 622.25; 
float Mi = 659.26;  
float Fa = 698.46; 
float FaS = 739.99;
float Sol = 783.99;
float SolS = 830.61; 
float La = 880;
float LaS = 932.33;
float Si = 493; 
float Re2 = 1174.66;
float FaS2 = 1479.98;
int Negra = 250; 
int Blanca = 500;

void Nota(float Nota, int duracion){  //Nota(Do, negra); EJEMPLO BUZZER
  tone(pinBuzzer, Nota, duracion);
  delay(duracion);
  noTone(pinBuzzer);
  delay(duracion); 
}

void setColor(int red, int green, int blue){ //setColor(0,0,0); EJEMPLO LED RGB//LED RGB
  analogWrite(PIN_R,red);
  analogWrite(PIN_G,green);
  analogWrite(PIN_B,blue);
}

void setup() {

  Serial.begin(9600);

  pinMode(pinBoton,INPUT);
  pinMode(PIN_R,OUTPUT);
  pinMode(PIN_G,OUTPUT);
  pinMode(PIN_B,OUTPUT);

}

void loop() {

  EstadoBoton = digitalRead(pinBoton);
  Serial.println(EstadoBoton);

  if(EstadoBoton == HIGH){

    setColor(0,255,0); 
    delay(t);
    setColor(0,0,255);
    //Comienza la cancion
  
    //PARTE 1

    Nota(LaS,Negra);
    Nota(Do,Negra);
    Nota(LaS,Negra);
    Nota(La,Negra);
    Nota(Sol,Blanca);
    Nota(Do,Negra);
    Nota(LaS,Negra);
    Nota(La,Negra);

    //PARTE 2

    Nota(Sol,Blanca);
    Nota(Sol,Negra);
    Nota(Fa,Blanca);
    Nota(ReS, Negra);
    Nota(ReS, Negra);
    Nota(Fa,Negra);
    Nota(Re,Blanca);

    //PARTE 3

    Nota(Re,Negra);
    Nota(Re,Blanca);
    Nota(Re,Negra);
    Nota(Re,Blanca);
    Nota(Re2,Negra);
    Nota(Re2,Blanca);
    Nota(LaS,Negra);
    Nota(La,Blanca);
    Nota(La,Negra);
    Nota(La,Blanca);
    Nota(LaS,Negra);
    Nota(LaS,Blanca);

    //PARTE 4

    Nota(LaS,Negra);
    Nota(Do,Negra);
    Nota(LaS,Negra);
    Nota(La,Negra);
    Nota(Sol,Blanca);
    Nota(Do,Negra);
    Nota(LaS,Negra);
    Nota(La,Negra);

    //PARTE 5

    Nota(Sol,Blanca);
    Nota(Sol,Negra);
    Nota(Fa,Blanca);
    Nota(ReS, Negra);
    Nota(ReS, Negra);
    Nota(Fa,Negra);
    Nota(Re,Blanca);

    //PARTE 6

    Nota(Re,Negra);
    Nota(Re,Blanca);
    Nota(Re,Negra);
    Nota(Re,Blanca);
    Nota(Re2,Negra);
    Nota(Re2,Blanca);
    Nota(LaS,Negra);
    Nota(La,Blanca);
    Nota(La,Negra);
    Nota(La,Blanca);
    Nota(LaS,Negra);
    Nota(LaS,Blanca);

    //PARTE 7

    Nota(La,Negra);
    Nota(LaS,Negra);
    Nota(LaS,Negra);
    Nota(LaS,Blanca);
    Nota(LaS,Negra);
    Nota(Re2,Negra);
    Nota(Re2,Negra);
    Nota(Do,Negra);
    Nota(Do,Blanca);
    Nota(LaS,Negra);
    Nota(Do,Negra);
    Nota(LaS,Negra);
    Nota(La,Negra);
    Nota(Fa,Negra);
    Nota(Re,Blanca);

    //PARTE 8

    Nota(La,Negra);
    Nota(LaS,Negra);
    Nota(LaS,Negra);
    Nota(LaS,Blanca);
    Nota(LaS,Negra);
    Nota(Re2,Negra);
    Nota(Re2,Negra);
    Nota(Do,Negra);
    Nota(Do,Negra);
    Nota(LaS,Blanca);
    Nota(Re2,Negra);
    Nota(Do,Negra);
    Nota(Do,Blanca);
    Nota(La,Negra);
    Nota(Do,Negra);
    Nota(LaS,Negra);
    Nota(Re,Negra);
    Nota(Do,Blanca);

    //PARTE 9

    Nota(Fa,Negra);
    Nota(Fa,Negra);
    Nota(Re,Negra);
    Nota(Re,Negra);
    noTone(pinBuzzer);
    delay(Negra);
    Nota(Re,Negra);
    Nota(Do,Negra);
    Nota(Re,Negra);
    Nota(Re,Negra);
    noTone(pinBuzzer);;
    delay (Negra);
    Nota(Fa,Negra);
    Nota(Fa,Negra);
    Nota(Re,Negra);
    Nota(Re,Negra);
    noTone(pinBuzzer);
    delay (Negra);
    Nota(Re,Negra);
    Nota(Do,Negra);
    Nota(Re,Negra);
    Nota(Re,Negra);
    noTone(pinBuzzer);
    delay (Negra);

    //PARTE 10

    Nota(Fa,Negra);
    Nota(Fa,Negra);
    Nota(Re,Negra);
    Nota(Re,Negra);
    noTone(pinBuzzer);
    delay(Negra);
    Nota(Re,Negra);
    Nota(Do,Negra);
    Nota(Re,Negra);
    Nota(Re,Negra);
    noTone(pinBuzzer);
    delay (Negra);
    Nota(Fa,Negra);
    Nota(Fa,Negra);
    Nota(Re,Negra);
    Nota(Re,Negra);
    noTone(pinBuzzer);
    delay (Negra);
    Nota(Re,Negra);
    Nota(Do,Negra);
    Nota(Re,Negra);
    Nota(Re,Negra);
    noTone(pinBuzzer);
    delay(Negra);
    Nota(Fa,Negra);
    Nota(Fa,Negra);
    Nota(Re,Negra);
    Nota(Re,Negra);
    noTone(pinBuzzer);
    delay (Negra);
    Nota(Re,Negra);
    Nota(Do,Negra);
    Nota(Re, Negra);
    noTone(pinBuzzer);
    delay (Negra);
    Nota(Re, Blanca);

    //PARTE 11

    Nota(Re2,Negra);
    Nota(Re2,Negra);
    Nota(Do,Blanca);
    Nota(Re2,Negra);
    Nota(Do,Blanca);
    Nota(Do,Negra);
    Nota(Do,Negra);
    Nota(LaS,Negra);
    Nota(La,Negra);
    Nota(LaS,Negra);
    Nota(La,Negra);
    Nota(Fa,Blanca);

    //PARTE 12

    Nota(Re,Negra);
    Nota(Re,Negra);
    Nota(Do,Negra);
    Nota(Do,Negra);
    Nota(LaS,Blanca);
    Nota(LaS,Negra);
    Nota(La,Negra);
    Nota(LaS,Negra);
    Nota(Fa,Negra);
    Nota(LaS,Blanca);
    Nota(LaS,Negra);
    Nota(Sol,Negra);
    Nota(Fa,Negra);
    Nota(LaS,Negra);
    Nota(Re2,Negra);
    Nota(LaS,Blanca);
    Nota(LaS,Negra);
    Nota(LaS, Blanca);
    Nota(La,Negra);
    Nota(Sol,Negra);
    Nota(La,Negra);
    Nota(LaS,Blanca);
    Nota(LaS,Negra);
    Nota(La,Negra);
    Nota(LaS,Negra);
    Nota(La,Negra);
    Nota(Fa, Blanca);
    Nota(LaS,Negra);
    Nota(Re2,Negra);
    Nota(Do, Blanca);
    Nota(Do,Negra);
    Nota(Do,Negra);
    Nota(LaS, Blanca);
    Nota(LaS, Negra);
    Nota(La, Negra);
    Nota(LaS, Negra);
    Nota(La, Negra);
    Nota(Fa, Blanca);

    //PARTE 13

    Nota(LaS, Negra);
    Nota(Re2, Negra);
    Nota(Do, Negra);
    Nota(Do, Blanca);
    Nota(Do, Negra);
    Nota(Do, Negra);
    Nota(LaS, Negra);
    Nota(LaS, Blanca);
    Nota(LaS, Negra);
    Nota(La, Negra);
    Nota(LaS, Negra);
    Nota(Fa, Negra);
    Nota(LaS,Blanca);

    //PARTE 14

    Nota(LaS, Negra);
    Nota(Sol, Negra);
    Nota(Fa, Negra);
    Nota(Re2, Negra);
    Nota(LaS, Blanca);
    Nota(LaS, Negra);
    Nota(LaS, Blanca);
    Nota(La, Negra);
    Nota(Sol, Negra);
    Nota(La, Negra);
    Nota(LaS, Blanca);

    //Termina la cancion
    delay(t);
    
  }else{
    setColor(255,0,0); 
  }

}
