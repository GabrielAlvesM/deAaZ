#include <DFRobotDFPlayerMini.h>

#include "SoftwareSerial.h" // Inclui a biblioteca SoftwareSerial.h

//Inicia a comunicação serial nos pinos 0 (RX) e 1(TX)
SoftwareSerial mySoftwareSerial(0, 1);

// Declara o módulo DFPlayer
DFRobotDFPlayerMini myDFPlayer;

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


void setup() {
  //Comunicacao serial com o modulo
  mySoftwareSerial.begin(9600);

  // Inicializa as funções do módulo DFPlayer
  myDFPlayer.begin(mySoftwareSerial);

  //Configurações iniciais
  myDFPlayer.setTimeOut(500); //Timeout serial 500ms
  myDFPlayer.volume(30); // Volume 30 (1-31)
  myDFPlayer.EQ(0); // Equalizacao normal

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

void loop() {
  P_Value = digitalRead(P_Btn);
  B_Value = digitalRead(B_Btn);
  O_Value = digitalRead(O_Btn);

  if (P_Value == HIGH) {
    LetraP();
  } else {
    digitalWrite(P_Led, LOW);
  }
}

void LetraP() {
  digitalWrite(P_Led, HIGH);
  myDFPlayer.play(16);
  delay(1000);
  myDFPlayer.stop();
}
