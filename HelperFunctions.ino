//------------------------------------------------------------------------
//                        Helper Function Definitions
//------------------------------------------------------------------------
//
// All of your helper functions go here
//
//
// blink all of the LEDs in arrayName[] at once
//
void blinkArrayTogether(byte arrayName[], byte arrayLength, int ledOnTime, int ledOffTime)
{
  turnArrayOnTogether(arrayName, arrayLength);
  delay(ledOnTime);
  turnArrayOffTogether(arrayName, arrayLength);
  delay(ledOffTime);
}


//
// turn all of the LEDs in arrayName[] on at once
//
void turnArrayOnTogether(byte arrayName[], byte arrayLength)
{
  for(byte index = 0; index < arrayLength; index++)
  {
    digitalWrite(arrayName[index], HIGH);
  } 
}


//
// turn all of the LEDs in arrayName[] off at once
//
void turnArrayOffTogether( byte arrayName[], int arrayLength)
{
  for(byte index = 0; index < arrayLength; index++)
  {
    digitalWrite(arrayName[index], LOW);
  } 
}
//
// turn on LEDs in order
//
void blinkArrayInOrder(byte arrayName[], byte arrayLength, int waitTime)
{
  for(byte index = 0; index < arrayLength; index++)
  {
    digitalWrite(arrayName[index], HIGH);
    delay(waitTime);
  } 
}

void FadeArrayOnTogether(byte arrayName[], byte arrayLength, int fadeSpeed)
{
  for(byte index = 0; index < arrayLength; index++)
  {
    fade.up(fadeSpeed,arrayName[index]);
  } 
}


void fadeOnArrayInOrder(byte arrayName[], byte arrayLength, int fadeSpeed)
{
  for(byte index = 0; index < arrayLength; index++)
  {
    fade.up(fadeSpeed,arrayName[index]);
  } 
}

void fadeOffArrayInOrder(byte arrayName[], byte arrayLength, int fadeSpeed)
{
  for(byte index = 0; index < arrayLength; index++)
  {
    fade.down(fadeSpeed,arrayName[index]);
  } 
}

//
// turn on LEDs in order
//
void turnArrayOnInOrder(byte arrayName[], byte arrayLength, int ledOnTime)
{
  for(byte index = 0; index < arrayLength; index++)
  {
    digitalWrite(arrayName[index], HIGH);
    delay(ledOnTime);
  } 
}
//
//turn off LEDs in order
//
void turnArrayOffInOrder(byte arrayName[], byte arrayLength, int ledOffTime)
{
  for(byte index = 0; index < arrayLength; index++)
  {
    digitalWrite(arrayName[index], HIGH);
    delay(ledOffTime);
  }
}
//
// turns all the LEDs on
//
void turnOnAll()
{
  int ledNum;
  for(ledNum = 2; 2 <= 15; ledNum++)
  {
    digitalWrite(ledNum, HIGH);
  }
}
//
// turns all the LEDs off
//
void turnOffAll()
{
  int ledNum;
  for(ledNum = 2; 2 <= 15; ledNum++)
  {
    digitalWrite(ledNum, LOW);
  } 
}





