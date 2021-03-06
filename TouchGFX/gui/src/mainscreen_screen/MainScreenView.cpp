#include <gui/mainscreen_screen/MainScreenView.hpp>

MainScreenView::MainScreenView() :
	digitalClockClickedCallback(this, &MainScreenView::digitalClockClickHandler)
{

}

void MainScreenView::setupScreen()
{
    MainScreenViewBase::setupScreen();
    digitalClock.setClickAction(digitalClockClickedCallback);
    digitalClock.setTime24Hour(presenter->getCurrentHour(),
    						   presenter->getCurrentMinute(),
							   presenter->getCurrentSecond());
    digitalClockWakeupTime.setTime24Hour(presenter->getWakeupHour(), presenter->getWakeupMinute(), 0);
    updateLightImg(lightIsOn = presenter->getLightIsOn());
    presenter->switchLight(lightIsOn);

}

void MainScreenView::tearDownScreen()
{
    MainScreenViewBase::tearDownScreen();
}

void MainScreenView::buttonLightOnClicked()
{
	lightIsOn = true;
	presenter->switchLight(lightIsOn);
	updateLightImg(lightIsOn);
}

void MainScreenView::buttonLightOffClicked()
{
	lightIsOn = false;
	presenter->switchLight(lightIsOn);
	updateLightImg(lightIsOn);
}

void MainScreenView::updateLightImg(bool turnLightOn)
{
	MainScreenViewBase::imgSwitchOn.setVisible(turnLightOn);
	MainScreenViewBase::imgSwitchOff.setVisible(!turnLightOn);
	MainScreenViewBase::imgSwitchOn.invalidate();
	MainScreenViewBase::imgSwitchOff.invalidate();
}

void MainScreenView::updateDigitalClock(int digitalHours, int digitalMinutes, int digitalSeconds)
{
	digitalClock.setTime24Hour(digitalHours, digitalMinutes, digitalSeconds);
}

void MainScreenView::digitalClockClickHandler(const DigitalClock& dc, const ClickEvent& e)
{
	if (&dc == &digitalClock) {
		application().gotoSetClockScreenScreenSlideTransitionNorth();
	}
}
