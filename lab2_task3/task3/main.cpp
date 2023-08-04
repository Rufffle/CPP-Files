#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    int r,s,n;
    cout << "Enter row size : ";
    cin >> r;
    cout << "Enter column size : ";
    cin >> s;

    dynArr array2D(r,s);

    cout << "Enter elements - " << endl;
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<s ; j++)
        {
            cin >> n;
            array2D.setValue(i,j,n);
        }
    }
    cout << endl;
    for(int i=0 ; i<r ; i++)
    {
        for(int j=0 ; j<s ; j++)
        {
            cout << "  " << array2D.getValue(i,j);
        }
        cout << endl;
    }
    return 0;
}
