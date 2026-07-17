#define RED_PIN 8
#define GREEN_PIN 9
#define BUTTON_ONE_PIN 7
#define BUTTON_TWO_PIN 6
#define BUTTON_THREE_PIN 5


// Define the threshold (409 is approximately 2V)
// Any noise at 0.4V (ADC value ~82) will be ignored because 82 < 409.
const int VOLTAGE_THRESHOLD = 409;

void setup()
{
  Serial.begin(9600);

  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BUTTON_ONE_PIN, INPUT);
  pinMode(BUTTON_TWO_PIN, INPUT);
  pinMode(BUTTON_THREE_PIN, INPUT);
}

void loop()
{

  
  // Read the analog values (returns a value from 0 to 1023)
  int valOne = analogRead(BUTTON_ONE_PIN);
  int valTwo = analogRead(BUTTON_TWO_PIN);
  int valThree = analogRead(BUTTON_THREE_PIN);

  Serial.print("A0: "); Serial.print(valOne);
  Serial.print(" | A1: "); Serial.print(valTwo);
  Serial.print(" | A2: "); Serial.println(valThree);
  
  // Check if ANY of the pins have surpassed your custom threshold
  if (valOne >= VOLTAGE_THRESHOLD || valTwo >= VOLTAGE_THRESHOLD || valThree >= VOLTAGE_THRESHOLD) {
    digitalWrite(RED_PIN, HIGH);
    digitalWrite(GREEN_PIN, LOW);
  } else {
    digitalWrite(RED_PIN, LOW);
    digitalWrite(GREEN_PIN, HIGH);
  }

  delay(1000);
}
