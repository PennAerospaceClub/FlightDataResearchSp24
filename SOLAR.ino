void readSolar {
  float sensorValues[4] = {analogRead(A1),analogRead(A2),analogRead(A3),analogRead(A4)};
  float voltage[4] = {sensorValues[0]*5.0/1023,sensorValues[1]*5.0/1023,sensorValues[2]*5.0/1023,sensorValues[3]*5.0/1023};
  
  float sum;
  for (int i = 0; i < 4; i += 1) {
    sum += voltage[i];
  }

  solarAverage = sum / 4;

  delay(10);
}