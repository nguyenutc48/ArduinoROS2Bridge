#ifdef MPU_9250
  #include <Wire.h>


  void initIMU(){
    Wire.begin();
    Wire.setClock(400000UL); // Set I2C frequency to 400kHz
    Wire.beginTransmission(mpu_addr);
    Wire.write(0x6B);
    Wire.write(0); // wake up the mpu6050
    Wire.endTransmission(true);
  }

  double Gyro_X()
  {
    Wire.beginTransmission(mpu_addr);
    Wire.write(0x43);
    Wire.endTransmission(false);
    Wire.requestFrom(mpu_addr,2);
    double GyX=Wire.read()<<8|Wire.read();
    Wire.endTransmission(true);
    return GyX;
  }

  double Gyro_Y()
  {
    Wire.beginTransmission(mpu_addr);
    Wire.write(0x44);
    Wire.endTransmission(false);
    Wire.requestFrom(mpu_addr,2);
    double GyX=Wire.read()<<8|Wire.read();
    Wire.endTransmission(true);
    return GyX;
  }

  double Gyro_Z()
  {
    Wire.beginTransmission(mpu_addr);
    Wire.write(0x45);
    Wire.endTransmission(false);
    Wire.requestFrom(mpu_addr,2);
    double GyX=Wire.read()<<8|Wire.read();
    Wire.endTransmission(true);
    return GyX;
  }

  double Acc_X()
  {
    Wire.beginTransmission(mpu_addr);
    Wire.write(0x3B);
    Wire.endTransmission(false);
    Wire.requestFrom(mpu_addr,2);
    double AccY=Wire.read()<<8|Wire.read();
    Wire.endTransmission(true);
    return AccY;  
  }

  double Acc_Y()
  {
    Wire.beginTransmission(mpu_addr);
    Wire.write(0x3D);
    Wire.endTransmission(false);
    Wire.requestFrom(mpu_addr,2);
    double AccY=Wire.read()<<8|Wire.read();
    Wire.endTransmission(true);
    return AccY;  
  }

  double Acc_Z()
  {
    Wire.beginTransmission(mpu_addr);
    Wire.write(0x3F);
    Wire.endTransmission(false);
    Wire.requestFrom(mpu_addr,2);
    double AccZ=Wire.read()<<8|Wire.read();
    Wire.endTransmission(true);
    return AccZ;  
  }

#endif

