/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef WAKEUPSETTINGSCREENVIEWBASE_HPP
#define WAKEUPSETTINGSCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/wakeupsettingscreen_screen/WakeupSettingScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>

class WakeupSettingScreenViewBase : public touchgfx::View<WakeupSettingScreenPresenter>
{
public:
    WakeupSettingScreenViewBase();
    virtual ~WakeupSettingScreenViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void buttonHourUpClicked()
    {
        // Override and implement this function in WakeupSettingScreen
    }

    virtual void buttonHourDownClicked()
    {
        // Override and implement this function in WakeupSettingScreen
    }

    virtual void buttonMinUpClicked()
    {
        // Override and implement this function in WakeupSettingScreen
    }

    virtual void buttonMinDownClicked()
    {
        // Override and implement this function in WakeupSettingScreen
    }

    virtual void buttonDoneClicked()
    {
        // Override and implement this function in WakeupSettingScreen
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Image background;
    touchgfx::ButtonWithLabel buttonCancel;
    touchgfx::ButtonWithLabel buttonDone;
    touchgfx::ToggleButton toggleButtonAlarmUse;
    touchgfx::TextArea textAreaAlarmUse;
    touchgfx::ToggleButton toggleButtonLightUse;
    touchgfx::TextArea textAreaLightUse;
    touchgfx::TextArea textAreaWakeupAt;
    touchgfx::TextAreaWithOneWildcard textAreaHour;
    touchgfx::TextAreaWithOneWildcard textAreaMinute;
    touchgfx::Button buttonMinDown;
    touchgfx::Button buttonMinUp;
    touchgfx::Button buttonHourDown;
    touchgfx::Button buttonHourUp;
    touchgfx::TextArea textAreaColon;
    touchgfx::DigitalClock digitalClock;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXTAREAHOUR_SIZE = 3;
    touchgfx::Unicode::UnicodeChar textAreaHourBuffer[TEXTAREAHOUR_SIZE];
    static const uint16_t TEXTAREAMINUTE_SIZE = 3;
    touchgfx::Unicode::UnicodeChar textAreaMinuteBuffer[TEXTAREAMINUTE_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<WakeupSettingScreenViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // WAKEUPSETTINGSCREENVIEWBASE_HPP
