#include <iostream>
#include<conio.h>
using namespace std;

class student
{
    private:
        string name;
    public:
        void setName(string x)
        {
            name = x;
        }
        string getName()
        {
            return name ;
        }
};
int main()
{
    student s1;
    s1.setName ("Nirob");
    cout << s1.getName();
    getch();
}