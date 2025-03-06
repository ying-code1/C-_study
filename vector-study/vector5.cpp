#include<iostream>
#include<vector>

using namespace std;

void vectorout(vector<int> &a)
{
    for(size_t i=0;i<a.size();i++)
    {
        cout<<a[i]<<"  ";
    }
    cout<<endl;
}
int main()
{
    vector<int> array;
    array.push_back(100);
    array.push_back(200);
    array.push_back(300);
    array.push_back(300);
    array.push_back(300);
    array.push_back(400);
    array.push_back(500);
    vector<int>::iterator pos;
    for(pos=array.begin();pos<array.end();pos++)
    {
        if(*pos==300)
        {
            array.erase(pos);
        }
    }
    vectorout(array);
    return 0;
}