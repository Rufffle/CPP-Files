#include<iostream>
#include "stacktype.h"
using namespace std;
bool isBalanced(string equation)
{
    StackType<char> s;
    char ch;
    string newEquation;
    bool status = true, checkCorresponding=true;
    int closeP=0,OpenP=0;

    for (int i=0; i<equation.length(); i++)      //for each character in the expression, check conditions
    {
        //cout << i << "th is -> " << equation[i] << endl;
        if(equation[i]=='(' || equation[i]==')')
        {
            if (equation[i]=='(')      //when it is opening bracket, push into     stack
            {
                newEquation += equation[i];
                s.Push(equation[i]);
                OpenP++;
                //cout << "Item is " << i << endl;
                continue;
            }

            else if (s.IsEmpty())    //stack cannot be empty as it is not opening bracket, there must be closing bracket
            {
                closeP++;
                status = false;
                checkCorresponding = false;
            }

            else if (equation[i] == ')')
            {
                closeP++;
                ch = s.Top();
                s.Pop();
                //cout << "Its here\n";
                status = true;
            }
        }
        if(status)
        {
            newEquation += equation[i];
        }
        else
        {
            newEquation += '_';
        }
    }
    cout << "The final equation is = " << newEquation << endl;

    if(checkCorresponding==false && closeP!=OpenP)
    {
        cout << "Both properties are violated\n" << endl;
    }
    else if(checkCorresponding==false && closeP==OpenP)
    {
        cout << "\n2nd property is violated\n" << endl;
    }
    else if(checkCorresponding==true && closeP!=OpenP)
    {
        cout << "\n1st propertiy is violated\n" << endl;
    }



    if(s.IsEmpty())
    {
        return status;
    }
    else
    {
        return false;
    }
}
main()
{
    string equation = "(a+b)+(c-d)(((";

    if (isBalanced(equation))
        cout << "\nParentheses is balanced\n";
    else
        cout << "\nParentheses is not balanced\n";


}
