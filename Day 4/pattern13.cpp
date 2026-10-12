#include <iostream>
using namespace std;

int main()
{
    int i , j , n , k , c ,l;

    cout << "Enter A Number : ";
    cin >> n;
    c=n;
    for (i=1;i<=n;i++)
    {
        for(k=c;k>1;k--)
        {
            cout << "  ";
        }
        for(j=1;j<=i;j++)
        {
            cout << j << " "; 
        }
        for(l=i-1;l>0;l--)
        {
            cout << l << " ";
        }
        cout << endl;
        c--;
    }
}