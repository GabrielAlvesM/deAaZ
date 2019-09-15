//Trabalho teclado de brinquedo
//Gabriel Alves 26/08/19 - CODIGO CONTEM LIGAÇÕES E FUNÇÃO DOS LEDs E SENSORES, E SOM

//MP3 PLAYER
#include <DFRobotDFPlayerMini.h> // Inclui a biblioteca DFRobotDFPlayerMini.h
#include <SoftwareSerial.h>      // Inclui a biblioteca SoftwareSerial.h

//Inicia a comunicação serial nos pinos 10 (RX) e 11(TX)
SoftwareSerial mySoftwareSerial(0, 1);

// Declara o módulo DFPlayer
DFRobotDFPlayerMini myDFPlayer;

// Fixa os parâmetros iniciais
int equalizacao = 0;

//LEDs E SENSORES
int A_Led = 2;
int A_Btn = 3;
int A_Value = 0;

int B_Led = 4;
int B_Btn = 5;
int B_Value = 0;

int C_Led = 6;
int C_Btn = 7;
int C_Value = 0;

int D_Led = 8;
int D_Btn = 9;
int D_Value = 0;

int E_Led = 10;
int E_Btn = 11;
int E_Value = 0;

int F_Led = 12;
int F_Btn = 13;
int F_Value = 0;

int G_Led = 14;
int G_Btn = 15;
int G_Value = 0;

int H_Led = 16;
int H_Btn = 17;
int H_Value = 0;

int I_Led = 18;
int I_Btn = 19;
int I_Value = 0;

int J_Led = 20;
int J_Btn = 21;
int J_Value = 0;

int K_Led = 22;
int K_Btn = 23;
int K_Value = 0;

int L_Led = 24;
int L_Btn = 25;
int L_Value = 0;

int M_Led = 26;
int M_Btn = 27;
int M_Value = 0;

int N_Led = 28;
int N_Btn = 29;
int N_Value = 0;

int O_Led = 30;
int O_Btn = 31;
int O_Value = 0;

int P_Led = 32;
int P_Btn = 33;
int P_Value = 0;

int Q_Led = 34;
int Q_Btn = 35;
int Q_Value = 0;

int R_Led = 36;
int R_Btn = 37;
int R_Value = 0;

int S_Led = 38;
int S_Btn = 39;
int S_Value = 0;

int T_Led = 40;
int T_Btn = 41;
int T_Value = 0;

int U_Led = 42;
int U_Btn = 43;
int U_Value = 0;

int V_Led = 44;
int V_Btn = 45;
int V_Value = 0;

int W_Led = 46;
int W_Btn = 47;
int W_Value = 0;

int X_Led = 48;
int X_Btn = 49;
int X_Value = 0;

int Y_Led = 50;
int Y_Btn = 51;
int Y_Value = 0;

int Z_Led = 52;
int Z_Btn = 53;
int Z_Value = 0;

