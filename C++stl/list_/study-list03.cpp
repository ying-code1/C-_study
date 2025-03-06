#include<iostream>
#include<list>
int main()
{
    std::list<int> originalist{1,2,3,4,5,6,7};

    std::list<int> colist(originalist);

    originalist.push_back(8);
    for(const auto &e:colist)
    {
        std::cout<<e<<" ";
    }
    std::cout<<std::endl;
    return 0;
}