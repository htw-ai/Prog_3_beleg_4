#include <iostream>
#include "Person.h"
#include "StudentIn.h"

using namespace std;

StudentIn::StudentIn(string Vorname, string Nachname, string Matrikelnummer)
: Person(Vorname, Nachname)
{
  this->Matrikelnummer = Matrikelnummer;
}
