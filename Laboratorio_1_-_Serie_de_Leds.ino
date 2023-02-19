int led1 = 2;  //Se declaran variables y pines
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;

int Push;


void setup() {
  
  Serial.begin(9600); //Se inicializa el puerto serial

  pinMode (10,INPUT); //Se declara el pin 9 como entrada 
    
  pinMode (led1, OUTPUT); //Se Declaran salidas
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  pinMode (led4, OUTPUT);
  pinMode (led5, OUTPUT);
  pinMode (led6, OUTPUT);
  pinMode (led7, OUTPUT);
  pinMode (led8, OUTPUT);

  digitalWrite(led1,HIGH); //Todas las leds se Encienden
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,HIGH);

  
}

void loop() {

  Push = digitalRead(10); //Se lee el push

  
  if (Serial.available()){  //Leemos dato ingresado del Monitor Serial
    char dato = Serial.read();
    Serial.println(dato); 


  if(dato == '2'){  //Intermitencia de todas las leds cada 2 segundos
   Serial.print("Intermitencia");
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  delay(500);

  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,HIGH);
  delay(2000);

  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  delay(2000);

  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,HIGH);
  delay(2000);

  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  delay(2000);
  }
 }


  if(Push==1){
    Serial.println("Push Activado");
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  delay(500);

  digitalWrite(led1,HIGH);
  delay(500);

  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  delay(500);

  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  delay(500);

  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
  delay(500);

  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  delay(500);

  digitalWrite(led5,LOW);
  digitalWrite(led6,HIGH);
  delay(500);

  digitalWrite(led6,LOW);
  digitalWrite(led7,HIGH);
  delay(500);

  digitalWrite(led7,LOW);
  digitalWrite(led8,HIGH);
  delay(500);

  digitalWrite(led8,LOW);
  delay(500);
  }
}
