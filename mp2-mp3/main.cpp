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

template <class T, class U>
void printCollection(T collection, U iterator)
{
	for (iterator = collection.begin(); iterator != collection.end(); ++iterator)
		iterator->Print();
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
	vector<Fraction>::iterator vectorIt;
	printCollection<vector<Fraction>, vector<Fraction>::iterator>(sortedVector, vectorIt);

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
	list<Fraction>::iterator listIt;
	printCollection<list<Fraction>, list<Fraction>::iterator>(fractionList, listIt);

  cout << "------------------------- \n";

	vector<Fraction> allFractions = merge(sortedVector, fractionList);

	allFractions.erase(unique(allFractions.begin(), allFractions.end(), fractionDuplicate), allFractions.end());

	cout << "Fractions from list and vector merged & sorted, w/ no duplicates: \n";
	vector<Fraction>::iterator allIt;
	printCollection<vector<Fraction>, vector<Fraction>::iterator>(allFractions, allIt);

	cout << "------------------------- \n";
	return 0;
}
