#include<iostream>
#include<list>

using namespace std;

template<class T>
void Print(const list<T>& my)
{
    typename list<T>::const_iterator it=my.begin();
    for(;it !=my.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;
}

int main()
{
    list<int> list1={12,23,24};
    list<int> list2(3,11);
    list<int> list3(list2);

    list<string> list4={"this","is","window"};
    list<string> list5;
    list<string> list6;
    list5=list4;
    list6.assign(3,"this");
    Print(list1);
    Print(list2);
    Print(list3);
    Print(list4);
    Print(list5);
    Print(list6);
    return 0;
}