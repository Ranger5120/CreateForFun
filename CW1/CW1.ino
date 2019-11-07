int ledDelay=3000;
int redPin=10;
int greenPin=8;
int yellowPin=9;
int greenPin2=7;
int redPin2=4;

void setup()
{
    pinMode(redPin,OUTPUT);
    pinMode(redPin2,OUTPUT);
    pinMode(yellowPin,OUTPUT);
    pinMode(greenPin,OUTPUT);
    pinMode(greenPin2,OUTPUT);
}

void loop()
{
    //state 1
    digitalWrite(redPin,HIGH);
    digitalWrite(greenPin2,HIGH);
    delay(ledDelay);
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin2,LOW);

    //state 2
    digitalWrite(yellowPin,HIGH);
    digitalWrite(redPin2,HIGH);
    delay(1000);
    digitalWrite(yellowPin,LOW);

    //state 3
    digitalWrite(greenPin,HIGH);
    delay(ledDelay);
    digitalWrite(greenPin,LOW);

    //state 4
    digitalWrite(yellowPin,HIGH);
    delay(1000);
    digitalWrite(yellowPin,LOW);
    digitalWrite(redPin2,LOW);
}
