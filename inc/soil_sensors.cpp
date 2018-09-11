float calc_soil_temperature(float sensor_reading) {

  float sensor_voltage;
  sensor_voltage = sensor_reading * 3.3; 
  return sensor_voltage * 41.67 - 40;
}


float calc_soil_moisture(float sensor_reading) {
  float sensor_voltage;
  float soil_moisture;
  sensor_voltage = sensor_reading * 3.3; 

  if (sensor_voltage >= 0 && sensor_voltage < 1.1){
    soil_moisture = sensor_voltage * 10 - 1; //for range of 0 to 1.1v
  }
  else if (sensor_voltage >= 1.1 && sensor_voltage < 1.3){
    soil_moisture = sensor_voltage * 25 - 17.5;  //for range of 1.1 to 1.3v
  }
  else if (sensor_voltage >= 1.3 && sensor_voltage < 1.82){
    soil_moisture = sensor_voltage * 48.08 - 47.5;  //for range of 1.3 to 1.82v
  }
  else if (sensor_voltage >= 1.82 && sensor_voltage < 2.2){
    soil_moisture = sensor_voltage * 26.32 - 7.89;  //for range of 1.82 to 2.2v
  }
  else {
    soil_moisture = sensor_voltage * 62.5  - 87.5;
  }

  return soil_moisture;
}  
