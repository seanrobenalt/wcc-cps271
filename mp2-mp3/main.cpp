#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include <vector>
#include <list>
using namespace std;

#include "Fraction.h"

int main() {

  vector<Fraction> fractionVector;
  list<Fraction> fractionList;

  ifstream vectorFile("FractsToVector.txt");

  string line1;
  while(getline(vectorFile, line1)) {
    istringstream is(line1);
    Fraction f1;
    is >> f1;
    fractionVector.push_back(f1);
  }

  for (vector<Fraction>::iterator vectorIt = fractionVector.begin(); vectorIt != fractionVector.end(); ++vectorIt)
		vectorIt->Print();

  ifstream listFile("FractsToList.txt");

  string line2;
  while(getline(listFile, line2)) {
    istringstream is(line2);
    Fraction f2;
    is >> f2;
    fractionList.push_back(f2);
  }

  for (list<Fraction>::iterator listIt = fractionList.begin(); listIt != fractionList.end(); ++listIt)
    listIt->Print();

  return 0;
}
