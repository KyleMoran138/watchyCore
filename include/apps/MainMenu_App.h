#ifndef MainMenu_App_H
#define MainMenu_App_H

#include <Arduino.h>
#include <GxEPD2_BW.h>
#include <Fonts/FreeMonoBold9pt7b.h>
#include "config.h"    
#include "App.h"

class MainMenu_App: public App {
    public:
        MainMenu_App();
};

#endif