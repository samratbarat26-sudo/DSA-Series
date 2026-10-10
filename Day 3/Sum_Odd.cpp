#include<iostream>
using namespace std;

int main()
{
    int n , sum , psum , i;
    cout << "Enter The Value Of N : ";
    cin >> n;

    for(i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            psum = sum;
            sum += i;
            cout << i << " + " << psum << " = " << sum << endl;
        }
    }
    cout << "Sum of odd numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}