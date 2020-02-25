//Unit7_Ayala_Task_X 
//Lucy Ayala 2-24-2020
//STRUCTs C++


#include <iostream>
#include "appDate.h"
#include "timeOfDay.h"
#include "event.h"

using namespace std;

void createEvent(timeOfDay t, appDate a, event e)
{
   short h = 0, m = 0, s = 0 , mo = 0 , d = 0;
   int y = 0, decision = 0;
    string urgent = "";
    string eName = "";

    //Populate timeOfDay
    cout << "Enter Hour: ";
    cin >> h;
    t.Hour = h; //Set the values based upon User Input

    cout << "Enter Minutes: ";
    cin >> m;
    t.Minute = m;

    cout << "Enter Second: ";
    cin >> s;
    t.Second = s;

    cout << "Enter Month: ";
    cin >> mo;
    a.month = mo;

    cout << "Enter Day: ";
    cin >> d;
    a.dayOfMonth = d;

    cout << "Enter Year: ";
    cin >> y;
    a.year =y;

    cout << "Enter Event name: ";
    cin.ignore();
    getline(cin,eName);
    e.eventName = eName;

    cout <<"Is the event urgent? (1 = yes, 2 = no: )";

    cin >> decision;
    if(decision == 1)
    {
      e.isUrgent = true;
      urgent ="yes";
    }
    else if(decision == 2)
    {
      e.isUrgent = false;
      urgent ="no";
    }
    else 
    {
      cout << "Invalid input";
    }

    //put dMain in Event eMain
    e.eventDate = a;

    //put tMain in Event eMain
    e.eventTime = t;

    //Print the Event
    cout << "\nEvent Details: " << endl;
    cout << "Event name: " << e.eventName << endl;
    cout << "\nIs urgent: " << e.isUrgent << "-->" << urgent <<endl;
    cout << e.toString(); //print the date and time calling toString()

}

int main() 
{
  //declare the instances of the STRUCT we need for this work
  event eMain;

  //Create a timOfDay to share with eMain 
  timeOfDay tMain;

  //Create a day of month to share with eMain
  appDate dMain;

  createEvent(tMain, dMain, eMain); //populate and print new event 

  return 0;
}