#pragma once
#include <string>
#include "Catalogue.h"
#include <vector>
using namespace std;
class Visitor
{
	string fullName;
	vector <shared_ptr<Edition>> myCatalogue;
public:
	Visitor();
	Visitor(string fullName);
	void showInfo()const;
	void takeEdition(shared_ptr<Edition> obj);
	void returnEdition(string name);
};

