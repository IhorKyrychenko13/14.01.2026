#include "Magazine.h"

Magazine::Magazine()
{
    number = 0;
}

Magazine::Magazine(string title, string author, bool isExist, int year, int number) :
    Edition(title, author, isExist, year)
{
    this->number = number;
}

Magazine::~Magazine()
{
    cout << "Deleted Magazine.\n";
}

void Magazine::setNumber(int number)
{
    this->number = number;
}

int Magazine::getNumber() const
{
    return number;
}

void Magazine::showInfo() const
{
    cout << "\tMAGAZINE\n";
    Edition::showInfo();
    cout << "Number: " << number << endl;
}