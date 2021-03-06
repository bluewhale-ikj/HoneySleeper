/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/sleepstartscreen_screen/SleepStartScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

SleepStartScreenViewBase::SleepStartScreenViewBase() :
    buttonCallback(this, &SleepStartScreenViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_BACKGROUND_SLEEPSTARTSCREEN_ID));

    buttonCancel.setXY(14, 7);
    buttonCancel.setBitmaps(touchgfx::Bitmap(BITMAP_BUTTONCANCELDONERELEASED_ID), touchgfx::Bitmap(BITMAP_BUTTONCANCELDONEPRESSED_ID));
    buttonCancel.setLabelText(touchgfx::TypedText(T___SINGLEUSE_5QAN));
    buttonCancel.setLabelColor(touchgfx::Color::getColorFromRGB(51, 51, 51));
    buttonCancel.setLabelColorPressed(touchgfx::Color::getColorFromRGB(17, 17, 17));
    buttonCancel.setAlpha(230);
    buttonCancel.setAction(buttonCallback);

    textAreaHope.setXY(121, 143);
    textAreaHope.setColor(touchgfx::Color::getColorFromRGB(17, 17, 17));
    textAreaHope.setLinespacing(0);
    textAreaHope.setAlpha(230);
    textAreaHope.setTypedText(touchgfx::TypedText(T___SINGLEUSE_91MP));

    textAreaWakeupAt.setXY(158, 95);
    textAreaWakeupAt.setColor(touchgfx::Color::getColorFromRGB(17, 17, 17));
    textAreaWakeupAt.setLinespacing(0);
    textAreaWakeupAt.setAlpha(230);
    textAreaWakeupAt.setTypedText(touchgfx::TypedText(T___SINGLEUSE_U0K9));

    digitalClock.setPosition(200, 4, 80, 20);
    digitalClock.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    digitalClock.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4ZIE));
    digitalClock.displayLeadingZeroForHourIndicator(true);
    digitalClock.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR);
    digitalClock.setTime24Hour(10, 10, 0);

    digitalClockWakeupTime.setPosition(250, 92, 60, 25);
    digitalClockWakeupTime.setColor(touchgfx::Color::getColorFromRGB(17, 17, 17));
    digitalClockWakeupTime.setTypedText(touchgfx::TypedText(T___SINGLEUSE_UODD));
    digitalClockWakeupTime.displayLeadingZeroForHourIndicator(true);
    digitalClockWakeupTime.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR_NO_SECONDS);
    digitalClockWakeupTime.setTime24Hour(8, 0, 0);
    digitalClockWakeupTime.setAlpha(230);

    blackOut.setXY(0, 0);
    blackOut.setVisible(false);
    blackOut.setBitmaps(touchgfx::Bitmap(BITMAP_BLACKOUT_ID), touchgfx::Bitmap(BITMAP_BLACKOUT_ID));
    blackOut.setAction(buttonCallback);

    add(__background);
    add(background);
    add(buttonCancel);
    add(textAreaHope);
    add(textAreaWakeupAt);
    add(digitalClock);
    add(digitalClockWakeupTime);
    add(blackOut);
}

void SleepStartScreenViewBase::setupScreen()
{

}

void SleepStartScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonCancel)
    {
        //ReturnToMain
        //When buttonCancel clicked change screen to MainScreen
        //Go to MainScreen with screen transition towards North
        application().gotoMainScreenScreenSlideTransitionNorth();
    }
    else if (&src == &blackOut)
    {
        //ToWhite
        //When blackOut clicked call virtual function
        //Call blackOutClicked
        blackOutClicked();
    }
}
