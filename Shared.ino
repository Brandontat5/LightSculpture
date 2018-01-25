//------------------------------------------------------------------------
//                        Shared Function Definitions
//------------------------------------------------------------------------
// All your function definitions that are shared should be entered here
//


//
// turn on the LEDs, one group of colors at a time
//
void fadeShowAllTheColors(int onTime, int offTime, byte repeatCount, byte fadeSpeed)
{ 
  byte count;
  byte redLedsArray[4] = {2, 4, 6, 8};
  byte orangeLedsArray[3] = {9, 10, 11};
  byte yellowLedsArray[2] = {14, 15};
  byte greenLedsArray[3] = {3, 5, 7};
  byte blueLedsArray[2] = {12, 13};
  
  //
  // turn on all colors
  //
  for(count = 1; count <= repeatCount; count++)
  {

    fade.up(fadeSpeed, redLedsArray, sizeof(redLedsArray));  // turn on all the reds
    if (fade.delayAndCheckForExit(onTime) == true) return;   // check knob during on time
 
    fade.up(fadeSpeed, orangeLedsArray, sizeof(orangeLedsArray));  // turn on all the oranges
    if (fade.delayAndCheckForExit(onTime) == true) return;   // check knob during on time
    
    fade.up(fadeSpeed, yellowLedsArray, sizeof(yellowLedsArray));  // turn on all the yellows
    if (fade.delayAndCheckForExit(onTime) == true) return;   // check knob during on time

    fade.up(fadeSpeed, greenLedsArray, sizeof(greenLedsArray));  // turn on all the greens
    if (fade.delayAndCheckForExit(onTime) == true) return;   // check knob during on time

    fade.up(fadeSpeed, blueLedsArray, sizeof(blueLedsArray));  // turn on all the blues
    if (fade.delayAndCheckForExit(onTime) == true) return;   // check knob during on time

    fade.down(fadeSpeed);  // turn all the LEDs off
    if (fade.delayAndCheckForExit(offTime) == true) return;   // check knob during off time  
  }
  
}

