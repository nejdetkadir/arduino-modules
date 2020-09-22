#define trigger_pin 7
#define echo_pin 6
int sure, mesafe;

void setup() {
    pinMode(trigger_pin, OUTPUT);
    pinMode(echo_pin, INPUT);
    Serial.begin(9600);    
}

void loop() {
    digitalWrite(trigger_pin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(trigger_pin, LOW);

    sure = pulseIn(echo_pin, HIGH);
    mesafe = (sure/2) / 29.1;

    Serial.print("Cisme olan uzaklık : ");
    Serial.println(mesafe);
    Serial.println("-----------------");      
}
