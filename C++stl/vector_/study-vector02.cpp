#include<iostream>
#include<vector>

using namespace std;

void test_space_expand();
void study_vector_interfor();
int main()
{
    int a[]={10,9,8,7,6,5,4,3,2,1};
    vector<int>v1(a,a+10);

    for(auto& e:v1)
    {
        cout<< e<<" ";
    }
    cout<<endl;

    vector<int>::iterator it=v1.begin();
    while (it !=v1.end())
    {
        cout<<*it<<" ";
        it++;
        /* code */
    }
    cout<<endl;
    
    vector<int>::reverse_iterator rit=v1.rbegin();
    while (rit!=v1.rend())
    {
        cout<<*rit<<" ";
        rit++;
    }
    cout<<endl;
    test_space_expand();
    study_vector_interfor();

    return 0;
}
void test_space_expand()
{
    size_t cp=0;
    vector<int> v2;
    cp=v2.capacity();
    for(int i=1;i<100;i++)
    {
        v2.push_back(i);
        if(cp!=v2.capacity())
        {
            cp=v2.capacity();
            cout<<"capacity changed: "<<cp<<endl;
        }
    }
}
void study_vector_interfor()
{
    vector<int> v3(10,1);
    cout<<"how much data: "<<v3.size()<<endl;
    cout<<"how much capacity: "<<v3.capacity()<<endl;
    cout<<"empty: "<<v3.empty()<<endl;
    v3.clear();
    cout<<"how much data: "<<v3.size()<<endl;
    cout<<"how much capacity: "<<v3.capacity()<<endl;
    cout<<"empty: "<<v3.empty()<<endl;
    v3.resize(15,2);
    cout<<"how much data: "<<v3.size()<<endl;
    cout<<"how much capacity: "<<v3.capacity()<<endl;
    cout<<"empty: "<<v3.empty()<<endl;
    v3.resize(9,1);
    v3.reserve(100);
    cout<<"how much data: "<<v3.size()<<endl;
    cout<<"how much capacity: "<<v3.capacity()<<endl;
    cout<<"empty: "<<v3.empty()<<endl;
}