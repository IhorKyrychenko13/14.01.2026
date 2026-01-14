#include "Book.h"

Book::Book()
{
    publisher = "underfined";
}

Book::Book(string title, string author, bool is_exist, int year, string publisher)
    :Edition(title, author, is_exist, year)
{
    this->publisher = publisher;
}

Book::~Book()
{
    cout << "Deletebook" << endl;
}

void Book::setPublisher(string publisher)
{
    this->publisher = publisher;
}

string Book::getPublisher() const
{
    return publisher;
}

void Book::showInfo() const
{
    cout << "\tBOOK" << endl;
    Edition::showInfo();
    cout << "Publisher: " << publisher << endl;
}
