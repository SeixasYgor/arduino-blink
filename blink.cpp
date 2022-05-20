int led = 13;

void setup () {
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop () {
    digitalWrite(led, HIGH);
    Serial.println("Led HIGH");
    delay(2000);

    digitalWrite(led, LOW);
    Serial.println("Led LOW");
    delay(500);
}
