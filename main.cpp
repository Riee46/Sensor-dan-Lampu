#define trigPin 6
#define echoPin 7
#define ledPin 13

// Function untuk membaca jarak dari sensor
float bacaJarak() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  long durasi = pulseIn(echoPin, HIGH); // durasi pantulan
  float jarak = durasi * 0.034 / 2; // konversi ke CM
  return jarak;
}

// Setup Program
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  float jarakSekarang = bacaJarak(); // panggil function

  Serial.print("Jarak: ");
  Serial.print(jarakSekarang);
  Serial.println(" cm");

  if (jarakSekarang < 20) {
    digitalWrite(ledPin, HIGH); // Nyalakan LED
  } else {
    digitalWrite(ledPin, LOW); // Matikan LED
  }
  delay(500); // jeda setengah detik
}
