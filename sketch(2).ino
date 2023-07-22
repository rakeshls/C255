#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET 4
Adafruit_SSD1306 display(SCREEN_WIDTH,SCREEN_HEIGHT,&Wire,OLED_RESET);

void setup(){
  Serial.begin(115200);
  if(!display.begin(SSD1306_SWITCHCAPVCC,0x3C)){
    Serial.println("SSD LOCATION FAILED");
    for(;;);
  }
  delay(2000);
  
}
void loop(){
  display.clearDisplay();
  display.drawCircle(50,30,30,WHITE);
  display.display();
  delay(1000);

  display.clearDisplay();
  display.fillCircle(50,30,30,WHITE);
  display.display();
  delay(1000);
}