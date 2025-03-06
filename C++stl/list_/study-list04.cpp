#include<iostream>
#include<list>
#include<vector>

int main()
{
    std::vector<int> vec{1,2,3,4,5};

    std::list<int> mylist(vec.begin(),vec.end());
    std::list<int> mylist01(vec.begin(),vec.begin()+3);

    for(auto &e:mylist)
    {
        std::cout<<e<<" ";
    }
    std::cout<<std::endl;
    for(auto &e:mylist01)
    {
        std::cout<<e<<" ";
    }
    std::cout<<std::endl;
    return 0;
}