#include<stdio.h>

int lcmCalculate(int a, int b)//the value of n1 and n2 is passing through a and b
{
    static int m = 0;
    //Increments m by adding max value to it
    m += b;
//  If found a common multiple then return the m.
    if((m % a == 0) && (m % b == 0))
    {
        return m;
    }
    else
    {
        lcmCalculate(a, b);//calling the function lcmCalculate itself
    }
}

int main(){
    return 0;
}