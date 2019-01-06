int red = 13;
int yellow = 12;
int green = 11;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  //red
  digitalWrite(red, HIGH);
  delay(5000); 

  //red and yellow
  digitalWrite(yellow, HIGH);
  delay(2000); 

  //green
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(5000);

  //yellow
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(1000);

  
  
  
  
}



