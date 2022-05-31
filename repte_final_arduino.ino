int led_1 = 10;
int led_2 = 9;
int led_3 = 8;
int led_4 = 11;

char valor;

void setup() {

pinMode(led_1,OUTPUT);
pinMode(led_2,OUTPUT);
pinMode(led_3,OUTPUT);
pinMode(led_4,OUTPUT);
Serial.begin(9600);
}

void loop()
{  
  if(Serial.available())
  {
    valor = Serial.read();

    if (valor =='A')
    { 
      digitalWrite(led_1,HIGH);
    }
    if (valor=='B')
     {
      digitalWrite(led_1,LOW);
     }
     if (valor=='C')
     { 
      digitalWrite(led_2,HIGH);
     }
     if (valor== 'D')
     {
      digitalWrite(led_2,LOW);
     }
     if (valor =='E')
    { 
      digitalWrite(led_3,HIGH);
    }
    if (valor=='F')
     {
      digitalWrite(led_3,LOW);
     }
     if (valor=='G')
     { 
      digitalWrite(led_4,HIGH);
     }
     if (valor== 'H')
     {
      digitalWrite(led_4,LOW);
     }
  }
}
