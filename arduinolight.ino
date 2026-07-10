#define RED_PIN 8
#define GREEN_PIN 9
#define BUTTON_ONE_PIN 7
#define BUTTON_TWO_PIN 6
#define BUTTON_THREE_PIN 5


void setup()
{
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BUTTON_ONE_PIN, INPUT);
  pinMode(BUTTON_TWO_PIN, INPUT);
  pinMode(BUTTON_THREE_PIN, INPUT);
}

void loop()
{
  if (digitalRead(BUTTON_ONE_PIN) == HIGH || digitalRead(BUTTON_TWO_PIN) == HIGH || digitalRead(BUTTON_THREE_PIN) == HIGH) {
    digitalWrite(RED_PIN, HIGH);
    digitalWrite(GREEN_PIN, LOW);
  } else {
    digitalWrite(RED_PIN, LOW);
    digitalWrite(GREEN_PIN, HIGH);
  }
}
