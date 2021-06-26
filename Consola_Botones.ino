
// ****************************************************************************************
//                        HARDWARE
// ****************************************************************************************
const int Button1 = 2;
const int Button2 = 3;
const int Button3 = 4;
const int Button4 = 5;
const int Button5 = 6;
const int Button6 = 7;
const int Button7 = 8;
const int Button8 = 9;
const int Led1 = 10;
const int Led2 = 11;
const int Led3 = 12;
const int Led4 = 13;
const int Led5 = A0;
const int Led6 = A1;
const int Led7 = A2;
const int Led8 = A3;
const int Buzzer = A4; 
// ****************************************************************************************
//                        BANDERAS DE EVENTOS
// ****************************************************************************************
boolean ButtonsFlag = true;
boolean ButtonPressFlag = true;
boolean BlinkLEDFlag = false;
boolean BuzzerFlag = false;
// ****************************************************************************************
//                        MEMORIA RAM
// ****************************************************************************************
int ButtonA = 0;
int ButtonB = 0;
int ButtonC = 0;
int ButtonD = 0;
int ButtonE = 0;
int ButtonF = 0;
int ButtonG = 0;
int ButtonH = 0;
int Buzzers = 0;
int x = 0;

void setup() {
  //Serial.begin(9600);
  
pinMode (Button1, INPUT_PULLUP);
pinMode (Button2, INPUT_PULLUP);
pinMode (Button3, INPUT_PULLUP);
pinMode (Button4, INPUT_PULLUP);
pinMode (Button5, INPUT_PULLUP);
pinMode (Button6, INPUT_PULLUP);
pinMode (Button7, INPUT_PULLUP);
pinMode (Button8, INPUT_PULLUP);
pinMode (Led1, OUTPUT);
pinMode (Led2, OUTPUT);
pinMode (Led3, OUTPUT);
pinMode (Led4, OUTPUT);
pinMode (Led5, OUTPUT);
pinMode (Led6, OUTPUT);
pinMode (Led7, OUTPUT);
pinMode (Led8, OUTPUT);
pinMode (Buzzer, OUTPUT);
//digitalWrite(Buzzer, HIGH);
}
void loop() 
{
//Serial.println(ButtonB);
 
 
 
 if (BuzzerFlag)
      BuzzerOn();
   if (ButtonsFlag)
     Buttons();
   if (ButtonPressFlag)  
     ButtonPress();
   if (BlinkLEDFlag)
     BlinkLED();
  
  delay( 1 );  
}
void Buttons()
{
  ButtonA = (digitalRead(Button1));
  ButtonB = (digitalRead(Button2));
  ButtonC = (digitalRead(Button3));
  ButtonD = (digitalRead(Button4));
  ButtonE = (digitalRead(Button5));
  ButtonF = (digitalRead(Button6));
  ButtonG = (digitalRead(Button7));
  ButtonH = (digitalRead(Button8));  
 // BuzzerOn = (digitalRead(Buzzer));
   
}
void ButtonPress()
{
  if (ButtonA == 1)
    { 
      BuzzerFlag = true;
      BlinkLEDFlag = true;
      
      x= Led1;
    }
    if (ButtonB == 1)
    { 
      x= Led2;
      BlinkLEDFlag = true;
    }
    if (ButtonC == 1)
    { 
      x= Led3;
      BlinkLEDFlag = true;
    }
    if (ButtonD == 1)
    { 
      x= Led4;
      BlinkLEDFlag = true;
    }
    if (ButtonE == 1)
    { 
      x= Led5;
      BlinkLEDFlag = true;
    }
    if (ButtonF == 1)
    { 
      x= Led6;
      BlinkLEDFlag = true;
    }
    if (ButtonG == 1)
    { 
      x= Led7;
      BlinkLEDFlag = true;
    }
    if (ButtonH == 1)
    { 
      x= Led8;
      BlinkLEDFlag = true;
    }
}
void BlinkLED()
{
  tone (Buzzer,440,1000);
  delay(75);
  tone (Buzzer,840,1000);
  delay(75);
  tone (Buzzer,140,1000);
  delay(75);
  tone (Buzzer,1140,300);
  
  
  digitalWrite(x, HIGH);
  delay(100);
  digitalWrite(x, LOW);
  delay(100);
  digitalWrite(x, HIGH);
  delay(100);
  digitalWrite(x, LOW);
  delay(100);
  digitalWrite(x, HIGH);
  delay(100);
  digitalWrite(x, LOW);
  delay(100);
  digitalWrite(x, HIGH);
  delay(100);
  digitalWrite(x, LOW);
  delay(100);
  digitalWrite(x, HIGH);
  delay(100);
  digitalWrite(x, LOW);
  delay(100);
  digitalWrite(x, HIGH);
  delay(100);
  digitalWrite(x, LOW);
  delay(100);
  digitalWrite(x, HIGH);
  delay(100);
  digitalWrite(x, LOW);
  delay(100);
  digitalWrite(x, HIGH);
  delay(100);
  digitalWrite(x, LOW);
  delay(1000);
  BlinkLEDFlag = false;
}

void BuzzerOn()
{
  
  BuzzerFlag = false;
  
}
