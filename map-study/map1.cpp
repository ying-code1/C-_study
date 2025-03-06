#include<map>
#include<iostream>
#include<string>

using namespace std;

void for_each(map<int ,string>& map1)
{
    map<int ,string>::iterator itr;
    cout<<"one way"<<endl;
    for(itr=map1.begin();itr!=map1.end();itr++)
    {
        cout<<"first"<<itr->first<<"   second"<<itr->second<<endl;
    }

    cout<<" another way"<<endl;

    itr=map1.begin();
    while(itr!=map1.end())
    {
        cout<<"first"<<itr->first<<"   second"<<itr->second<<endl;
        itr++;
    }
}
void reverse_for_each(map<int ,string>& map1)
{
    map<int ,string>::reverse_iterator itr;
    itr=map1.rbegin();
    cout<<" reverse_for_each"<<endl;
    while (itr!=map1.rend())
    {
        cout<<"first"<<(*itr).first<<"    second"<<(*itr).second<<endl;
    }
}

void add(map<int,string>& map1)
{
    cout<<"  add"<<endl;
    map1[333]=string("luo_ver2");
    map1[444]=string("xingzeng");
    map1.insert(make_pair(555,"john"));
    pair<map<int,string>::iterator,bool> insert_pair;
    insert_pair=map1.insert(make_pair<int,string>(666,"xingzengzeng"));
    if(insert_pair.second==false)
    {
        cout<<" first:"<<insert_pair.first->first<<"     second: "<<insert_pair.first->second<<endl;
    }
}

void my_find(map<int,string>& map1,int x)
{
    cout<<" find:"<<endl;
    map<int,string>::iterator itr;
    itr=map1.find(x);
    if(itr!=map1.end())
    {
        cout<<"ket: "<<itr->first<<"   value: "<<itr->second<<endl;
    }else{
        cout<<" element not find"<<endl;
    }
}

void del(map<int ,string>& map1,int x)
{
    cout<<"del:"<<endl;
    map<int,string>::iterator itr;
    itr=map1.find(x);
    if(itr!=map1.end())
    {
        map1.erase(itr);
        cout<<"delete success"<<endl;
    }


}

int main()
{
    map<int,string> people;
    people[333]=string("zhangsan");
    people.insert(make_pair<int,string>(222,"zhangliu"));

    for_each(people);
    reverse_for_each(people);
   // add(people);
    //for_each(people);
    //reverse_for_each(people);
    //my_find(people,222);
    //my_find(people,111);

    //del(people,222);
    //del(people,666);
    //del(people, 777);
    for_each(people);
    cout<<" size:"<<people.size()<<" ,empty: "<<people.empty()<<endl;

    people.clear();
    cout<<"clear after,\n"<<" size: "<<people.size()<<", empty"<<people.empty()<<endl;



}