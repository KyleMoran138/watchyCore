#ifndef WATCHY_H
#define WATCHY_H

#include <Arduino.h>
#include <DS3232RTC.h>
#include <GxEPD2_BW.h>
#include <Wire.h>
#include "bma.h"
#include "config.h"

class Watchy {
    public:
        static DS3232RTC RTC;
        static GxEPD2_BW<GxEPD2_154_D67, GxEPD2_154_D67::HEIGHT> display;
        tmElements_t currentTime;

    public:
        Watchy();
        void init(String datetime = "");
        void render();

    private:
        void _rtcConfig(String datetime);    
        void _bmaConfig();
        static uint16_t _readRegister(uint8_t address, uint8_t reg, uint8_t *data, uint16_t len);
        static uint16_t _writeRegister(uint8_t address, uint8_t reg, uint8_t *data, uint16_t len);
};

extern RTC_DATA_ATTR int guiState;
extern RTC_DATA_ATTR BMA423 sensor;

#endif