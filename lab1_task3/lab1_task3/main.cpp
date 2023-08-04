#include<iostream>
#include<conio.h>
using namespace std;

int main(){

    int row, col;
    cin >> row;
    int colarr[row];
    int** a = new int*[row];

    for(int i=0; i<row; i++){
        cin >> col;
        a[i] = new int[col];
        colarr[i] =col;
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<colarr[i]; j++){
            cin >> a[i][j];
        }
    }cout << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<colarr[i]; j++){
            cout << a[i][j] << " ";
        }
        cout << endl ;
    }
    delete [] a;
   getch ();

}
