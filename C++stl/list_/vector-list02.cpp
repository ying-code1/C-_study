#include<iostream>
#include<list>

int main()
{
    std::list<int> mylist;

    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);

    for(auto &e:mylist)
    {
        std::cout<<e<<" ";
    }
    std::cout<<std::endl;
    return 0;

}