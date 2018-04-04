

int fsrPin = 0; // the FSR and 10K pulldown are connected to a0
int fsrReading; // the analog reading from the FSR resistor divider
int sendPin = 1;


void setup(void) {
  // We'll send debugging information via the Serial monitor
  Serial.begin(9600);
  pinMode(sendPin, OUTPUT);

}
void loop(void) {
  
  fsrReading = analogRead(fsrPin);
  digitalWrite(sendPin, char(fsrReading));   // send power to TX pin
 Serial.write(fsrReading);
 
if (fsrReading > 0) {
Serial.write(fsrReading);
  Serial.print("/n Analog reading = ");
  Serial.print(fsrReading); // the raw analog reading
  }

delay (205);


}




