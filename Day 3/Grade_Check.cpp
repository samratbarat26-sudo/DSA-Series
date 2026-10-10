#include<iostream>
using namespace std;

int main()
{
    int sub1, sub2, sub3;
    cout << "Enter marks for subject 1: ";
    cin >> sub1;
    cout << "Enter marks for subject 2: "; 
    cin >> sub2;
    cout << "Enter marks for subject 3: ";
    cin >> sub3;
    int total = sub1 + sub2 + sub3;
    float avg = total / 3.0;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << avg << endl;

    if(avg >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else if(avg < 90 && avg >= 80)
    {
        cout << "Grade: B" << endl;
    }
    else if(avg < 80 && avg >= 70)
    {
        cout << "Grade: C" << endl;
    }
    else
    {
        cout << "Grade: D" << endl;
    }



    return 0;
}