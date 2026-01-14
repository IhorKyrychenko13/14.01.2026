#include <iostream>
#include "Catalogue.h"
int main()
{
	Catalogue catalog;

	catalog.addEddition(shared_ptr<Edition>(new Book("C++", "StrausTroop", true, 2000, "Ranok")));
	catalog.addEddition(shared_ptr<Edition>(new Magazine("Nature", "World", true, 2026, 1)));
	catalog.addEddition(shared_ptr<Edition>(new TextBook("Math", "Noname", true, 2026, "Ranok", 11)));
	catalog.showCatalogue();
}