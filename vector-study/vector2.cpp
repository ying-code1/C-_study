#include<iostream>
#include<vector>

using namespace std;

void out(vector<int> &a)
{
    for(size_t i=0;i<a.size();i++)
    {
        cout<<"     "<<a[i]<<" ";
    }
     cout<<"\n";
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    vector<int>::iterator it=v.begin();
    while(it !=v.end())
    {
        (*it)++;
        cout<<*it<<endl;
        it++;
    }

    vector<int>::reverse_iterator rit=v.rbegin();
    while(rit !=v.rend())
    {
        cout<<*rit<<endl;
        rit++;
    }

    vector<int> a(5,1);
    out(a);
    a.resize(10,2);
    out(a);
    a.resize(3,3);
    out(a);
    return 0;
}