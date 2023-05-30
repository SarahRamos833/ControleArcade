#include <Keyboard.h> //biblioteca que controla o Teclado

int horzPin = A0;  // Pino horizontal
int vertPin = A1;  // pino vertical
int PinBT = 2;  // pino botão 1
int PinBT1 = 3; //pino botão 2
int PinBT2 = 4; // pino botão 3
int PinBT3 = 5; // pino botão 4
int PinBT4 = 6;  // pino botão 5
int PinBT5 = 7; //pino botão 6
int PinBT6 = 8; // pino botão 7
int PinBT7 = 9; // pino botão 8

void setup()
{
  pinMode(PinBT, INPUT_PULLUP);//botões
  pinMode(PinBT1, INPUT_PULLUP);
  pinMode(PinBT2, INPUT_PULLUP);
  pinMode(PinBT3, INPUT_PULLUP);//botões
  pinMode(PinBT4, INPUT_PULLUP);
  pinMode(PinBT5, INPUT_PULLUP);
  pinMode(PinBT6, INPUT_PULLUP);//botões
  pinMode(PinBT7, INPUT_PULLUP);
  
  pinMode(horzPin, INPUT);  
  pinMode(vertPin, INPUT);
  Keyboard.begin(); // incia controle do teclado
  Serial.begin(9600); //inicia comunicação serial -> da pra usar para testes
}

void loop()
{
  int valorVRx = analogRead(horzPin); //valor do eixo X
  int valorVRy = analogRead(vertPin); // valor do eixo Y
  int estadoBT = digitalRead(PinBT);
  int estadoBT1 = digitalRead(PinBT1);
  int estadoBT2 = digitalRead(PinBT2);
  int estadoBT3 = digitalRead(PinBT3);
  int estadoBT4 = digitalRead(PinBT4);
  int estadoBT5 = digitalRead(PinBT5);
  int estadoBT6 = digitalRead(PinBT6);
  int estadoBT7 = digitalRead(PinBT7);

if (estadoBT == 0){  //botão 2 aperta a tecla l
     Keyboard.press ('l');
  }else{
    Keyboard.release ('l');
  }
if (estadoBT1 == 0){  //botão 2 aperta a tecla l
     Keyboard.press ('a');
  }else{
    Keyboard.release ('a');
  }
if (estadoBT2 == 0){  //botão 2 aperta a tecla l
     Keyboard.press ('b');
  }else{
    Keyboard.release ('b');
  }
 if (estadoBT3 == 0){  //botão 2 aperta a tecla l
     Keyboard.press ('c');
  }else{
    Keyboard.release ('c');
  }
  if (estadoBT4 == 0){  //botão 2 aperta a tecla l
     Keyboard.press ('d');
  }else{
    Keyboard.release ('d');
  }
  if (estadoBT5 == 0){  //botão 2 aperta a tecla l
     Keyboard.press ('e');
  }else{
    Keyboard.release ('e');
  }
  if (estadoBT6 == 0){  //botão 2 aperta a tecla l
     Keyboard.press ('f');
  }else{
    Keyboard.release ('f');
  }
  if (estadoBT7 == 0){  //botão 2 aperta a tecla l
     Keyboard.press ('g');
  }else{
    Keyboard.release ('g');
  }

  if (valorVRx  >= 1000){  //botão 2 aperta a tecla l
     Keyboard.press ('h');
  }else{
    Keyboard.release ('h');
  }
  if (valorVRx  <= 23){  //botão 2 aperta a tecla l
     Keyboard.press ('i');
  }else{
    Keyboard.release ('i');
  }
  if (valorVRy  >= 1000){  //botão 2 aperta a tecla l
     Keyboard.press ('j');
  }else{
    Keyboard.release ('j');
  }
  if (valorVRy  <= 23){  //botão 2 aperta a tecla l
     Keyboard.press ('k');
  }else{
    Keyboard.release ('k');
  }

 // Serial.println(estadoBT1);
  delay(10);  // espera esse tempinho só pros botões se estabilizarem
} 
