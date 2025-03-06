#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v3;
    v3.push_back(10);
    v3.push_back(11);
    v3.push_back(12);
    v3.push_back(13);
    v3.push_back(14);
    cout<<v3.size()<<endl;
    cout<<v3.capacity()<<endl;
    v3.resize(4);
    for(size_t i=0;i<v3.size();i++)
    {
        cout<<v3[i]<<"  ";
    }
    cout<<endl;
    cout<<v3.size()<<endl;
    cout<<v3.capacity()<<endl;

    cout<<"----------------------------"<<endl;

    v3.reserve(100);
    cout<<v3.size()<<endl;
    cout<<v3.capacity()<<endl;
    v3.reserve(50);
    cout<<v3.size()<<endl;
    cout<<v3.capacity()<<endl;

    cout<<"-------------------------------"<<endl;
    size_t sz;
    vector<int> foo;
    sz=foo.capacity();
    cout<<"making foo grow:\n";
    for(int i=0;i<100;i++)
    {
        foo.push_back(i);
        if(sz!=foo.capacity())
        {
            sz=foo.capacity();
            cout<<"capacity changed:"<<sz<<endl;
        }
    }

    return 0;
}