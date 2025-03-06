#include<iostream>

using namespace std;
const int N=1e5+5;
int q[N];

int main()
{
    int front=0;
    int back=-1;
    q[++back]=5;
    q[++back]=6;
    q[++back]=7;
    q[++back]=8;
    q[++back]=9;
    while (front<=back)
    {
        cout<<q[front++]<<"   ";
    }
    
    
    return 0;
}