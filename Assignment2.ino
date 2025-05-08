const int buttonPin = 4;
const int ledPin = 5;
int buttonState = 0;

void setup() {
  Serial.begin(115200);  
  pinMode(buttonPin, INPUT_PULLUP); // 내부 풀업 사용
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);  // 누르면 0, 떼면 1
  if (buttonState == LOW) {     // 버튼 누를 때
    digitalWrite(ledPin, HIGH); // LED 켜기
  } else {
    digitalWrite(ledPin, LOW);  // LED 끄기
  }
}
