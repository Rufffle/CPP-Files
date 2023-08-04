#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
#include "timeStamp.h"

using namespace std;

int main()
{
    SortedType <timeStamp> stack;
    timeStamp timestamp;

    cout << "Enter the timestamps: " << endl;

    for(int i=0; i<5; i++){
        cin >> timestamp;
        stack.InsertItem(timestamp);
    }

    timestamp = timeStamp(25, 36, 17);
    stack.DeleteItem(timestamp);

    cout << endl << "The list of the times are: " << endl;

    for(int i=0; i < stack.LengthIs(); i++){
        stack.GetNextItem(timestamp);
        cout << timestamp << endl;
    }

    return 0;
}
