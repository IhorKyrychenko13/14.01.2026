#include "TextBook.h"
#include <iostream>

TextBook::TextBook() : Edition()
{
    publisher = "";
    grade = 0;
}

TextBook::TextBook(string title, string author, bool is_exist, int year, string publisher, int grade) : Edition(title, author, is_exist, year)
{
    this->publisher = publisher;
    this->grade = grade;
}

TextBook::~TextBook() {
    cout << "Deleted TextBook.\n";
}


void TextBook::setPublisher(const string& publisher)
{
    this->publisher = publisher;
}

void TextBook::setGrade(int grade)
{
    if (grade >= 1 && grade <= 11)
        this->grade = grade;
}

string TextBook::getPublisher() const
{
    return publisher;
}

int TextBook::getGrade() const
{
    return grade;
}

void TextBook::showInfo() const
{
    cout << "\nTEXTBOOK" << endl;
    Edition::showInfo();
    cout << "Publisher: " << publisher << endl;
    cout << "Grade: " << grade << endl;
}