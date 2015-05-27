#ifndef PERSON_H
#define PERSON_H

#include <iostream>

using namespace std;

class Person {
public:
   Person(string Vorname, string Nachname);
   virtual string toString()    { return Vorname + " " + Nachname; };
   virtual string getNachname() { return Nachname; };
   virtual string getVorname()  { return Vorname; };
protected:
   string Nachname;
   string Vorname;
};

#endif // PERSON_H
