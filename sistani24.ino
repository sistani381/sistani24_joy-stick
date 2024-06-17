const int SW_pin=8;
const int X_pin=0;
const int Y_pin=1;
void setup() {
 pinMode(SW_pin,INPUT);
 digitalWrite(SW_pin,HIGH);
 Serial.begin(9600);// put your setup code here, to run once:

}

void loop() {
 Serial.print("switch:");
 Serial.print(digitalRead(SW_pin));
 Serial.print("|");
 Serial.print("X_axis:");
 Serial.print(analogRead(X_pin));
 Serial.print("|");
 Serial.print("Y_axis:");
 Serial.print(analogRead(Y_pin));
 Serial.println("|");
 delay(200);// put your main code here, to run repeatedly:

}
