#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> list1={12,23,34};
    
    cout<<"list1.front(): "<<list1.front()<<endl;
    cout<<"list1.back(): "<<list1.back()<<endl;
    return 0;
}