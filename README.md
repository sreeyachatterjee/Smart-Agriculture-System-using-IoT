# 🌾 Smart Agriculture System – Arduino-based IoT Project

## 📌 Description
This project implements a **Smart Agriculture System** using an **Arduino microcontroller**. It monitors environmental conditions such as **temperature**, **humidity**, and **soil moisture**. The system automatically waters the plants when soil moisture is low and displays real-time data on an **LCD display**.

---

## 🚀 Features
✅ Monitors temperature and humidity using a **DHT11** sensor  
✅ Reads soil moisture levels using an **analog sensor**  
✅ Displays real-time data on a **16x2 LCD**  
✅ Automatically controls a **water pump** based on soil moisture levels  

---

## 🛠️ Technologies Used
- **Arduino** – Microcontroller  
- **DHT11** – Temperature and humidity sensor  
- **Analog Soil Moisture Sensor**  
- **16x2 LCD** – For data display  

---

## 📂 Project Structure
smart-agriculture-system/ │── smart_agriculture.ino # ESP32 sketch │── README.md # Project documentation │── circuit_diagram.png # Wiring diagram


---

## 🏗️ Circuit Diagram  
| Component | Arduino Pin | Description |
|-----------|-------------|-------------|
| DHT11 | Digital Pin 2 | Temperature & Humidity Sensor |
| Soil Moisture Sensor | Analog Pin A0 | Analog Input |
| Water Pump | Digital Pin 8 | Digital Output |
| LCD (16x2) | Pins 7, 8, 9, 10, 11, 12 | Display Data |

---

## 🚀 Setup Instructions
### **1. Install Arduino IDE**
- Download and install Arduino IDE from: [https://www.arduino.cc](https://www.arduino.cc)  

---

### **2. Install Required Libraries**
Install the following libraries from Arduino Library Manager:  
- `DHT sensor library` by Adafruit  
- `Adafruit Unified Sensor`  
- `LiquidCrystal`  

---

### **3. Upload Code to Arduino**
1. Connect the Arduino via USB  
2. Select **Board** → ESP32
3. Upload the sketch (`smart_agriculture.ino`)  

---
