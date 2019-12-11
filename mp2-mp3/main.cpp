#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>
#include <vector>
#include <list>
using namespace std;

#include "Fraction.h"

vector<Fraction> sortVector(vector<Fraction> data, int count)
{
	for (int x = 0; x < count; x++)
	{
		for (int y = x + 1; y < count; y++)
		{
			if (data[x] > data[y])
			{
				Fraction t = data[x];
				data[x] = data[y];
				data[y] = t;
			}
		}
	}
  return data;
}

bool compareFractionForList(Fraction a, Fraction b)
{
  return a < b;
}

bool fractionDuplicate(Fraction a, Fraction b)
{
	return a == b;
}

vector<Fraction> merge(vector<Fraction> fVector, list<Fraction> fList)
{
	vector<Fraction> merged = fVector;

	for (const Fraction & f : fList)
	{
		merged.push_back(f);
	}

	return sortVector(merged, merged.size());
}

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

  vector<Fraction> sortedVector = sortVector(fractionVector, fractionVector.size());
  cout << "Fractions to vector sorted: \n";
  for (vector<Fraction>::iterator vectorIt = sortedVector.begin(); vectorIt != sortedVector.end(); ++vectorIt)
		vectorIt->Print();

  cout << "--------------------------- \n";

  ifstream listFile("FractsToList.txt");

  string line2;
  while(getline(listFile, line2)) {
    istringstream is(line2);
    Fraction f2;
    is >> f2;
    fractionList.push_back(f2);
  }

  fractionList.sort(compareFractionForList);
  cout << "Fractions to list sorted: \n";
  for (list<Fraction>::iterator listIt = fractionList.begin(); listIt != fractionList.end(); ++listIt)
    listIt->Print();

  cout << "------------------------- \n";

	vector<Fraction> allFractions = merge(sortedVector, fractionList);

	allFractions.erase(unique(allFractions.begin(), allFractions.end(), fractionDuplicate), allFractions.end());

	cout << "Fractions from list and vector merged & sorted, w/ no duplicates: \n";
	for (vector<Fraction>::iterator allIt = allFractions.begin(); allIt != allFractions.end(); ++allIt)
    allIt->Print();

	cout << "------------------------- \n";
	return 0;
}