void setup()
{

  //Comunicacao serial com o modulo
  mySoftwareSerial.begin(9600);

  // Inicializa as funções do módulo DFPlayer
  myDFPlayer.begin(mySoftwareSerial);

  //Configurações iniciais
  myDFPlayer.setTimeOut(500); //Timeout serial 500ms
  myDFPlayer.volume(30);      // Volume 30 (1-31)
  myDFPlayer.EQ(0);           // Equalizacao normal
  // Normal, Pop, Rock, Jazz, Classic e Bass representada pelos valores 0, 1, 2, 3, 4 e 5 respectivamente.

  //LEDS E SENSORES
  pinMode(A_Led, OUTPUT);
  pinMode(A_Btn, INPUT);

  pinMode(B_Led, OUTPUT);
  pinMode(B_Btn, INPUT);

  pinMode(C_Led, OUTPUT);
  pinMode(C_Btn, INPUT);

  pinMode(D_Led, OUTPUT);
  pinMode(D_Btn, INPUT);

  pinMode(E_Led, OUTPUT);
  pinMode(E_Btn, INPUT);

  pinMode(F_Led, OUTPUT);
  pinMode(F_Btn, INPUT);

  pinMode(G_Led, OUTPUT);
  pinMode(G_Btn, INPUT);

  pinMode(H_Led, OUTPUT);
  pinMode(H_Btn, INPUT);

  pinMode(I_Led, OUTPUT);
  pinMode(I_Btn, INPUT);

  pinMode(J_Led, OUTPUT);
  pinMode(J_Btn, INPUT);

  pinMode(K_Led, OUTPUT);
  pinMode(K_Btn, INPUT);

  pinMode(L_Led, OUTPUT);
  pinMode(L_Btn, INPUT);

  pinMode(M_Led, OUTPUT);
  pinMode(M_Btn, INPUT);

  pinMode(N_Led, OUTPUT);
  pinMode(N_Btn, INPUT);

  pinMode(O_Led, OUTPUT);
  pinMode(O_Btn, INPUT);

  pinMode(P_Led, OUTPUT);
  pinMode(P_Btn, INPUT);

  pinMode(Q_Led, OUTPUT);
  pinMode(Q_Btn, INPUT);

  pinMode(S_Led, OUTPUT);
  pinMode(S_Btn, INPUT);

  pinMode(R_Led, OUTPUT);
  pinMode(R_Btn, INPUT);

  pinMode(T_Led, OUTPUT);
  pinMode(T_Btn, INPUT);

  pinMode(U_Led, OUTPUT);
  pinMode(U_Btn, INPUT);

  pinMode(U_Led, OUTPUT);
  pinMode(U_Btn, INPUT);

  pinMode(V_Led, OUTPUT);
  pinMode(V_Btn, INPUT);

  pinMode(W_Led, OUTPUT);
  pinMode(W_Btn, INPUT);

  pinMode(X_Led, OUTPUT);
  pinMode(X_Btn, INPUT);

  pinMode(Y_Led, OUTPUT);
  pinMode(Y_Btn, INPUT);

  pinMode(Z_Led, OUTPUT);
  pinMode(Z_Btn, INPUT);
}
void loop()
{
  LetraA();
  LetraB();
  LetraC();
  LetraD();
  LetraE();
  LetraF();
  LetraG();
  LetraH();
  LetraI();
  LetraJ();
  LetraK();
  LetraL();
  LetraM();
  LetraN();
  LetraO();
  LetraP();
  LetraQ();
  LetraR();
  LetraS();
  LetraT();
  LetraU();
  LetraV();
  LetraW();
  LetraX();
  LetraY();
  LetraZ();
  complete();
}

void LetraA()
{
  A_Value = digitalRead(A_Btn);

  if (A_Value == HIGH)
  {
    digitalWrite(A_Led, HIGH);
    myDFPlayer.play(1);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(A_Led, LOW);
  }
}

void LetraB()
{
  B_Value = digitalRead(B_Btn);

  if (B_Value == HIGH)
  {
    myDFPlayer.play(2);
    delay(2000);
    myDFPlayer.stop();
    digitalWrite(B_Led, HIGH);
  }
  else
  {
    digitalWrite(B_Led, LOW);
  }
}

void LetraC()
{
  C_Value = digitalRead(C_Btn);

  if (C_Value == HIGH)
  {
    digitalWrite(C_Led, HIGH);
    myDFPlayer.play(3);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(C_Led, LOW);
  }
}

void LetraD()
{
  D_Value = digitalRead(D_Btn);

  if (D_Value == HIGH)
  {
    digitalWrite(D_Led, HIGH);
    myDFPlayer.play(4);
  }
  else
  {
    digitalWrite(D_Led, LOW);
  }
}

void LetraE()
{
  E_Value = digitalRead(E_Btn);

  if (E_Value == HIGH)
  {
    digitalWrite(E_Led, HIGH);
    myDFPlayer.play(5);
  }
  else
  {
    digitalWrite(E_Led, LOW);
  }
}

void LetraF()
{
  F_Value = digitalRead(F_Btn);

  if (F_Value == HIGH)
  {
    digitalWrite(F_Led, HIGH);
    myDFPlayer.play(6);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(F_Led, LOW);
  }
}

void LetraG()
{
  G_Value = digitalRead(G_Btn);

  if (G_Value == HIGH)
  {
    digitalWrite(G_Led, HIGH);
    myDFPlayer.play(7);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(G_Led, LOW);
  }
}

void LetraH()
{
  H_Value = digitalRead(H_Btn);

  if (H_Value == HIGH)
  {
    digitalWrite(H_Led, HIGH);
    myDFPlayer.play(8);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(H_Led, LOW);
  }
}

void LetraI()
{
  I_Value = digitalRead(I_Btn);

  if (I_Value == HIGH)
  {
    digitalWrite(I_Led, HIGH);
    myDFPlayer.play(9);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(I_Led, LOW);
  }
}

