#include <iostream>
using namespace std;

int main()
{
    int i , j , n , k , c;
    char ch = 'A';

    cout << "Enter A Number : ";
    cin >> n;
    c=n;
    for (i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            cout << "  "; 
        }
        for(k=c;k>0;k--)
        {
            cout << ch << " ";
        }
        cout << endl;
        ch++;
        c--;
    }
}