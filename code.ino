	
#include <Arduino_GFX_Library.h>
#define TFT_SCK    18
#define TFT_MOSI   23
#define TFT_MISO   19
#define TFT_CS     22
#define TFT_DC     21
#define TFT_RESET  17

void setup() {
  Arduino_ESP32SPI bus = Arduino_ESP32SPI(TFT_DC, TFT_CS, TFT_SCK, TFT_MOSI, TFT_MISO);
  Arduino_ILI9341 display = Arduino_ILI9341(&bus, TFT_RESET);
 a
  display.begin();
  display.fillScreen(WHITE);
  display.setCursor(20, 20);
  display.setTextSize(2);
  display.setTextColor(BLUE);
  display.println("STAN LOONA");
}

void loop() {
  // put your main code here, to run repeatedly:

}
