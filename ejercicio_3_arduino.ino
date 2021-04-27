void setup()
{
  pinMode(2, INPUT);//define al pin2 como entrada
  pinMode(1, INPUT);//define al pin1 como entrada
  pinMode(3, OUTPUT);//define al pin3 como salida
  pinMode(11, OUTPUT);//define al pin11 como salida
}

void loop()
{
  if (digitalRead(2) == HIGH) {//pone como condicion que el pin2 este en alto para ejecutar lo q esta dentro del if
    if (digitalRead(1) == HIGH) {// pone como condicion que el pin1 este en alto para ejecutar las lineas dentro del if
      tone(3, 523, 1000); //si la segunda condicion es verdadera empieza a sonar la alarma
      digitalWrite(11, HIGH);//y define al pin11 como prendido
    } else {
      digitalWrite(11, LOW);//sino define al pin11 como apagado
      noTone(3);//y define que no haya sonido de alarma
    }
  
  }
  delay(10); //define una espera de 10segundos y luego se repite el programa
}
