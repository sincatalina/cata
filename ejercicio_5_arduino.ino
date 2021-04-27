int distancia = 0;//define una variable

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  pinMode(2, OUTPUT); //define al pin2 como salida
  pinMode(3, OUTPUT);//define al pin3 como salida
}

void loop()
{
  distancia = 0.01723 * readUltrasonicDistance(1, 1); //le da un valor a la variable distancia,vale una constante por el valor que devuelve
  if (distancia < 150) {//condicion que dice que si la distancia es mayor a 150metros
    digitalWrite(2, HIGH);//el pin2 se prende
    tone(3, 523, 1000); //haciendo sonar el tone 60 (C5 = 523 Hz)
  } else {//define que si las condiciones anteriores no se cumples, se deben ejecutar las siguientes lineas
    digitalWrite(2, LOW);//pin2 apagado
    noTone(3);//y no sonara el tone
  }
  delay(10); //define una espera de 10segundos y luego se vuelve a realizar el programa 
}
