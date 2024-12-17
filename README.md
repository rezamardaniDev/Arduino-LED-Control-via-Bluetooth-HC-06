# **Arduino LED Control via Bluetooth (HC-06)**  

Control an LED wirelessly using the **HC-06 Bluetooth module** and **Arduino** board with a mobile app.  

---

## 📜 **Project Description**  

This project allows you to control an LED connected to pin **13** of an Arduino board wirelessly using the **HC-06 Bluetooth module**. Commands to turn the LED on and off are sent by sending the characters `1` and `0` via Bluetooth from a mobile app.  

---

## 🚀 **Features**  

- Wireless LED control via Bluetooth  
- Utilizes the **HC-06** Bluetooth module for communication  
- Displays received data on the **Arduino Serial Monitor**  

---

## 🔧 **Required Components**  

| **Component**            | **Quantity** |  
|--------------------------|--------------|  
| Arduino Board (Uno/Leonardo) | 1            |  
| HC-06 Bluetooth Module   | 1            |  
| LED                      | 1            |  
| Breadboard               | 1            |  

---

## 📦 **Installation**  

1. **Wiring**  
   - Connect the **HC-06** module to the **Arduino** as follows:  
     - **HC-06 TX** → **Arduino Pin 10** (RX)  
     - **HC-06 RX** → **Arduino Pin 9** (TX)  
     - **HC-06 VCC** → **Arduino 5V**  
     - **HC-06 GND** → **Arduino GND**  
   - Connect the **LED** to Pin 13 of the Arduino and the other leg to **GND**.

2. **Upload the Code**  
   - Upload the provided Arduino code to your board using the **Arduino IDE**.

3. **Bluetooth Pairing**  
   - Pair your mobile device with the **HC-06** Bluetooth module using the default password **"1234"**.

4. **Mobile App**  
   - Use any Bluetooth terminal app (e.g., **Bluetooth Terminal** on Android) to send `1` to turn the LED ON and `0` to turn the LED OFF.
