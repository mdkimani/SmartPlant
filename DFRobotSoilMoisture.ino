  /*
  # Editor     : Lauren
  # Date       : 13.01.2012
  # Version    : 1.0
  # Connect the sensor to the A0(Analog 0) pin on the Arduino board
  # the sensor value description
  # 0  ~300     dry soil
  # 300~700     humid soil
  # 700~950     in water
  */
int ledState = LOW;             // ledState used to set the LED

const int ledpin = LED_BUILTIN;// the number of the LED pin
  
void setup() {
  Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
  // set the digital pin as output:
  pinMode (ledpin, OUTPUT);
}
void loop() {
  int val;
  val = analogRead(0); //connect sensor to Analog 0
  Serial.println(val); //print the value to serial port
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED on ( HIGH is the voltage level)

 
  if (300>val){
    ledState = HIGH;
  }else {
      ledState = LOW;
  }
  // set the LED with the ledState of the varialbe:
  digitalWrite(ledpin, ledState);
}
