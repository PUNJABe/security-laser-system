const int ledPin = 13;

const int ldrPin = A0;

const int buzzerPin = 12;
void setup() {

Serial.begin(9600);




pinMode(buzzerPin, OUTPUT);

pinMode(ledPin, OUTPUT);

pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);

if (ldrStatus >=300) {

digitalWrite(ledPin, HIGH);
delay(50);
digitalWrite(ledPin, LOW);
tone(buzzerPin,4500);
delay(100);

Serial.println("LDR is DARK, LED is ON");

}

else {

digitalWrite(ledPin, LOW);
noTone(buzzerPin);
Serial.println("---------------");

}

}