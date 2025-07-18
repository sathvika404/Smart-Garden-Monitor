#include <DHT.h>

#define moisturePin A0
#define relayPin 7
#define waterLevelPin A1
#define buzzerPin 6
#define DHTPIN 8
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

int moistureValue = 0;
int waterLevelValue = 0;
int moistureThreshold = 500;
int validReadThreshold = 50;

void setup() {
  Serial.begin(9600);
  Serial1.begin(9600); // For Bluetooth module
  pinMode(relayPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(relayPin, HIGH); // Start with relay OFF
  digitalWrite(buzzerPin, LOW); // Start with buzzer OFF
  dht.begin();
}

void loop() {
  // Soil Moisture Reading
  moistureValue = analogRead(moisturePin);
  Serial.print("Soil Moisture Level: ");
  Serial.println(moistureValue);
  Serial1.print("Soil Moisture Level: ");
  Serial1.println(moistureValue);

  if (moistureValue > validReadThreshold && moistureValue <= 1023) {
    if (moistureValue < moistureThreshold) {
      Serial.println("Soil is wet. No watering needed.");
      Serial1.println("Soil is wet. No watering needed.");
      digitalWrite(relayPin, HIGH);
    } else {
      Serial.println("Soil is dry. Watering needed.");
      Serial1.println("Soil is dry. Watering needed.");
      digitalWrite(relayPin, LOW);
    }
  } else {
    Serial.println("Invalid moisture reading.");
    Serial1.println("Invalid moisture reading.");
  }

  // Water Level
  waterLevelValue = analogRead(waterLevelPin);
  Serial.print("Water Level: ");
  Serial.println(waterLevelValue);
  Serial1.print("Water Level: ");
  Serial1.println(waterLevelValue);

  if (waterLevelValue > 600) {
    Serial.println("Water tank is full, stop pouring.");
    Serial1.println("Water tank is full, stop pouring.");
    digitalWrite(relayPin, HIGH);
    digitalWrite(buzzerPin, LOW);
  } else {
    Serial.println("Water level is low, activate watering alert.");
    Serial1.println("Water level is low, activate watering alert.");
    digitalWrite(relayPin, LOW);
    digitalWrite(buzzerPin, HIGH);
  }

  // Temperature & Humidity
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C, Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial1.print("Temperature: ");
  Serial1.print(temperature);
  Serial1.print(" °C, Humidity: ");
  Serial1.print(humidity);
  Serial1.println(" %");

  delay(2000); // 2 sec delay
}

