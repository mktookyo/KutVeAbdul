// PinOut
// Ultrasonic Sensor #1, Vcc->5V GND->GND
#define HC_TRIG 9 // Trig pin to D9
#define HC_ECHO 10 // Echo pin to D10

// Variables
float distFilt = 0; //distance filtering value 
// Setup
void setup() {
  Serial.begin(9600);
  pinMode(HC_TRIG, OUTPUT); // trig output
  pinMode(HC_ECHO, INPUT);  // echo input
}
// Function for measuring distance in cm by UltraSonic Sensor
float getDist() {
  // Impulse 10 Microseconds
  digitalWrite(HC_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(HC_TRIG, LOW);
  // Measuring time of signal treveling 
  uint32_t us = pulseIn(HC_ECHO, HIGH);
  // Calculating distance (in cm) and returning
  return (us / 58.3);
}
// Main loop ////////////////////////////////////////////////////////////
void loop() {  
  
}

