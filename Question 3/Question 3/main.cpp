#include <iostream>
#include "quetype.h"

using namespace std;

int main()
{
    QueType<int> queueType;
    //bool status = queueType.IsEmpty();
    //PropertiesEmpty(status);

    queueType.Enqueue(1);
    queueType.Enqueue(2);
    queueType.Enqueue(3);
    queueType.Enqueue(4);

    int item;

    queueType.reverse();

    queueType.Dequeue(item);
    cout << item << " ";
    queueType.Dequeue(item);
    cout << item << " ";
    queueType.Dequeue(item);
    cout << item << " ";
    queueType.Dequeue(item);
    cout << item << " ";

    return 0;
}
