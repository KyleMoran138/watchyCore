#ifndef APP_H
#define APP_H

#include <Arduino.h>
#include <GxEPD2_BW.h>
#include "config.h"  

struct App {

    public:
        void (*displayMethod)(GxEPD2_BW<GxEPD2_154_D67, GxEPD2_154_D67::HEIGHT> display, int wakeupBit, App* thisApp);
        String appName = "DEFAULT";
        boolean isMenu = false;
        App* menuItems = {};

    public:
        App();
        virtual void btnPress(int btnPin){};
};

#endif