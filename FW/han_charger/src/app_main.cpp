#include <Arduino.h>
#include <TFT_eSPI.h>
#include "LittleFS.h"
#include "FS.h"
#include "lvgl.h"
#include "FT6336U.h"


TFT_eSPI tft = TFT_eSPI();

#define I2C_SDA 22
#define I2C_SCL 23
#define RST_N_PIN 21
#define INT_N_PIN 34
FT6336U ft6336u(I2C_SDA, I2C_SCL, RST_N_PIN, INT_N_PIN); 

#define FORMAT_LITTLEFS_IF_FAILED true

void setup() {
  // put your setup code here, to run once:
  pinMode(1,OUTPUT);
  lv_init();

    if(!LittleFS.begin(FORMAT_LITTLEFS_IF_FAILED)){
        Serial.println("LittleFS Mount Failed");
        return;
    }

  

}

void loop() {
  // put your main code here, to run repeatedly:
}