#include<iostream>
#include<list>

int main()
{
    std::list<int> mylist={1,2,3,4,5,6,7};

    auto it=std::next(mylist.begin(),3);
    mylist.erase(it);
    auto first=std::next(mylist.begin(),1);
    auto last=std::next(mylist.begin(),4);

    for(auto &e:mylist)
    {
        std::cout<<e<<" ";
    }
    std::cout<<std::endl;
    mylist.clear();
    std::cout<<" size of mylist after clear: "<<mylist.size()<<std::endl;
    return 0;

}