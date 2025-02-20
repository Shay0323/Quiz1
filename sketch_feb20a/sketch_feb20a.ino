
const int redButtonPin = 8; //sets red button to 8 pin
const int greenButtonPin = 9; //sets green button to 9 pin
const int blueButtonPin = 10; //sets blue button to 10 pin

const int redLEDPin = 5; //sets red LED to pin 5
const int greenLEDPin = 6; //sets green LED to pin 6
const int blueLEDPin = 7; //sets blue LED to pin 7

void setup() {
  //set button pins as input
  pinMode(redButtonPin, INPUT);
  pinMode(greenButtonPin, INPUT);
  pinMode(blueButtonPin, INPUT);
  
  //set LED pins as output
  pinMode(redLEDPin, OUTPUT);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);
  
  //sets all LED to be off
  digitalWrite(redLEDPin, LOW);
  digitalWrite(greenLEDPin, LOW);
  digitalWrite(blueLEDPin, LOW);
}

void loop() {
  //reads the button states
  int redState = digitalRead(redButtonPin);
  int greenState = digitalRead(greenButtonPin);
  int blueState = digitalRead(blueButtonPin);
  
  //sets red LED on
  if (redState == HIGH) {
    digitalWrite(redLEDPin, HIGH);
    digitalWrite(greenLEDPin, LOW);
    digitalWrite(blueLEDPin, LOW);
  }

  //sets red LED off
  else if (redState == LOW) {
    digitalWrite(redLEDPin, LOW);
    digitalWrite(greenLEDPin, LOW);
    digitalWrite(blueLEDPin, LOW);
  }

  //sets green LED on
  if (greenState == HIGH) {
    digitalWrite(redLEDPin, LOW);
    digitalWrite(greenLEDPin, HIGH);
    digitalWrite(blueLEDPin, LOW);
  }

  //sets green LED off
  else if (greenState == LOW) {
    digitalWrite(redLEDPin, LOW);
    digitalWrite(greenLEDPin, LOW);
    digitalWrite(blueLEDPin, LOW);
  }
  
  //sets blue LED on
  if (blueState == HIGH) {
    digitalWrite(redLEDPin, LOW);
    digitalWrite(greenLEDPin, LOW);
    digitalWrite(blueLEDPin, HIGH);
  }
  //sets blue LED off
  else if (blueState == LOW) {
    digitalWrite(redLEDPin, LOW);
    digitalWrite(greenLEDPin, LOW);
    digitalWrite(blueLEDPin, LOW);
  }

  //sets all thr LEDs to be turned off
  else {
    digitalWrite(redLEDPin, LOW);
    digitalWrite(greenLEDPin, LOW);
    digitalWrite(blueLEDPin, LOW);
  }

}
