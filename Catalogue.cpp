#include "Catalogue.h"

Catalogue::Catalogue()
{
	//Вивантаження з файлу
}

Catalogue::~Catalogue()
{
	//Збереження до файлу
}

void Catalogue::addEddition(Edition* obj)
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
