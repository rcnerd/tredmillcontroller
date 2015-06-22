
const int prgmkey = 52;

char ctrlKey = KEY_LEFT_CTRL;



void setup() {

  pinMode(prgmkey, INPUT);

  Keyboard.begin();


}

void loop() {

  if (digitalRead(prgmkey) == HIGH)
  {

    Keyboard.end();

  }
  else
  {
    //main code here
  }


}
