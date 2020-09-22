#define rightMotSp 9
#define leftMotSp 3
#define rightMotFront 7
#define rightMotBack 6
#define leftMotFront 5
#define leftMotBack 4

void setup() {
    pinMode(rightMotSp, OUTPUT);
    pinMode(leftMotSp, OUTPUT);
    pinMode(rightMotFront, OUTPUT);
    pinMode(rightMotBack, OUTPUT);
    pinMode(leftMotFront, OUTPUT);
    pinMode(leftMotBack, OUTPUT);    
}

void loop() {
    goOn();
    delay(2000);
    goBack();
    delay(2000);  
} 

void goOn() {
    analogWrite(rightMotSp, 80);
    digitalWrite(rightMotFront, 0);
    digitalWrite(rightMotBack, 1);

    analogWrite(leftMotSp, 80);
    digitalWrite(leftMotFront, 0);
    digitalWrite(leftMotBack, 1);
}

void goBack() {
    analogWrite(rightMotSp, 80);
    digitalWrite(rightMotFront, 1);
    digitalWrite(rightMotBack, 0);

    analogWrite(leftMotSp, 80);
    digitalWrite(leftMotFront, 1);
    digitalWrite(leftMotBack, 0);
}
