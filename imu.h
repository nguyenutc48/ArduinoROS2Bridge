#ifdef MPU_9250
  #define MPU_ADDR 0x68
#endif

void initIMU();
double Gyro_X();
double Gyro_Y();
double Gyro_Z();
double Acc_X();
double Acc_Y();
double Acc_Z();