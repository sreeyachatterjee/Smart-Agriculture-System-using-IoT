// smart_agriculture.ino
#include <DHT.h>
#include <LiquidCrystal.h>

#define DHTPIN 2           // DHT sensor connected to digital pin 2
#define DHTTYPE DHT11      // DHT 11 sensor type
#define SOIL_MOISTURE_PIN A0
#define WATER_PUMP_PIN 8

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(7, 8, 9, 10, 11, 12); // RS, E, D4, D5, D6, D7

void setup() {
    Serial.begin(9600);
    dht.begin();
    lcd.begin(16, 2);
    pinMode(SOIL_MOISTURE_PIN, INPUT);
    pinMode(WATER_PUMP_PIN, OUTPUT);

    lcd.setCursor(0, 0);
    lcd.print("Smart Agriculture");
    delay(2000);
}

void loop() {
    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();
    int soilMoisture = analogRead(SOIL_MOISTURE_PIN);

    // Display data on LCD
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(temperature);
    lcd.print("C");

    lcd.setCursor(0, 1);
    lcd.print("Humidity: ");
    lcd.print(humidity);
    lcd.print("%");
    
    delay(2000);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Soil: ");
    lcd.print(soilMoisture);

    if (soilMoisture < 500) {
        lcd.setCursor(0, 1);
        lcd.print("Watering...");
        digitalWrite(WATER_PUMP_PIN, HIGH);
    } else {
        lcd.setCursor(0, 1);
        lcd.print("Soil OK");
        digitalWrite(WATER_PUMP_PIN, LOW);
    }

    // Print data to serial monitor
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println("°C");
    
    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println("%");
    
    Serial.print("Soil Moisture: ");
    Serial.println(soilMoisture);

    delay(5000); // Update every 5 seconds
}
