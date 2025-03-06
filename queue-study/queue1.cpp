#include<queue>
#include<iostream>

using namespace std;

int main()
{
    queue<int> q1;
    q1.push(4);
    q1.push(5);
    q1.push(6);
    q1.push(7);
    q1.push(8);
    q1.push(9);
    cout<<"one element:"<<q1.front()<<"       last element:"<<q1.back()<<endl;
    q1.pop();
    q1.pop();
    cout<<"one element:"<<q1.front()<<"       last element:"<<q1.back()<<endl;

    while(!q1.empty())
    {
        cout<<q1.front()<<"   ";
        q1.pop();
    } 
    cout<<endl<<q1.empty();

    return 0;
}