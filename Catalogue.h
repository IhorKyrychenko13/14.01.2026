#pragma once
#include <iostream>
#include <set>
#include <algorithm>
#include "Book.h"
#include "Magazine.h"
#include "TextBook.h"
using namespace std;

class Catalogue
{
	set<Edition*> cat;
public:
	Catalogue();
	~Catalogue();

	void addEddition(Edition* obj);
	void showCatalogue();
};

