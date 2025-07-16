
#include <iostream>

using namespace std;

int CalcAge(int year);
void ConfirmAge();
void EntryInformation();

string Fname, Lname;
int Age;
int CurYear = 2025;

int main()
{
    EntryInformation();
    ConfirmAge();

    return 0;
}


int CalcAge(int year)
{
    int age = CurYear - year;
    return age;
}

void ConfirmAge()
{
    if (Age >= 18)
    {
        cout << "all done";

    }
    else
    {
        cout << "under age";
    }

}

void EntryInformation()
{
    cout << "enter your name: ";
    cin >> Fname;
    cout << "enter your last name: ";
    cin >> Lname;

    int birthYear;
    cout << "enter your birth year: ";
    cin >> birthYear;
    Age = CalcAge(birthYear);
}

