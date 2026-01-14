#pragma once
#include <iostream>
#include <set>
#include <algorithm>
#include "Book.h"
#include "Magazine.h"
#include "TextBook.h"
using namespace std;

struct CmpEdition {
	bool operator()(const Edition* left, const Edition* right) const {
		if (left->getYear() == right->getYear()) {
			return left->getTitle() < right->getTitle();
		}
		return left->getYear() < right->getYear();
	}
};

class Catalogue
{
	set<Edition*, CmpEdition> cat;

public:
	Catalogue();
	~Catalogue();

	void addEddition(Edition* obj);
	void showCatalogue();
};

