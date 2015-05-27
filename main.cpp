#include <iostream>
#include <vector>

#include "Person.h"
#include "StudentIn.h"
#include "ProfessorIn.h"

using namespace std;

int main(int argc, const char * argv[]) {
  vector<Person*> Personen;

  Personen.push_back(new StudentIn("Risse", "Felicitas", "635374"));
  Personen.push_back(new ProfessorIn("Phillippsen", "Nele", "Datenbanken"));
  Personen.push_back(new StudentIn("Spillner", "Julian", "123429"));

  for(size_t i = 0; i < Personen.size(); i++)
    cout << Personen[i]->getVorname() << endl;

  for(size_t i = 0; i < Personen.size(); i++)
    cout << Personen[i]->toString() << endl;

  return 0;
}
