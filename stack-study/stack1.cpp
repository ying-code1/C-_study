#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> str;
    str.push(1);
    str.push(2);
    str.push(3);
    str.push(4);
    str.push(5);
    str.push(6);
    if(!str.empty())
    {
        cout<<str.top()<<"  "<<str.size()<<endl;
    }

    str.pop();
    str.pop();
    while(!str.empty())
    {
        int temp=str.top();
        cout<<"str value=:"<<temp<<endl;
        str.pop();
    }

    
    return 0;
}
