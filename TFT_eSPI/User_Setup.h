#define ST7796_DRIVER

#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14
#define TFT_CS   15
#define TFT_DC   2
#define TFT_RST   -1   // or -1 if not wired
#define TFT_BL   27

#define SPI_FREQUENCY  40000000
#define SPI_READ_FREQUENCY 20000000

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF

#define TFT_WIDTH  320
#define TFT_HEIGHT 480
