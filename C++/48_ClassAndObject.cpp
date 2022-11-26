#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
    public:
        int id;
        double cgpa;
};

int main()
{
    Student Alim;
    Alim.id = 981;
    Alim.cgpa = 3.50;
    cout << Alim.id << endl<< Alim.cgpa ;
    getch();
}