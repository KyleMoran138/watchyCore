#include "apps/MainMenu_App.h"

static void renderView(GxEPD2_BW<GxEPD2_154_D67, GxEPD2_154_D67::HEIGHT> display, int wakeupBit, App* thisApp){
    display.setFont(&FreeMonoBold9pt7b);
    display.setCursor(0, DISPLAY_Y_HOME_PADDING + 9); // Set x cord to 0 and y cord to padding + font height
    display.println("MainMenu!");
    display.println("isMenu: " + String(thisApp->isMenu));
    display.display(true);
}

MainMenu_App::MainMenu_App(){
    this->isMenu = true;
}