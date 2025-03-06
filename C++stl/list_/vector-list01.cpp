#include<iostream>
#include<list>

int main()
{
    std::list<int> mylist(5,100);
    for(const auto& element:mylist)
    {
        std::cout<<element<<" ";
    }
    std::cout<<std::endl;
    return 0;
}