//------------------------------------------------------------------------
//                        BackgroundShow Function Calls
//------------------------------------------------------------------------
// run the "Background Show" while the knob is in zone 2
//
// THIS SHOULD be a list of function calls to functions defined in the BackgroundShow or Shared function definitions area
//
void runBackgroundShow()
{
  unsigned long startTime = millis(); // time we begin the light show, in milliseconds
  int intermissionDelay = 1; // brief pause between displays
  int postShowDelay = 1000; // longer delay at the end of the showw

  Serial.println("Beginning Background Show.");

  crossFadeRightAndLeft(400, 150, 2, 3);  // plays function "crossFadeRightAndLeft"
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;
  
  FadeArrayOnTogether2(1, 4);  // plays function "FadeArrayOnTogether2"
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return; 

   crossFadeRightAndLeft(300, 150, 3, 3);  // plays function "crossFadeRightAndLeft"
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return; 

  fadeBlinkSingleLedsGoingClockwise(200, 150, 2, 4);  // plays function "fadeBlinkSingleLedsGoingClockwise"
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  FadeArrayOnTogether2(1, 5);  // plays function "FadeArrayOnTogether2"
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return; 

  sequenceFadeLeft2RightTogether(300, 150, 1, 4);  // plays function "sequenceFadeLeft2RightTogether"
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return; 

  sequenceFadeRight2LeftTogether(300, 150, 1, 4);  // plays function "sequenceFadeRight2LeftTogether"
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;

  Serial.print("Background Show finished.  Run time in milliseconds: ");
  Serial.println(millis() - startTime);
}



//------------------------------------------------------------------------
//                        BackgroundShow Function Definitions
//------------------------------------------------------------------------
// All your function definitions for BackgroundShow should be entered here
//

//
// fade an LED up and down, then move to the next LED in a clockwise direction
//
void fadeBlinkSingleLedsGoingClockwise(int onTime, int offTime, byte repeatCount, byte fadeSpeed)
{
  byte ledNumber;
  byte count;

  for(count = 1; count <= repeatCount; count++)
  {
    for(ledNumber = 9; ledNumber <= 12; ledNumber++)
    { 
      fade.up(fadeSpeed, ledNumber);
      if (fade.delayAndCheckForExit(onTime) == true) return;   // check knob during on time

      fade.down(fadeSpeed, ledNumber);
      if (fade.delayAndCheckForExit(offTime) == true) return;   // check knob during off time
    }

    for(ledNumber = 2; ledNumber <= 8; ledNumber++)
    { 
      fade.up(fadeSpeed, ledNumber);
      if (fade.delayAndCheckForExit(onTime) == true) return;   // check knob during on time

      fade.down(fadeSpeed, ledNumber);
      if (fade.delayAndCheckForExit(offTime) == true) return;   // check knob during off time
    }
  }

}



//
// alternate all the LEDs on the right and left using crossFade
//
void crossFadeRightAndLeft(int onTime, int waitTime, byte repeatCount, byte fadeSpeed) // Fades one side then the other side
{
  byte count;
  byte leftArray[5] = {
    5,6,7,10,11        };
  byte rightArray[5] = {
    3,4,8,9,12        };

  fade.up(fadeSpeed, rightArray, sizeof(rightArray));
  if (fade.delayAndCheckForExit(onTime) == true) return;   // check knob during on time

  for(count = 1; count <= repeatCount; count++)
  {
    fade.crossFade(fadeSpeed, leftArray, sizeof(leftArray), rightArray, sizeof(rightArray));  // crossfade right side LEDs
    if (fade.delayAndCheckForExit(waitTime) == true) return;   // check knob during wait time

    fade.crossFade(fadeSpeed, rightArray, sizeof(rightArray), leftArray, sizeof(leftArray));  // crossfade left side LEDs
    if (fade.delayAndCheckForExit(waitTime) == true) return;   // check knob during wait time
  }

  fade.down(fadeSpeed, rightArray, sizeof(rightArray));  // turn off all LEDs
}



void sequenceFadeLeft2RightTogether(int onTime, int waitTime, byte RepeatCount, byte fadeSpeed) // fades from left to right in a wave 
{
  byte array1 [3]={ 
    3, 9, 12  };
  byte array2 [2]={ 
    4, 8   };
  byte array3 [1]={ 
    2    };
  byte array4 [2]={ 
    5,7   };
  byte array5 [3]={ 
    6, 10, 11    };
  int count;
  for (count=1; count<=RepeatCount; count++)
  {
    fade.up(fadeSpeed, array5, 3);  //byte arrayName[], byte arrayLength, int waitTime, int fadeSpeed
    if (fade.delayAndCheckForExit(onTime) == true) return; // check knob during on time
    fade.down(fadeSpeed, array5, 3);
    if (fade.delayAndCheckForExit(waitTime) == true) return;   
    fade.up(fadeSpeed, array4, 2);
    if (fade.delayAndCheckForExit(onTime) == true) return;   // check knob during on time
    fade.down(fadeSpeed, array4, 2);
    if (fade.delayAndCheckForExit(waitTime) == true) return; 
    fade.up(fadeSpeed, array3, 1);
    if (fade.delayAndCheckForExit(onTime) == true) return;  // check knob during on time
    fade.down(fadeSpeed, array3, 1);
    if (fade.delayAndCheckForExit(waitTime) == true) return;
    fade.up(fadeSpeed, array2, 2);
    if (fade.delayAndCheckForExit(onTime) == true) return;  // check knob during on time
    fade.down(fadeSpeed, array2, 2);
    if (fade.delayAndCheckForExit(waitTime) == true) return;  
    fade.up(fadeSpeed, array1, 3);
    if (fade.delayAndCheckForExit(onTime) == true) return;   // check knob during on time
    fade.down(fadeSpeed, array1, 3);    
  }
}

