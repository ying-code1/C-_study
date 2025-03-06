#include<iostream>
#include<list>

int main()
{
    std::list<int> mylist={1,2,3,4,5,6,7,8,9};

    std::list<int>::iterator itlist=mylist.begin();

    for(auto i=itlist;i!=mylist.end();i++)
    {
        std::cout<<*i<<" ";
    }
    std::cout<<std::endl;
}