This project was done as a team. This was for an electric bike project for the Electrium Mobility design team in University of Waterloo. As the firmware team, 
we attached the VESC to the ST7796 TFT display, with the built in ESP32-WROOM-32, using proper wiring. By serial communication through UART, we extracted telemetry data from the VESC
into the display, in order to show real-time data like speed, battery and distance travelled. Extra coding was done to format the data onto the display. All coding was done in C

We did slight modifications to some libraries such as VescUart.h, to ensure serial communication is proper and is using the right baudrate. Additionally, we configured the VESC, 
so that when we push the throttlefor the bike, it moves the motor. 

Additionally, when the throttle moves, thats when data gets passed from the VESC to the display module, to show changing values in those features. 
It was an amazing project that lasted four months, but where we got progress within the last week from this README date (December 4th 2025). Great work from me and my peers!!!
