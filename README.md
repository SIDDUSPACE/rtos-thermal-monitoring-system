# 🚀 RTOS-Based Thermal & Humidity Monitoring System (ESP32)

<div align="center">

![ESP32](https://img.shields.io/badge/ESP32-FreeRTOS-blue)
![ESP-IDF](https://img.shields.io/badge/ESP--IDF-v6.x-green)
![Language](https://img.shields.io/badge/Language-C-orange)
![Status](https://img.shields.io/badge/Phase-Simulation%20Complete-success)
![Roadmap](https://img.shields.io/badge/Next-DHT11%20Hardware-purple)

**A simulation-first real-time environmental monitoring firmware architecture using FreeRTOS queues, semaphores, and event-driven control logic.**

</div>

---

## ✨ Project Highlights

* ⚡ **4 FreeRTOS tasks** with priority-based scheduling
* 🔄 **Queue-based sensor packet transfer**
* 🚨 **Semaphore-driven emergency event signaling**
* 🌡️ **Thermal threshold cooling logic**
* 💧 **Humidity threshold alert logic**
* 📡 **Communication heartbeat diagnostics**
* 🧩 **Scalable migration path to KY-015 (DHT11)**

---

## 🖼️ Visual System Architecture

<div align="center">
<img src="assets/diagrams/system_architecture.png" width="90%" alt="System Architecture"/>
</div>

---

## 🎞️ Live Execution Snapshots

### 🟢 System Startup & Monitoring Pipeline

<div align="center">
<img src="assets/screenshots/system_startup_and_environment_monitoring.png" width="85%" alt="Startup Output"/>
</div>

### 🌡️💧 Thermal + Humidity Alert Flow

<div align="center">
<img src="assets/screenshots/thermal_humidity_alert_monitoring_output.png" width="85%" alt="Thermal Humidity Output"/>
</div>

### ❄️ Threshold-Based Cooling Response

<div align="center">
<img src="assets/screenshots/cooling_action_threshold_response.png" width="85%" alt="Cooling Response"/>
</div>

---

## 📸 What the Output Proves

### 🌡️ Thermal Safety Logic

* **Temp > 30°C** → Cooling action
* **Temp ≤ 30°C** → Normal state

### 💧 Humidity Monitoring

* **Humidity > 70%** → Alert condition
* **Humidity ≤ 70%** → Normal humidity

### 🚨 Emergency Event

* Simulated every **5 seconds**
* Signals control task through **binary semaphore**
* Triggers **emergency check path**

---

## 🛠️ Tech Stack

```text
ESP32 + ESP-IDF + FreeRTOS + C + Queue + Semaphore + Event-driven design
```

---

## 🎯 Outcome of Project

This project replicates the same RTOS architecture used in:

* 🏭 Industrial environmental panels
* 🔋 Battery thermal safety systems
* 🖥️ Server room HVAC monitoring
* 🌐 IoT sensing nodes
* 🚗 Automotive thermal control subsystems

The visible output may look simple, but the **architecture demonstrates production-grade RTOS design principles**.

---

## 👨‍💻 Author

**Siddarth S**
Embedded Systems • RTOS • ESP32 • Firmware Development
