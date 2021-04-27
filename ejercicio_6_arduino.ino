void setup()
{
  pinMode(A1, INPUT);//define a la analogica1 como  entrada
  pinMode(10, OUTPUT);//define al pin10 como salida
  pinMode(8, OUTPUT);// define al pin8 como salida
  Serial.begin(9600);//inicia el puerto serial

}

void loop()
{
  if (-40 + 0.488155 * (analogRead(A1) - 20) > 35) {//se define que si la temperatura es mayor a 35º se reliza lo siguiente
    digitalWrite(10, HIGH);//se define al pin10 como prendido
    digitalWrite(8, LOW);//y se define al pin8 como apagado
  } else { //si la condicion anterior no se cumple, se hace lo de las siguientes lineas
    digitalWrite(10, LOW);//se define al pin10 como apagado
    digitalWrite(8, HIGH);//y se define al pin8 como prendido
  }
  Serial.println(-40 + 0.488155 * (analogRead(A1) - 20));
  delay(10); // define que hay una espera de 10segundos y luego se vuelve a repetir el programa
  
}
