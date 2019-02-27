void setup()

{


  Serial.begin (9600);

  pinMode (2 , INPUT);

}

void loop()

{

 

  int value = analogRead(A1);
  int val = analogRead(A0);

  Serial.print("Raining Indication\n");

  Serial.println(value);

  Serial.print("Water Level value \n");

  Serial.println(val);

 
    
  
  delay(2000);

}
