#include <Arduino.h>
#include <TFT_eSPI.h>
#include "lvgl.h"

TFT_eSPI tft = TFT_eSPI();

void setup() {
  // put your setup code here, to run once:
  pinMode(1,OUTPUT);
  lv_init();
}

void loop() {
  // put your main code here, to run repeatedly:
}