int buttonState = 0;         // переменная для хранения состояния кнопки
 
void setup() {
  // инициализируем пин, подключенный к светодиоду, как выход
  pinMode(A3, OUTPUT);     
  // инициализируем пин, подключенный к кнопке, как вход
  pinMode(3, INPUT);   
}
 
void loop(){
  // считываем значения с входа кнопки
  buttonState = digitalRead(3);
 
  // проверяем нажата ли кнопка
  // если нажата, то buttonState будет HIGH:
  if (buttonState == HIGH) {   
    // включаем светодиод   
    digitalWrite(A3, HIGH); 
  }
  else {
    // выключаем светодиод
    digitalWrite(A3, LOW);
  }
}
