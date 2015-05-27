#ifndef STUDENTIN_H
#define STUDENTIN_H

#include <iostream>
#include "Person.h"

using namespace std;

class StudentIn: public Person
{
public:
   StudentIn(string Vorname, string Nachname, string Matrikelnummer);
   string toString()          { return "StudentIn " + Vorname + " " + Nachname + ", Mat.Nr. " + Matrikelnummer; };
   string getMatrikelnummer() { return Matrikelnummer; };
private:
   string Matrikelnummer;
};

#endif
