#include "apps/DebugFace_App.h"

String DebugFace_App::displayMethod(GxEPD2_BW<GxEPD2_154_D67, GxEPD2_154_D67::HEIGHT> display, int wakeupBit){
    display.setFont(&FreeMonoBold9pt7b);
    display.setCursor(0, DISPLAY_Y_HOME_PADDING + 9); // Set x cord to 0 and y cord to padding + font height
    display.println("DEBUGFACE 2");
    display.println("WAKEBTN: " + String(wakeupBit));
    display.display(true);
}

DebugFace_App::DebugFace_App(){
}