#ifndef MainMenu_App_H
#define MainMenu_App_H

#include <Arduino.h>
#include <GxEPD2_BW.h>
#include "config.h"
#include "App.h"
#include "fonts.h"

class MainMenu_App: public App {
    public:
        MainMenu_App();
        virtual String displayMethod(GxEPD2_BW<GxEPD2_154_D67, GxEPD2_154_D67::HEIGHT> display, int wakeupBit);

    private:
        int _currentSelection;
        App* _menuItems = {};

};

#endif