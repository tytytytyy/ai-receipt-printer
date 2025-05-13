//
// AI Receipt Thermal Printer Demo
// Based on BitBank Thermal Printer Library
//

#include <Thermal_Printer.h>

static uint8_t ucBuf[48 * 384];
#define WIDTH 384
#define HEIGHT 240

void setup() {
  Serial.begin(115200);
  while (!Serial);

  Serial.println("Scanning for BLE printer...");
  if (tpScan()) {
    Serial.println("Found a printer! Connecting...");
    if (tpConnect()) {
      Serial.println("Connected! Printing AI Receipt...");

      tpSetFont(1, 0, 0, 0, 0); // Standard font, no styling

      tpPrint((char *)"════════════════════════════════\r");
      tpPrint((char *)"            ☁️ AI RECEIPT ☁️          \r");
      tpPrint((char *)"════════════════════════════════\r");
      tpPrint((char *)"\r");
      tpPrint((char *)" DATE:        2025-04-28\r");
      tpPrint((char *)" TIME:        12:03 PM\r");
      tpPrint((char *)"----------------------------------\r");
      tpPrint((char *)" TRANSACTION: 1x ChatGPT Request\r");
      tpPrint((char *)"----------------------------------\r");
      tpPrint((char *)" RESOURCE CONSUMPTION\r");
      tpPrint((char *)"----------------------------------\r");
      tpPrint((char *)" ENERGY USED:         3 Wh\r");
      tpPrint((char *)" CO₂ EMITTED:         2.9 g\r");
      tpPrint((char *)" WATER USED:          500 ml\r");
      tpPrint((char *)" SERVER TIME:         0.1 s\r");
      tpPrint((char *)" LAND USE:            ~0.6 m²\r");
      tpPrint((char *)"----------------------------------\r");
      tpPrint((char *)" INVISIBLE LABOR\r");
      tpPrint((char *)"----------------------------------\r");
      tpPrint((char *)" • Rare Earth Miners (DR Congo)\r");
      tpPrint((char *)" • Assembly Workers (Foxconn)\r");
      tpPrint((char *)" • Data Labelers (Global South)\r");
      tpPrint((char *)" • Content Moderators (Trauma)\r");
      tpPrint((char *)" • Scraped Training Data\r");
      tpPrint((char *)" • Gig Developers (Precarity)\r");
      tpPrint((char *)"----------------------------------\r");
      tpPrint((char *)" ECONOMIC PRICE:       $0.00\r");
      tpPrint((char *)" TRUE COST:  Externalized & Hidden\r");
      tpPrint((char *)"----------------------------------\r");
      tpPrint((char *)"\r");
      tpPrint((char *)"  \"This output was built on land,\r");
      tpPrint((char *)"   labor, and lives you were never\r");
      tpPrint((char *)"   meant to see.\"\r");
      tpPrint((char *)"\r");
      tpPrint((char *)"════════════════════════════════\r");

      Serial.println("Done printing. Disconnecting...");
      tpDisconnect();
      Serial.println("Finished.");
      while (1) {};
    }
  } else {
    Serial.println("No printer found :(");
  }
}

void loop() {
  // Not used
}
