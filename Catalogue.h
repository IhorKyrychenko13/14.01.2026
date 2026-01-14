#pragma once
#include <iostream>
#include <set>
#include <algorithm>
#include <memory>
#include "Book.h"
#include "Magazine.h"
#include "TextBook.h"
using namespace std;

struct CmpEdition {
	bool operator()(const shared_ptr<Edition> left, const shared_ptr<Edition> right) const {
		if (left->getYear() == right->getYear()) {
			return left->getTitle() < right->getTitle();
		}
		return left->getYear() < right->getYear();
	}
};

class Catalogue
{
	set<shared_ptr<Edition>, CmpEdition> cat;

public:
	Catalogue();
	~Catalogue();

	void addEddition(shared_ptr<Edition> obj);
	void showCatalogue();
	shared_ptr<Edition> operator[](string name) const;
};

