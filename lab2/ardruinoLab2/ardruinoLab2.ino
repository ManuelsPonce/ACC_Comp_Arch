
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  //COSC2325 in morse code
  dash(); dot(); dash(); dot();         // "C"
  dash(); dash(); dash();                //"O"
  dot(); dot(); dot();                   //"S"
  dash(); dot(); dash(); dot();         // "C"
  dot(); dot(); dash(); dash(); dash();  //"2"
  dot(); dot(); dot(); dash(); dash();  // "3"
  dot(); dot(); dash(); dash(); dash();  //"2"
  dot(); dot(); dot(); dot(); dot();    // "5"
  delay(3000);
}

void dot()
{
  digitalWrite(pin, HIGH);
  delay(800);
  digitalWrite(pin, LOW);
  delay(800);
}

void dash()
{
  digitalWrite(pin, HIGH);
  delay(1000);
  digitalWrite(pin, LOW);
  delay(1000);
}
