#pragma once

#define RG_TARGET_NAME "MY_S3_CONSOLE"

// ==========================================
// DISPLAY CONFIGURATION (ST7735 160x128)
// ==========================================
#define RG_SCREEN_DRIVER            1  
#define RG_SCREEN_WIDTH             160
#define RG_SCREEN_HEIGHT            128
#define RG_SCREEN_HOST              SPI2_HOST
#define RG_GPIO_LCD_MISO            -1
#define RG_GPIO_LCD_MOSI            11
#define RG_GPIO_LCD_CLK             12
#define RG_GPIO_LCD_CS              10
#define RG_GPIO_LCD_DC              9
#define RG_GPIO_LCD_RST             8
#define RG_GPIO_LCD_BCKL            4

// ==========================================
// AUDIO CONFIGURATION (MAX98357A I2S)
// ==========================================
#define RG_AUDIO_USE_INT_DAC        0
#define RG_AUDIO_USE_EXT_DAC        1
#define RG_GPIO_SND_I2S_BCK         5
#define RG_GPIO_SND_I2S_WS          6
#define RG_GPIO_SND_I2S_DATA        7

// ==========================================
// STORAGE CONFIGURATION (INTERNAL FLASH)
// ==========================================
// This tells the OS to skip looking for an SD card 
// and mount the internal flash partition instead.
#define RG_STORAGE_ROOT             "/rom"
#define RG_STORAGE_FLASH_PARTITION  "romfs"

// ==========================================
// GAMEPAD CONFIGURATION (Pull-to-Ground)
// ==========================================
#define RG_GPIO_GAMEPAD_UP          14
#define RG_GPIO_GAMEPAD_DOWN        15
#define RG_GPIO_GAMEPAD_LEFT        16
#define RG_GPIO_GAMEPAD_RIGHT       17
#define RG_GPIO_GAMEPAD_A           18
#define RG_GPIO_GAMEPAD_B           3
#define RG_GPIO_GAMEPAD_START       46
#define RG_GPIO_GAMEPAD_SELECT      48