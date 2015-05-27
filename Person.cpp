#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(string Vorname, string Nachname)
{
  this->Nachname = Nachname;
  this->Vorname  = Vorname;
}
