/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */

#ifdef ARDUINO_ENC_COUNTER
  //below can be changed, but should be PORTD pins; 
  //otherwise additional changes in the code are required
  #define LEFT_ENC_PIN_A PD2  //pin 2
  #define LEFT_ENC_PIN_B PD3  //pin 3

  //below can be changed, but should be PORTC pins
  #define RIGHT_ENC_PIN_A PC4  //pin A4
  #define RIGHT_ENC_PIN_B PC5   //pin A5

#elif defined POLOLU_ASTAR_ROBOT_CONTROLLER

  #define LEFT_ENC_PIN_XOR 8   // D8
  #define LEFT_ENC_PIN_B   11  // D11

  #define RIGHT_ENC_PIN_XOR 7  // D7
  #define RIGHT_ENC_PIN_B   5  // D5
#endif

void initEncoder();
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();

#if defined SPARKFUN_REDBOT_ENCODER
void setDir(int i, char dir);
#endif

