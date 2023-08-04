#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    dynArr dynArgument(10);
    int arrSize,input,sum=0;

    cout << "Enter size : ";
    cin >> arrSize;

    dynArgument.allocate(arrSize);

    for(int i=0 ; i<arrSize ; i++)
    {
        cout << "Enter element #" << (i+1) << " - ";
        cin >> input;
        dynArgument.setValue(i,input);
        sum+=dynArgument.getValue(i);
    }
    cout<<endl;
    for(int i=0 ; i<arrSize ; i++)
        cout << dynArgument.getValue(i) << " ";

    cout << "\nSum is : " << sum;
    return 0;
}
