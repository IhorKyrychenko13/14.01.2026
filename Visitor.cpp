#include "Visitor.h"

Visitor::Visitor()
{
	fullName = "underfined";
}

Visitor::Visitor(string fullName)
{
	this->fullName = fullName;
}

void Visitor::showInfo()const {
	cout << "Visitor: " << fullName << endl;
	for (auto item : myCatalogue) {
		cout << "\t" << item->getTitle() << endl;
	}
}

void Visitor::takeEdition(shared_ptr<Edition> obj)
{
	if (obj != nullptr) {
		obj->setIsExist(false);
		myCatalogue.push_back(obj);
	}
}

void Visitor::returnEdition(string name)
{
	for (int i = 0; i < myCatalogue.size(); i++) {
		if (myCatalogue[i]->getTitle() == name) {
			myCatalogue[i]->setIsExist(true);
			myCatalogue.erase(myCatalogue.begin() + i);
			break;
		}
	}
}
