#include <iostream>
#include "Person.h"
#include "ProfessorIn.h"

using namespace std;

ProfessorIn::ProfessorIn(string Vorname, string Nachname, string Lehrgebiet)
: Person(Vorname, Nachname)
{
  this->Lehrgebiet = Lehrgebiet;
}
