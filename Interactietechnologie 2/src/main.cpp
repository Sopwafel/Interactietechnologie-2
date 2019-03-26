// //#include <SPI.h>
// #include <Wire.h>
// #include <Adafruit_GFX.h>
// #include <Adafruit_SSD1306.h>
// #include <Adafruit_Sensor.h>
// #include <Adafruit_BME280.h>

// #pragma region OLED

// /**************************************************************************
//  This is an example for our Monochrome OLEDs based on SSD1306 drivers

//  Pick one up today in the adafruit shop!
//  ------> http://www.adafruit.com/category/63_98

//  This example is for a 128x32 pixel display using I2C to communicate
//  3 pins are required to interface (two I2C and one reset).

//  Adafruit invests time and resources providing this open
//  source code, please support Adafruit and open-source
//  hardware by purchasing products from Adafruit!

//  Written by Limor Fried/Ladyada for Adafruit Industries,
//  with contributions from the open source community.
//  BSD license, check license.txt for more information
//  All text above, and the splash screen below must be
//  included in any redistribution.
//  **************************************************************************/



// #pragma endregion

// #pragma region BME280
// /***************************************************************************
//   This is a library for the BME280 humidity, temperature & pressure sensor

//   Designed specifically to work with the Adafruit BME280 Breakout
//   ----> http://www.adafruit.com/products/2650

//   These sensors use I2C or SPI to communicate, 2 or 4 pins are required
//   to interface. The device's I2C address is either 0x76 or 0x77.

//   Adafruit invests time and resources providing this open source code,
//   please support Adafruit andopen-source hardware by purchasing products
//   from Adafruit!

//   Written by Limor Fried & Kevin Townsend for Adafruit Industries.
//   BSD license, all text above must be included in any redistribution
//  ***************************************************************************/



// // #define BME_SCK 13
// // #define BME_MISO 12
// // #define BME_MOSI 11
// // #define BME_CS 10

// int BME_SDA = D2;
// int BME_SCL = D4;

// #define SEALEVELPRESSURE_HPA (1013.25)

// Adafruit_BME280 bme; // I2C
// //Adafruit_BME280 bme(BME_CS); // hardware SPI
// //Adafruit_BME280 bme(BME_CS, BME_MOSI, BME_MISO, BME_SCK); // software SPI

// unsigned long delayTime;

// void printBMEValues() {
//     Serial.print("Temperature = ");
//     Serial.print(bme.readTemperature());
//     Serial.println(" *C");

//     Serial.print("Pressure = ");

//     Serial.print(bme.readPressure() / 100.0F);
//     Serial.println(" hPa");

//     Serial.print("Approx. Altitude = ");
//     Serial.print(bme.readAltitude(SEALEVELPRESSURE_HPA));
//     Serial.println(" m");

//     Serial.print("Humidity = ");
//     Serial.print(bme.readHumidity());
//     Serial.println(" %");

//     Serial.println();
// }

// void BMESetup(){
//     Serial.println(F("BME280 test"));

//     bool status;
    
//     // default settings
//     // (you can also pass in a Wire library object like &Wire2)
//     Wire.begin(BME_SDA, BME_SCL);
//     status = bme.begin();  
//     if (!status) {
//         Serial.println("Could not find a valid BME280 sensor, check wiring!");
//         while (1);
//     }
    
//     Serial.println("-- Default Test --");
//     delayTime = 1000;

//     Serial.println();
// }

// #pragma endregion

// void setup() {
//     Serial.begin(9600);
//    // BMESetup();
// }


// void loop() { 
//     //printBMEValues();
//     Serial.println("test");
//     delay(delayTime);
// }


