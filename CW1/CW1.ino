int ledDelay=3000;
int redPin=10;
int greenPin=8;
int yellowPin=9;

void setup()
{
    pinMode(redPin,OUTPUT);
    pinMode(yellowPin,OUTPUT);
    pinMode(greenPin,OUTPUT);
}

void loop()
{
    //state 1
    digitalWrite(redPin,HIGH);
    delay(ledDelay);
    digitalWrite(redPin,LOW);

    //state 2
    digitalWrite(yellowPin,HIGH);
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
}