void sequenceFadeRight2LeftTogether(int onTime, int waitTime, byte RepeatCount, byte fadeSpeed) // fades from right to left in a wave
{
  byte array1 [3]={ 
    3, 9, 12   };
  byte array2 [2]={ 
    4, 8    };
  byte array3 [1]={ 
    2   };
  byte array4 [2]={ 
    5,7    };
  byte array5 [3]={ 
    6, 10, 11    };
  int count;
  for (count=1; count<=RepeatCount; count++)
  {

    fade.up(fadeSpeed, array1, 3);
    if (fade.delayAndCheckForExit(onTime) == true) return;  // check knob during on time
    fade.down(fadeSpeed, array1, 3);  
    if (fade.delayAndCheckForExit(waitTime) == true) return;   
    fade.up(fadeSpeed, array2, 2);
    if (fade.delayAndCheckForExit(onTime) == true) return;  // check knob during on time
    fade.down(fadeSpeed, array2, 2);
    if (fade.delayAndCheckForExit(waitTime) == true) return; 
    fade.up(fadeSpeed, array3, 1);
    if (fade.delayAndCheckForExit(onTime) == true) return;  // check knob during on time
    fade.down(fadeSpeed, array3, 1);
    if (fade.delayAndCheckForExit(waitTime) == true) return;  
    fade.up(fadeSpeed, array4, 2);
    if (fade.delayAndCheckForExit(onTime) == true) return;   // check knob during on time
    fade.down(fadeSpeed, array4, 2);
    if (fade.delayAndCheckForExit(waitTime) == true) return;  
    fade.up(fadeSpeed, array5, 3);  //byte arrayName[], byte arrayLength, int waitTime, int fadeSpeed
    if (fade.delayAndCheckForExit(onTime) == true) return; 
    fade.down(fadeSpeed, array5, 3); 
  }
}

void FadeArrayOnTogether2(byte repeatCount, byte fadeSpeed) // fades from inner to outer with varying waitTimes in order to make it faster to slower speed
{
  byte arrayinner [1]={ 
    2                                                                              };
  byte arraymiddle [6]={ 
    3, 4, 5, 6, 7, 8                                                                              };
  byte arrayouter [4]={ 
    9, 10, 11, 12                                                                              };
  int count;
  for(count = 1; count <= repeatCount; count++)
  {
    FadeArrayOnTogether(arrayinner,1,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return;// check knob during on time
    FadeArrayOnTogether(arrayinner,1,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return;  // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return;  // check knob during on time

    turnArrayOffTogether(arrayinner,1);
    if (fade.delayAndCheckForExit(75) == true) return;  // check knob during on time
    turnArrayOffTogether(arraymiddle,6);
    if (fade.delayAndCheckForExit(75) == true) return;  // check knob during on time
    turnArrayOffTogether(arrayouter,4);

    FadeArrayOnTogether(arrayouter,4,fadeSpeed);
    if (fade.delayAndCheckForExit(125) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,fadeSpeed);
    if (fade.delayAndCheckForExit(125) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,fadeSpeed);
    if (fade.delayAndCheckForExit(125) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,fadeSpeed);
    if (fade.delayAndCheckForExit(125) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,fadeSpeed);
    if (fade.delayAndCheckForExit(125) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,fadeSpeed);
    if (fade.delayAndCheckForExit(125) == true) return;  // check knob during on time
    FadeArrayOnTogether(arrayouter,4,fadeSpeed);
    if (fade.delayAndCheckForExit(125) == true) return;  // check knob during on time
    FadeArrayOnTogether(arrayouter,4,fadeSpeed);
    if (fade.delayAndCheckForExit(125) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,fadeSpeed);
    if (fade.delayAndCheckForExit(125) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,fadeSpeed);
    if (fade.delayAndCheckForExit(125) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,fadeSpeed);
    if (fade.delayAndCheckForExit(125) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,fadeSpeed);
    if (fade.delayAndCheckForExit(125) == true) return;  // check knob during on time

    turnArrayOffTogether(arrayinner,1);
    if (fade.delayAndCheckForExit(75) == true) return;  // check knob during on time
    turnArrayOffTogether(arraymiddle,6);
    if (fade.delayAndCheckForExit(75) == true) return;  // check knob during on time
    turnArrayOffTogether(arrayouter,4);

    FadeArrayOnTogether(arrayinner,1,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,fadeSpeed);
    if (fade.delayAndCheckForExit(75) == true) return; // check knob during on time
  }
}

