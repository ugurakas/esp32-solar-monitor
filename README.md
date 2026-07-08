# ESP32 Solar Monitor

<p align="center">
  <img src="ESP32-based solar energy monitoring system with custom PCB, GSM connectivity, MQTT, and cloud integration..png" width="850">
</p>

An open-source ESP32-based solar energy monitoring system designed for remote photovoltaic installations. The project includes custom PCB design, embedded firmware, GSM connectivity, and cloud-ready telemetry.

---

## Overview

ESP32 Solar Monitor is a hardware and software platform for monitoring solar panel systems in remote locations where Wi-Fi or Ethernet is unavailable.

The device collects electrical measurements from the solar system and transmits them over a GSM network to a cloud platform for real-time monitoring and data logging.

---

## Features

- ESP32-C3 based embedded system
- Custom 2-layer PCB design
- GSM communication (A7670C)
- Remote telemetry
- Solar panel voltage monitoring
- Battery voltage monitoring
- Current measurement
- MQTT communication
- OTA firmware update (planned)
- Low power operation
- Industrial-ready hardware architecture

---

## Hardware

### Main Components

| Component | Description |
|-----------|-------------|
| ESP32-C3 | Main Microcontroller |
| A7670C | LTE Cat-1 GSM Module |
| Buck Converter | Power Supply |
| Voltage Divider | Voltage Measurement |
| Current Sensor | Current Measurement |
| SIM Card | Cellular Connectivity |

---

## PCB Design

This repository contains the complete hardware design files including:

- Schematic
- PCB Layout
- Gerber Files
- Bill of Materials (BOM)
- 3D PCB Model

### PCB Preview

> PCB image available in the `images/` directory.

---

## Repository Structure

```text
esp32-solar-monitor/
│
├── firmware/
│
├── hardware/
│   ├── schematic/
│   ├── pcb/
│   ├── gerber/
│   ├── bom/
│   └── 3d/
│
├── docs/
│
├── images/
│
└── README.md
```

---

## Firmware

The firmware is developed using the ESP-IDF framework.

Current development status:

- [x] Project initialization
- [ ] Wi-Fi Manager
- [ ] GSM Driver
- [ ] MQTT Client
- [ ] Sensor Driver
- [ ] Cloud Communication
- [ ] OTA Update
- [ ] Configuration Manager

---

## Applications

- Solar Energy Monitoring
- Off-grid Systems
- Remote IoT Monitoring
- Agricultural Solar Systems
- Industrial Power Monitoring

---

## Roadmap

- [x] PCB Design
- [ ] Prototype Assembly
- [ ] Hardware Testing
- [ ] Sensor Integration
- [ ] GSM Communication
- [ ] Cloud Dashboard
- [ ] Mobile Application
- [ ] Production Version

---

## License

This project is released under the MIT License.
