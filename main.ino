//www.elegoo.com
//2016.12.8

int blue = 3;
int green = 5;
int red = 6;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
}

int delayTime = 500;

void loop() {
  analogWrite(blue, 255);
  analogWrite(red, 0);
  delay(delayTime);
  analogWrite(blue, 0);
  analogWrite(red, 255);
  delay(delayTime);
}
