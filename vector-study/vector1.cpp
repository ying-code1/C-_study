#include<vector>
#include<iostream>

using namespace std;

int main()
{
    vector<int> a;
    vector<double> b;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);

    for(size_t i=0;i<a.size();i++)
    {
        a[i]++;
        cout<<a[i]<<endl;
    }
    return 0;
}

