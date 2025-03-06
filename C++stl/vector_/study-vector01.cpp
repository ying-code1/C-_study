#include<vector>
#include<iostream>
using namespace std;

int main()
{
    vector<int> v1();
    vector<int> v2(10,1);
    vector<int> v3(v2);
    int a[]={10,9,8,7,6,5,4,3,2,1};
    vector<int>v4(a,a+10);

    return 0;
}