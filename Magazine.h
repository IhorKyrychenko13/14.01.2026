#pragma once
#include "Edition.h"
class Magazine :
    public Edition
{
protected:
    int number;
public:
    Magazine();
    Magazine(string title, string author, bool isExist, int year, int number);
    ~Magazine();

    void setNumber(int number);

    int getNumber()const;

    void showInfo()const override;
};