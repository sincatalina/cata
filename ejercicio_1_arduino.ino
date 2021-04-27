void setup() {
  pinMode(3,INPUT); //define el pin3 como entrada
  pinMode(2,OUTPUT); //define el pin2 como salida
  pinMode(1,OUTPUT); //define el pin1 como salida
}

void loop() {
  if (digitalRead(3)== HIGH){ //establece como condicion para que las siguientes lineas cumplan, que el pin3 debe estar en alto
    digitalWrite(2,HIGH); //si el pin3 esta en alto se prende el pin2
    digitalWrite(1,LOW); //si el pin3 esta en alto se apaga el pin1
  }else { //se establece una nueva condicion que solo va a funcionar si la condicion anterior no se cumple
    digitalWrite(2, LOW); //si el pin3 esta en bajo se apaga el pin2
    digitalWrite(1, HIGH); //si el pin3 esta en bajo se prende elpin2
  }
delay(10); //se produce una espera de 10segundos y se empieza de nuevo el programa
}