void LetraJ()
{
  J_Value = digitalRead(J_Btn);

  if (J_Value == HIGH)
  {
    digitalWrite(J_Led, HIGH);
    myDFPlayer.play(10);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(J_Led, LOW);
  }
}

void LetraK()
{
  K_Value = digitalRead(K_Btn);

  if (K_Value == HIGH)
  {
    digitalWrite(K_Led, HIGH);
    myDFPlayer.play(11);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(K_Led, LOW);
  }
}

void LetraL()
{
  L_Value = digitalRead(L_Btn);

  if (L_Value == HIGH)
  {
    digitalWrite(L_Led, HIGH);
    myDFPlayer.play(12);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(L_Led, LOW);
  }
}

void LetraM()
{
  M_Value = digitalRead(M_Btn);

  if (M_Value == HIGH)
  {
    digitalWrite(M_Led, HIGH);
    myDFPlayer.play(13);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(M_Led, LOW);
  }
}

void LetraN()
{
  N_Value = digitalRead(N_Btn);

  if (N_Value == HIGH)
  {
    digitalWrite(N_Led, HIGH);
    myDFPlayer.play(14);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(N_Led, LOW);
  }
}

void LetraO()
{
  O_Value = digitalRead(O_Btn);

  if (O_Value == HIGH)
  {
    digitalWrite(O_Led, HIGH);
    myDFPlayer.play(15);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(O_Led, LOW);
  }
}

void LetraP()
{
  P_Value = digitalRead(P_Btn);

  if (P_Value == HIGH)
  {
    digitalWrite(P_Led, HIGH);
    myDFPlayer.play(16);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(P_Led, LOW);
  }
}

void LetraQ()
{
  Q_Value = digitalRead(Q_Btn);

  if (Q_Value == HIGH)
  {
    digitalWrite(Q_Led, HIGH);
    myDFPlayer.play(17);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(Q_Led, LOW);
  }
}

void LetraR()
{
  R_Value = digitalRead(R_Btn);

  if (R_Value == HIGH)
  {
    digitalWrite(R_Led, HIGH);
    myDFPlayer.play(18);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(R_Led, LOW);
  }
}

void LetraS()
{
  S_Value = digitalRead(S_Btn);

  if (S_Value == HIGH)
  {
    digitalWrite(S_Led, HIGH);
    myDFPlayer.play(19);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(S_Led, LOW);
  }
}

void LetraT()
{
  T_Value = digitalRead(T_Btn);

  if (T_Value == HIGH)
  {
    digitalWrite(T_Led, HIGH);
    myDFPlayer.play(20);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(T_Led, LOW);
  }
}

void LetraU()
{
  U_Value = digitalRead(U_Btn);

  if (U_Value == HIGH)
  {
    digitalWrite(U_Led, HIGH);
    myDFPlayer.play(21);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(U_Led, LOW);
  }
}

void LetraV()
{
  V_Value = digitalRead(V_Btn);

  if (V_Value == HIGH)
  {
    digitalWrite(V_Led, HIGH);
    myDFPlayer.play(22);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(V_Led, LOW);
  }
}

void LetraW()
{
  W_Value = digitalRead(W_Btn);

  if (W_Value == HIGH)
  {
    digitalWrite(W_Led, HIGH);
    myDFPlayer.play(23);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(W_Led, LOW);
  }
}

void LetraX()
{
  X_Value = digitalRead(X_Btn);

  if (X_Value == HIGH)
  {
    digitalWrite(X_Led, HIGH);
    myDFPlayer.play(24);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(X_Led, LOW);
  }
}

void LetraY()
{
  Y_Value = digitalRead(Y_Btn);

  if (Y_Value == HIGH)
  {
    digitalWrite(Y_Led, HIGH);
    myDFPlayer.play(25);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(Y_Led, LOW);
  }
}

void LetraZ()
{
  Z_Value = digitalRead(Z_Btn);

  if (Z_Value == HIGH)
  {
    digitalWrite(Z_Led, HIGH);
    myDFPlayer.play(26);
    delay(2000);
    myDFPlayer.stop();
  }
  else
  {
    digitalWrite(Z_Led, LOW);
  }
}

void complete()
{
  if (Z_Led == HIGH && A_Led == HIGH)
  {
    myDFPlayer.play(27); // Da play na música parabens
    delay(2000);         //Tempo de 2s
    myDFPlayer.stop();   //Pausa
  }
}
