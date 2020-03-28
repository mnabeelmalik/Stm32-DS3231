// code by Muhammad Nabeel
// github= www.github.com/mnabeelmalik
#include <Wire.h>
#include "DS3231.h"
#define my_serial Serial1

RTClib RTC;

void setup () {
  my_serial.begin(9600);
  Wire.begin();
}

void loop () {

  delay(1000);

  DateTime now = RTC.now();
  get_time(now);
}
void get_time(DateTime now)
{
  my_serial.print(now.year(), DEC);
  my_serial.print('/');
  my_serial.print(now.month(), DEC);
  my_serial.print('/');
  my_serial.print(now.day(), DEC);
  my_serial.print(' ');
  my_serial.print(now.hour(), DEC);
  my_serial.print(':');
  my_serial.print(now.minute(), DEC);
  my_serial.print(':');
  my_serial.print(now.second(), DEC);
  my_serial.println();
}
