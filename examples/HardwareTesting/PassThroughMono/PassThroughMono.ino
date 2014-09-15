#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include "utility/pdb.h"

// GUItool: begin automatically generated code
AudioInputAnalog         adc1;           //xy=161,80
AudioOutputAnalog        dac1;           //xy=329,47
AudioOutputPWM           pwm1;           //xy=331,125
AudioConnection          patchCord1(adc1, dac1);
AudioConnection          patchCord2(adc1, pwm1);
// GUItool: end automatically generated code

void setup() {
  // Audio connections require memory to work.  For more
  // detailed information, see the MemoryAndCpuUsage example
  AudioMemory(12);
}

void loop() {
  // Do nothing here.  The Audio flows automatically

  // When AudioInputAnalog is running, analogRead() must NOT be used.
  delay(200);
  Serial.print("PDB: SC=");
  Serial.print(PDB0_SC, HEX);
  Serial.print(", CONFIG=");
  Serial.print(PDB_CONFIG, HEX);
  Serial.print(", MOD=");
  Serial.print(PDB0_MOD);
  Serial.print(", IDLY=");
  Serial.print(PDB0_IDLY);
  Serial.print(", CH0C1=");
  Serial.print(PDB0_CH0C1);
  Serial.print(", DMA: ");
  Serial.print(dma_channel_allocated_mask, HEX);
  Serial.println();
}


