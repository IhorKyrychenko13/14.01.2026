#include "Catalogue.h"

Catalogue::Catalogue()
{
	//Вивантаження з файлу
}

Catalogue::~Catalogue()
{
	//Збереження до файлу
}

void Catalogue::addEddition(shared_ptr<Edition> obj)
{
	cat.insert(obj);
}

void Catalogue::showCatalogue()
{
	for (auto item : cat) {
		item->showInfo();
		cout << endl;
	}
}

shared_ptr<Edition> Catalogue::operator[](string name) const
{
	for (auto item : cat) {
		if (item->getTitle() == name && item->getIsExist()) {
			return item;
		}
	}
	return nullptr;
}
