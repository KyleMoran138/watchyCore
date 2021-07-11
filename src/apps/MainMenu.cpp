#include "apps/MainMenu_App.h"

String MainMenu_App::displayMethod(GxEPD2_BW<GxEPD2_154_D67, GxEPD2_154_D67::HEIGHT> display, int wakeupBit){

    if(wakeupBit & UP_BTN_MASK){
        _currentSelection++;
    }

    if(wakeupBit & DOWN_BTN_MASK){
        _currentSelection--;
    }

    display.setFont(&FreeMonoBold9pt7b);
    display.setCursor(0, DISPLAY_Y_HOME_PADDING + 9); // Set x cord to 0 and y cord to padding + font height
    display.println("MainMenu!");
    display.println("currentSelection: " + String(this->_currentSelection));
    display.display(true);
}

MainMenu_App::MainMenu_App(){}