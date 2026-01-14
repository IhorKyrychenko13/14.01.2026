#pragma once
#include "Edition.h"
#include <string>

using namespace std;

class TextBook : public Edition
{
protected:
    string publisher;
    int grade;

public:
    TextBook();
    TextBook(string title, string author, bool is_exist, int year,
    string publisher, int grade);
    ~TextBook();


    void setPublisher(const string& publisher);
    void setGrade(int grade);


    string getPublisher() const;
    int getGrade() const;

    void showInfo() const override;
};