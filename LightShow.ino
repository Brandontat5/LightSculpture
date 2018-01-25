//------------------------------------------------------------------------
//                        LightShow Function Calls
//------------------------------------------------------------------------
// run the "LightShow" while the knob is in zone 1
//
// THIS SHOULD be a list of function calls to functions defined in the LightShow or Shared function definitions area
//
//
void runLightShow()
{
  unsigned long startTime = millis(); // time we begin the light show, in milliseconds
  int intermissionDelay = 1; // brief pause between displays
  int postShowDelay = 1000; // longer delay at the end of the show
  int count;
  int repeatCount;

  Serial.println("Beginning Light Show.");

  FadeArrayOnTogether(1, 1);                                                  // starts the fading in order show that has fading on and off and certain orders
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;  // check knob during intermission

    //

  sequenceIntoOut(25,4);                                                      // starts function that has the LEDs in the outer play then into the inner LEDs play 
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;  // check knob during intermission

  sequenceIntoOut(50,3);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceIntoOut(75,2);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceIntoOut(100,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceIntoOut(125,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceIntoOut(100,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceIntoOut(75,2);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceIntoOut(50,3);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceIntoOut(25,4);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission
  
  //

  sequenceSIMPLE(25,5);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceSIMPLE(50,4);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceSIMPLE(75,3);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceSIMPLE(100,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceSIMPLE(75,3);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceSIMPLE(50,4);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceSIMPLE(25,5);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  //

  sequenceLeft2Right(25,5);                                           // plays the function thats turns on the LEDs from left to right that has varying waitTimes in order to 
                                                                      // speed it up and slow it down
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(50,4);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(75,3);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(100,2);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(125,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(150,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(125,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(100,2);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(75,3);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(50,4);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(25,5);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(50,4);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(75,3);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(100,2);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(125,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceLeft2Right(150,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission


  //


  sequenceRight2Left(25,5);                                           // plays the opposite of "Left2Right" in varying speeds
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(50,4);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(75,3);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(100,2);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(125,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(150,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(125,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(100,2);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(75,3);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(50,4);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(25,5);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(50,4);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(75,3);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(100,2);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(125,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceRight2Left(150,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  //
  
    sequenceSIMPLE(25,5);                                             // blinks leds in the spiral 
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceSIMPLE(50,4);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceSIMPLE(75,3);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceSIMPLE(100,1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceSIMPLE(75,3);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceSIMPLE(50,4);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  sequenceSIMPLE(25,5);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission
  
  //
  FadeArrayOnTogether(1, 1);
  if (fade.delayAndCheckForExit(intermissionDelay) == true) return;   // check knob during intermission

  Serial.print("Light Show finished.  Run time in milliseconds: ");
  Serial.println(millis() - startTime);
}


//------------------------------------------------------------------------
//                        LightShow Function Definitions
//------------------------------------------------------------------------
// All your function definitions for LightShow should be entered here
//

//
// turn on the LEDs, one at a time
//
void FadeArrayOnTogether(byte repeatCount, byte fadeSpeed)
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
    FadeArrayOnTogether(arrayinner,1,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,8);
    if (fade.delayAndCheckForExit(25) == true) return;// check knob during on time
    FadeArrayOnTogether(arrayinner,1,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,8);
    if (fade.delayAndCheckForExit(25) == true) return;// check knob during on time

    turnArrayOffTogether(arrayinner,1);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    turnArrayOffTogether(arraymiddle,6);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    turnArrayOffTogether(arrayouter,4);

    FadeArrayOnTogether(arrayouter,4,8);
    if (fade.delayAndCheckForExit(50) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,8);
    if (fade.delayAndCheckForExit(50) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,8);
    if (fade.delayAndCheckForExit(50) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,8);
    if (fade.delayAndCheckForExit(50) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,8);
    if (fade.delayAndCheckForExit(50) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,8);
    if (fade.delayAndCheckForExit(50) == true) return;// check knob during on time
    FadeArrayOnTogether(arrayouter,4,8);
    if (fade.delayAndCheckForExit(50) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,8);
    if (fade.delayAndCheckForExit(50) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,8);
    if (fade.delayAndCheckForExit(50) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,8);
    if (fade.delayAndCheckForExit(50) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,8);
    if (fade.delayAndCheckForExit(50) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,8);
    if (fade.delayAndCheckForExit(50) == true) return; // check knob during on time

    turnArrayOffTogether(arrayinner,1);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    turnArrayOffTogether(arraymiddle,6);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    turnArrayOffTogether(arrayouter,4);

    FadeArrayOnTogether(arrayinner,1,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,8);
    if (fade.delayAndCheckForExit(25) == true) return;  // check knob during on time
    FadeArrayOnTogether(arrayinner,1,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayinner,1,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arraymiddle,6,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
    FadeArrayOnTogether(arrayouter,4,8);
    if (fade.delayAndCheckForExit(25) == true) return; // check knob during on time
  }
}

void sequenceIntoOut(int waitTime, int RepeatCount)
{
  byte arrayinner [1]={ 
    2};
  byte arraymiddle [6]={ 
    3, 4, 5, 6, 7, 8};
  byte arrayouter [4]={ 
    9, 10, 11, 12};
  int y;
  for (y=1; y<=RepeatCount; y++)
  {
    turnArrayOnTogether(arrayinner,1);
    if (fade.delayAndCheckForExit(waitTime) == true) return; // check knob during on time
    turnArrayOffTogether(arrayinner,1);
    if (fade.delayAndCheckForExit(waitTime) == true) return; // check knob during on time
    turnArrayOnTogether(arraymiddle,6);
    if (fade.delayAndCheckForExit(waitTime) == true) return; // check knob during on time
    turnArrayOffTogether(arraymiddle,6);
    if (fade.delayAndCheckForExit(waitTime) == true) return; // check knob during on time
    turnArrayOnTogether(arrayouter,4);
    if (fade.delayAndCheckForExit(waitTime) == true) return; // check knob during on time
    turnArrayOffTogether(arrayouter,4);
    if (fade.delayAndCheckForExit(waitTime) == true) return;  // check knob during on time
    turnArrayOnTogether(arraymiddle,6);
    if (fade.delayAndCheckForExit(waitTime) == true) return; // check knob during on time
    turnArrayOffTogether(arraymiddle,6);
    if (fade.delayAndCheckForExit(waitTime) == true) return; // check knob during on time
    turnArrayOnTogether(arrayinner,1);
    if (fade.delayAndCheckForExit(waitTime) == true) return; // check knob during on time
    turnArrayOffTogether(arrayinner,1);
    if (fade.delayAndCheckForExit(waitTime) == true) return; // check knob during on time
  }
}

void sequenceSIMPLE(int waitTime, int RepeatCount)  // Plays the LEDs in a spiral
{
  byte arrayblinkArrayInOrder [12]={ 
    2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12    };
  byte arrayblinkArrayInReverseOrder [12]={ 
    12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2      };
  int count;
  for (count=1; count<=RepeatCount; count++)
  {
    blinkArrayInOrder(arrayblinkArrayInOrder, 12, waitTime);
    if (fade.delayAndCheckForExit(0) == true) return;
    turnArrayOffTogether(arrayblinkArrayInReverseOrder,12);
    if (fade.delayAndCheckForExit(0) == true) return;
    blinkArrayInOrder(arrayblinkArrayInReverseOrder, 12, waitTime);
    if (fade.delayAndCheckForExit(0) == true) return;
    turnArrayOffTogether(arrayblinkArrayInOrder,12);



  }
}
void sequenceLeft2Right(int waitTime, int RepeatCount)  // Sequence plays LEDs from left to right 
{
  byte array1 [3]={ 
    3, 9, 12                              };
  byte array2 [2]={ 
    4, 8                               };
  byte array3 [1]={ 
    2                               };
  byte array4 [2]={ 
    5,7                               };
  byte array5 [3]={ 
    6, 10, 11                               };
  int count;
  for (count=1; count<=RepeatCount; count++)
  {
    turnArrayOnTogether(array5,3);
    if (fade.delayAndCheckForExit(waitTime) == true) return; 
    turnArrayOffTogether(array5,3);
    if (fade.delayAndCheckForExit(waitTime) == true) return;   
    turnArrayOnTogether(array4,2);
    if (fade.delayAndCheckForExit(waitTime) == true) return;   
    turnArrayOffTogether(array4,2);
    if (fade.delayAndCheckForExit(waitTime) == true) return; 
    turnArrayOnTogether(array3,1);
    if (fade.delayAndCheckForExit(waitTime) == true) return;
    turnArrayOffTogether(array3,1);
    if (fade.delayAndCheckForExit(waitTime) == true) return;
    turnArrayOnTogether(array2,2);
    if (fade.delayAndCheckForExit(waitTime) == true) return;
    turnArrayOffTogether(array2,2);
    if (fade.delayAndCheckForExit(waitTime) == true) return;  
    turnArrayOnTogether(array1,3);
    if (fade.delayAndCheckForExit(waitTime) == true) return;  
    turnArrayOffTogether(array1,3);    
  }
}

void sequenceRight2Left(int waitTime, int RepeatCount) // plays the inverse of Left2Right, it plays the LEDs from right 2 left.
{
  byte array1 [3]={ 
    3, 9, 12                              };
  byte array2 [2]={ 
    4, 8                               };
  byte array3 [1]={ 
    2                               };
  byte array4 [2]={ 
    5,7                               };
  byte array5 [3]={ 
    6, 10, 11                               };
  int count;
  for (count=1; count<=RepeatCount; count++)
  {

    turnArrayOnTogether(array1,3);
    if (fade.delayAndCheckForExit(waitTime) == true) return; 
    turnArrayOffTogether(array1,3);
    if (fade.delayAndCheckForExit(waitTime) == true) return;   
    turnArrayOnTogether(array2,2);
    if (fade.delayAndCheckForExit(waitTime) == true) return;   
    turnArrayOffTogether(array2,2);
    if (fade.delayAndCheckForExit(waitTime) == true) return; 
    turnArrayOnTogether(array3,1);
    if (fade.delayAndCheckForExit(waitTime) == true) return;
    turnArrayOffTogether(array3,1);
    if (fade.delayAndCheckForExit(waitTime) == true) return;
    turnArrayOnTogether(array4,2);
    if (fade.delayAndCheckForExit(waitTime) == true) return;
    turnArrayOffTogether(array4,2);
    if (fade.delayAndCheckForExit(waitTime) == true) return;  
    turnArrayOnTogether(array5,3);
    if (fade.delayAndCheckForExit(waitTime) == true) return;  
    turnArrayOffTogether(array5,3);    
  }
}



