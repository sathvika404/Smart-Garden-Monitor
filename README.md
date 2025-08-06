> 🌟 ETH Zurich Portfolio Project – Embedded Systems + IoT + Environmental Tech


🌱 Smart Garden Monitor – IoT-Based Automated Irrigation System
An affordable and intelligent garden monitoring system using Arduino, sensors, and Bluetooth.
📌 Project Overview
The Smart Garden Monitor automates garden irrigation using soil moisture, humidity, and water-level sensors. It alerts users through a buzzer and LED system, and enables real-time monitoring over Bluetooth. Built as an affordable and scalable prototype, this system optimizes water usage and supports environmental sustainability.

---

## 💡 Features

- ✅ Fully automated irrigation logic
- ✅ Real-time Bluetooth monitoring
- ✅ Buzzer & LED alerts
- ✅ Arduino-coded decision system
- ✅ Soil, humidity, water-level tracking
- ✅ User-friendly and affordable

---

🚀 Future Scope
📱 Develop mobile app (using MIT App Inventor or Flutter)

🌤️ Integrate weather API for predictive watering

📊 Store sensor data in cloud (Firebase or ThingSpeak)

🤖 Add AI/ML model for plant health prediction

🔋 Make it solar-powered for energy efficiency

---

🛠️ Tech Stack & Hardware
🔌 Arduino UNO

💧 Soil Moisture Sensor

🌡️ DHT11 Sensor (Temperature & Humidity)

💦 Water Level Sensor

🔔 Buzzer + LED

⚙️ Custom Arduino .ino logic

🔗 Bluetooth Module (HC-05)
---

## 📸 Screenshots / Circuit Diagram

- **Aurdino Mega Diagram**
- <img width="714" height="507" alt="image" src="https://github.com/user-attachments/assets/ac071563-c521-464a-a735-4650a7ebe07c" />
- **Block Diagram**
- <img width="558" height="357" alt="image" src="https://github.com/user-attachments/assets/c7dbb983-17c3-4148-93b4-d4246642a72d" />
**circuit diagram**
  <img width="402" height="420" alt="image" src="https://github.com/user-attachments/assets/f3b21277-c661-401c-a5d2-ede06f4ab06a" />
**Serial output Monitor**
<img width="751" height="325" alt="image" src="https://github.com/user-attachments/assets/2fe0d327-fcd6-4839-b521-a0cfd52741bc" />

---
Connections for the Bluetooth-Enabled Garden Monitor Circuit: 
Based on the provided code, here’s a detailed description of the connections for each component in the 
circuit. 
1. Arduino Mega 2560 
 The central microcontroller that will read sensor data and control the relay. 
2. Soil Moisture Sensor 
 VCC: Connect to the 5V pin on the Arduino. 
 GND: Connect to a GND pin on the Arduino. 
 A0: Connect to Analog pin A0 on the Arduino. 
3. Water Level Sensor 
 VCC: Connect to the 5V pin on the Arduino. 
 GND: Connect to a GND pin on the Arduino. 
 A1: Connect to Analog pin A1 on the Arduino (or use Digital pin D0 if configured for digital 
output). 
4. DHT11 Temperature and Humidity Sensor 
 VCC: Connect to the 5V pin on the Arduino. 
 GND: Connect to a GND pin on the Arduino. 
20  
 Data Pin: Connect to Digital pin 8 on the Arduino. 
5. Relay Module (for Water Pump Control) 
 VCC: Connect to the 5V pin on the Arduino. 
 GND: Connect to a GND pin on the Arduino. 
 IN (Control Pin): Connect to Digital pin 7 on the Arduino. This pin will control the relay to activate 
or deactivate the connected water pump. 
6. Buzzer 
 Positive Lead: Connect to Digital pin 6 on the Arduino. 
 Negative Lead: Connect to a GND pin on the Arduino. 
7. Bluetooth Module (e.g., HC-05) 
 VCC: Connect to the 5V pin on the Arduino. 
 GND: Connect to a GND pin on the Arduino. 
 TX (Transmit): Connect to Digital pin 10 on the Arduino (or any other available pin for software 
serial). 
 RX (Receive): Connect to Digital pin 11 on the Arduino (with a voltage divider if necessary, as the 
Arduino operates at 5V and HC-05 at 3.3V). 


---

## 📂 Folder Structure

```bash
Smart-Garden-Monitor/
│
├── ArduinoCode/
│   └── smart_garden_monitor.ino
├── Images/
│   ├── circuit_diagram.png
│   ├── prototype.jpg
├── README.md
└── LICENSE

