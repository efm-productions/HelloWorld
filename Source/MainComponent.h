/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
struct car
{
    struct carSeat
    {
        bool seatIsLeather;
    };

    int numberOfWheels;
    bool isConvertible;

    carSeat driverSeat;
    carSeat navigatorSeat;

    bool switchSeats(carSeat oldSeat, carSeat newSeat);

    void accelerate(float howFarToPushThePedal);
};
//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent   : public Component
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...


    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
