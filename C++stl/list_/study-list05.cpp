#include<iostream>
#include<list>

int main()
{
    std::list<int> mylist={3,4,5,6,7};
    mylist.push_front(1);
    mylist.push_front(2);
    mylist.push_back(8);
    for(auto& e:mylist)
    {
        std::cout<<e<<" ";
    }
    std::cout<<std::endl;

    mylist.pop_front();
    mylist.pop_back();
    for(auto& e:mylist)
    {
        std::cout<<e<<" ";
    }
    std::cout<<std::endl;

    std::cout<<"------------insert------------"<<std::endl;
    std::list<int>::iterator it=std::next(mylist.begin());
    mylist.insert(it,22);
    std::list<int> newelements={33,44,55};
    it=std::next(mylist.begin(),2);
    mylist.insert(it,newelements.begin(),newelements.end());
    for(auto&e:mylist)
    {
    std::cout<<e<<" ";
    }
    std::cout<<std::endl;

    
}