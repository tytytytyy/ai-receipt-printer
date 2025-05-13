# 🧾 AI Receipt

Every time you ask ChatGPT a question, someone somewhere pays—with mined cobalt, with clean water, with invisible labor.

This project turns those hidden costs into something tangible: a **receipt printed on thermal paper**, using an **ESP32 and a Bluetooth thermal printer**. Each receipt logs the footprint of a single AI prompt—grams of CO₂, liters of water, and seconds of invisible work. It looks like a mundane supermarket ticket, but it exposes the unseen cost of machine intelligence.

## 🌍 Why This Matters

Each AI query demands more energy, more raw materials, and more water. While humanity struggles to stay within ecological limits, AI accelerates in scale, consuming energy on par with entire nations. The infrastructure is massive and resource-intensive, yet mostly hidden behind polished interfaces.

> AI is not immaterial.  
> It is extraction, labor, and planetary cost—disguised as magic.

This project makes that visible again, one receipt at a time.

---

## 🛠️ Hardware & Setup

- **ESP32** development board (e.g., ESP32 DevKitC)
- **Bluetooth thermal printer** (e.g., Goojprt PT-210 or compatible)
- Optional: USB power bank for portability

---

## 💻 Software & Dependencies

- PlatformIO or Arduino IDE
- BitBank’s [Thermal_Printer](https://github.com/bitbank2/Thermal_Printer) library for BLE thermal printer communication

> 📚 Bitbank2. *Thermal_Printer*. GitHub, https://github.com/bitbank2/Thermal_Printer

---

## 📄 Example Output

```text
════════════════════════════════
           ☁️ AI RECEIPT ☁️
════════════════════════════════

 DATE:        2025-04-28
 TIME:        12:03 PM
----------------------------------
 TRANSACTION: 1x ChatGPT Request
----------------------------------
 RESOURCE CONSUMPTION
----------------------------------
 ENERGY USED:         3 Wh
 CO₂ EMITTED:         2.9 g
 WATER USED:          500 ml
 SERVER TIME:         0.1 s
 LAND USE:            ~0.6 m²
----------------------------------
 INVISIBLE LABOR
----------------------------------
 • Rare Earth Miners (DR Congo)
 • Assembly Workers (Foxconn)
 • Data Labelers (Global South)
 • Content Moderators (Trauma)
 • Scraped Training Data (Unpaid)
 • Gig Developers (Precarity)
----------------------------------
 ECONOMIC PRICE:       $0.00
 TRUE COST:   Externalized & Obscured
----------------------------------

  “This output was built on land,
   labor, and lives you were never
   meant to see.”
════════════════════════════════
