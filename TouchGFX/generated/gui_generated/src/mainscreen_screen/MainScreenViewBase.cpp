/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/mainscreen_screen/MainScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MainScreenViewBase::MainScreenViewBase() :
    buttonCallback(this, &MainScreenViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_MAINSCREEN_ID));

    buttonLightOff.setXY(48, 77);
    buttonLightOff.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTONLIGHTOFFRELEASED_ID), touchgfx::Bitmap(BITMAP_BUTTONLIGHTOFFPRESSED_ID));
    buttonLightOff.setLabelText(touchgfx::TypedText(T___SINGLEUSE_QYQ8));
    buttonLightOff.setLabelColor(touchgfx::Color::getColorFromRGB(51, 51, 51));
    buttonLightOff.setLabelColorPressed(touchgfx::Color::getColorFromRGB(17, 17, 17));
    buttonLightOff.setAlpha(230);

    buttonLightOn.setXY(187, 68);
    buttonLightOn.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTONLIGHTONRELEASED_ID), touchgfx::Bitmap(BITMAP_BUTTONLIGHTONPRESSED_ID));
    buttonLightOn.setLabelText(touchgfx::TypedText(T___SINGLEUSE_RCM2));
    buttonLightOn.setLabelColor(touchgfx::Color::getColorFromRGB(51, 51, 51));
    buttonLightOn.setLabelColorPressed(touchgfx::Color::getColorFromRGB(17, 17, 17));
    buttonLightOn.setAlpha(230);

    imgSwitch.setXY(91, 70);
    imgSwitch.setBitmap(touchgfx::Bitmap(BITMAP_ICON_LIGHT_ON_ID));

    buttonSleepStart.setXY(41, 186);
    buttonSleepStart.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTONSLEEPSTARTRELEASED_ID), touchgfx::Bitmap(BITMAP_BUTTONSLEEPSTARTPRESSED_ID));
    buttonSleepStart.setLabelText(touchgfx::TypedText(T___SINGLEUSE_8Y2V));
    buttonSleepStart.setLabelColor(touchgfx::Color::getColorFromRGB(51, 51, 51));
    buttonSleepStart.setLabelColorPressed(touchgfx::Color::getColorFromRGB(17, 17, 17));
    buttonSleepStart.setAlpha(230);
    buttonSleepStart.setAction(buttonCallback);

    buttonWakeupInfo.setXY(285, 33);
    buttonWakeupInfo.setBitmaps(touchgfx::Bitmap(BITMAP_WAKEUPSETTINGINFO_ID), touchgfx::Bitmap(BITMAP_WAKEUPSETTINGINFO_ID));
    buttonWakeupInfo.setAction(buttonCallback);

    add(__background);
    add(background);
    add(buttonLightOff);
    add(buttonLightOn);
    add(imgSwitch);
    add(buttonSleepStart);
    add(buttonWakeupInfo);
}

void MainScreenViewBase::setupScreen()
{

}

void MainScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonSleepStart)
    {
        //GoToSleepStart
        //When buttonSleepStart clicked change screen to SleepStartScreen
        //Go to SleepStartScreen with screen transition towards South
        application().gotoSleepStartScreenScreenSlideTransitionSouth();
    }
    else if (&src == &buttonWakeupInfo)
    {
        //GoToWakeupSetting
        //When buttonWakeupInfo clicked change screen to WakeupSettingScreen
        //Go to WakeupSettingScreen with screen transition towards East
        application().gotoWakeupSettingScreenScreenSlideTransitionEast();
    }
}