#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);
    for(int i=0;i<v1.size();i++)
    {
        v1[i]++;
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    v1.pop_back();
    for(auto &e:v1)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    auto it=find(v1.begin(),v1.end(),4);
    cout<<*it<<endl;
    v1.erase(it);
    for(auto& e:v1)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    v1.insert(v1.begin()+2,20);
    v1.insert(v1.begin()+2,4,10);

    for(auto &e:v1)
    {
        cout<<e<<" ";
    }
    cout<<endl;

    vector<int> v2(5,1);
    cout<<"before swap v1"<<endl;
    for(auto& e:v1)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    cout<<v1.capacity()<<endl;
    cout<<"before swap v2"<<endl;
    for(auto& e:v2)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    cout<<v2.capacity()<<endl;

    v1.swap(v2);
    cout<<"after swap v1"<<endl;
    for(auto& e:v1)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    cout<<v1.capacity()<<endl;

    cout<<"after swap v2"<<endl;
    for(auto& e:v2)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    cout<<v2.capacity()<<endl;

    return 0;
}