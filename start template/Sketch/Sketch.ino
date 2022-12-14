
// Source adapted from https://github.com/wd5gnr/VidorFPGA
// FH-Salburg Vidmar Philipp

#include <wiring_private.h>
#include "jtag.h"
#include "defines.h"

/* Die setup() wird ein mal zum starten ausgeführt */
void setup()
{
  setup_fpga();       // Spielt den Code von Quantus auf den FPGA-Chip
  pinMode(7, OUTPUT); // Setzt Pin 7 auf Output
}

/* Die loop() startet nach der setup() und wiederholt sich wieder */
void loop()
{
  /* Hier wird eine Clock auf Pin 7 simuliert */
  digitalWrite(7, !digitalRead(7)); // Toggelt Pin 7
  delay(1000);                      // Warte 1 Sekunde
} 

