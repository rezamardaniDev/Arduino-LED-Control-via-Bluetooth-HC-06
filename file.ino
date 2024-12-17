#include <SoftwareSerial.h>

SoftwareSerial BTSerial(9, 10);
char Incoming_value = 0;

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
  pinMode(13, OUTPUT);
  Serial.println("Bluetooth LED Control Started!");
}

void loop() {
  if (BTSerial.available() > 0) {
    Incoming_value = BTSerial.read();
    Serial.print("Received: "); 
    Serial.println(Incoming_value);

    if (Incoming_value == '1') {
      digitalWrite(13, HIGH);
      Serial.println("LED ON");
    } else if (Incoming_value == '0') {
      digitalWrite(13, LOW);
      Serial.println("LED OFF");
    } else {
      Serial.println("Invalid input! Send '1' or '0'.");
    }
  }
}
