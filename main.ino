
//Include libraries copied from VESC
#include "VescUart.h"
#include "datatypes.h"
#include <Arduino.h>
#include <TFT_eSPI.h>
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI();
#define LCD_LED 27
HardwareSerial VescSerial(0);

VescUart UART;

void setup() {
	//Setup debug serial
	delay(500);
	//Initialize VESC UART (16 rx, 16tx)
	VescSerial.begin(115200, SERIAL_8N1, 22, 21);
	delay(500);
	//VescUartSetSerialPort(&VescSerial);

	pinMode(LCD_LED, OUTPUT);
	digitalWrite(LCD_LED, HIGH);

	tft.init();
	tft.setRotation(2);
	tft.fillScreen(TFT_BLACK);
	tft.setCursor(0,0);
  tft.setTextColor(TFT_WHITE);
  tft.setTextSize(3);
  tft.setTextFont(1);
	tft.setTextDatum(MC_DATUM);
  tft.drawString("WELCOME", 160, 200);
	tft.setTextSize(2);
  tft.drawString("You are using", 160, 230);
	tft.drawString("Electrium Mobility's", 160, 250);
	tft.drawString("F25 Electric Bike :)", 160, 270);
	delay(3000);

	UART.setSerialPort(&VescSerial);

}

float avgMotorCurrent;
float avgInputCurrent;
float dutyCycleNow;
float rpm;
float inpVoltage;
float ampHours;
float ampHoursCharged;
float wattHours;
float wattHoursCharged;
long tachometer;
long tachometerAbs;
float tempMosfet;
float tempMotor;
float pidPos;
uint8_t id;

void loop() {
	if (UART.getVescValues()) {
  	inpVoltage = UART.data.inpVoltage;
		ampHoursCharged = UART.data.ampHoursCharged;
  	avgInputCurrent = UART.data.avgInputCurrent;
	}
	tft.fillScreen(TFT_BLACK);
	tft.setTextFont(1);
	tft.setTextSize(3);

	tft.setTextColor(TFT_WHITE);
	tft.setCursor(10, 10);

  tft.print(inpVoltage, 2);
  tft.print("V");

  tft.setCursor(10, 40);
  tft.print(ampHoursCharged, 2);
  tft.print("A");

  tft.setCursor(10, 70);
	tft.print(avgInputCurrent, 2);
  tft.print("A");

	//inpVoltage += 1;
	//if(inpVoltage > 10.0) {
	//	inpVoltage = 0.0;
	//}
	//reset values for off state
	int v_in = 0;
	int current_motor = 0;
	int current_in = 0;
	int rpm = 0;
	int duty_now = 0;
	int temp_mos1 = 0;
	int tachometer = 0;
	int tachometer_abs = 0;

	delay(1000);

}





