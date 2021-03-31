long num = 0;
long startTime = 0;
long endTime = 0;
int duration = 0;
String buffer;

void setup(){
  Serial.begin(9600);
}

void loop(){
  startTime = millis();
  benchmark();
  endTime = millis();
  duration = endTime - startTime;
  Serial.print(startTime);
  Serial.print(", ");
  Serial.print(endTime);
  Serial.print(", ");
  Serial.println(duration); 
}

void benchmark() {
  num = 0;
  for(num = 0; num < 1000000; num++);
}
