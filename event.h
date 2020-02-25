//Unit7_Ayala_Task_X 
//Lucy Ayala 2-24-2020
//STRUCTs C++

#ifndef EVENT_H
#define EVENT_H
#include <sstream>

struct event 
{
  string eventName;
  timeOfDay eventTime;
  appDate eventDate;
  bool isUrgent;
  //Returns the string representation of this Event. The format of string to print dates and times as we imagine them
  string toString()
  {
    short dayOfMonth = eventDate.dayOfMonth;
    short month = eventDate.month;
    int year = eventDate.year;
    short hour = eventTime.Hour;
    short minute = eventTime.Minute;
    short second = eventTime.Second; 

    stringstream ss;
    ss << month << "/" << dayOfMonth << "/" << year;

    stringstream ss2;
    ss2 << hour << ":" << minute << ":" << second;

    string date = ss.str();
    string time = ss2.str();

    return ("Date: " + date + "\nTime: " + time);
  }
};

ostream& operator << (ostream& outs, event* obj)
{
  return outs << obj ->toString ();
}
#endif