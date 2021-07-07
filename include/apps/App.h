#ifndef APP_H
#define APP_H

#include <Arduino.h>
#include <GxEPD2_BW.h>
#include "config.h"    

struct App {

    public:
        void (*displayMethod)(GxEPD2_BW<GxEPD2_154_D67, GxEPD2_154_D67::HEIGHT> display);
        String appName = "DEFAULT";

    public:
        App();
};

#endif