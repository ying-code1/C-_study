#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void vectorout(vector<int> &a)
{
    for(auto &x:a)
    cout<<x<<"  ";
    cout<<endl;
}

void vectorfind(vector<int> &b,int c)
{
    vector<int>::iterator fit;
    fit=find(b.begin(),b.end(),c);
    if(fit!=b.end())
    {
        cout<<"find"<<"   "<<&(*fit)<<"   "<<*fit<<endl;
    }
    else
    cout<<"no find"<<endl;

}

void vectorfindinsert(vector<int> &d,int c)
{
    vector<int>::iterator pos;
    pos=find(d.begin(),d.end(),c);
    if(pos !=d.end())
    {
        d.insert(pos,80);
    }
    vectorout(d);

}

void vectorfinderase(vector<int> &e,int c)
{
    vector<int>::iterator pos;
    pos=find(e.begin(),e.end(),c);
    if(pos!=e.end())
    {
        e.erase(pos);
    }
    vectorout(e);
}

int main()
{
    vector<int> v4;
    v4.push_back(10);
    v4.push_back(20);
    v4.push_back(30);
    v4.push_back(40);
    v4.push_back(40);
    v4.push_back(50);
    vectorout(v4);
    v4.pop_back();
    v4.pop_back();
    vectorout(v4);
    cout<<"--------------------------"<<endl;

    cout<<"one test"<<endl;
    vectorfind(v4,30);
    cout<<"two test"<<endl;
    vectorfind(v4,40);
    cout<<"three test"<<endl;
    vectorfind(v4,50);
    
    cout<<"-------------------------"<<endl;
    v4.insert(v4.begin()+1,111);
    vectorout(v4);
    vectorfindinsert(v4,30);
    vectorfinderase(v4,20);

    cout<<"--------------------------"<<endl;
    vector<int> temp;
    temp.push_back(1);
    temp.push_back(2);
    temp.push_back(3);
    temp.push_back(4);
    temp.push_back(5);
    temp.push_back(6);
    temp.push_back(7);
    v4.swap(temp);
    cout<<"v4 contains: "<<endl;
    vectorout(v4);
    cout<<"temp contains: "<<endl;
    vectorout(temp);
    return 0;
}