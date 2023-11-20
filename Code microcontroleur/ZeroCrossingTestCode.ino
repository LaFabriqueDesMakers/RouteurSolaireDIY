/*
  ZeroCrossing detector
 Reads a digital input on pin 2, prints the result to the serial monitor
 If output result equal 1: zero crossing area 
 */

// digital pin 2 get the information
int zeroCrossingPin = 2;
int compteur = 0;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the zeroCrossingPin an input:
  pinMode(zeroCrossingPin, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int zeroCrossingValue = digitalRead(zeroCrossingPin);
  // print out the state of the button:
  
 // if(zeroCrossingValue == 1){
//    compteur++;
 // Serial.println(compteur);
 // }
 Serial.println(zeroCrossingValue);
  delay(1);        // delay in between reads for stability
}



