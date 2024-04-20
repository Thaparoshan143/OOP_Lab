#pragma once

#include<iostream>

class Student
{
    private:
    char *name;
    int roll_no;
    char *depart;

    public:
    Student();
    Student(const char *n, int r,const char *d);
    Student(Student &s);
    int publicValue;

    void SetInfo(const char *n, int r, const char *d);
    void DisplayInfo();

    private:
    void assignAttribute(const char *n, int r, const char *d);
    int getCharSize(const char *s);
    void copyString(char *d, char *s, int size);
};