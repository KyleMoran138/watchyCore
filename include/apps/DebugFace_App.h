#ifndef DebugFace_App_H
#define DebugFace_App_H

#include <Arduino.h>
#include <GxEPD2_BW.h>
#include <Fonts/FreeMonoBold9pt7b.h>
#include "config.h"    
#include "App.h"

class DebugFace_App: public App {
    public:
        DebugFace_App();
};

#endif