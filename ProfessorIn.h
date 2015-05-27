#ifndef PROFESSORIN_H
#define PROFESSORIN_H

#include <iostream>
#include "Person.h"

using namespace std;

class ProfessorIn: public Person
{
public:
   ProfessorIn(string Vorname, string Nachname, string Lehrgebiet);
   string toString()      { return "ProfessorIn " + Vorname + " " + Nachname + ", Lehrgebiet " + Lehrgebiet; };
   string getLehrgebiet() { return Lehrgebiet; };
private:
   string Lehrgebiet;
};

#endif
