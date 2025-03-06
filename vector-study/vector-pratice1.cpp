//力扣118题杨辉三角
#include<iostream>
#include<vector>

using namespace std;

class Solution{
    public:
    vector<vector<int>> generate(int numrows){
        vector<vector<int>> vv;
        vv.resize(numrows);
        for(size_t i=0;i<vv.size();i++)
        {
            vv[i].resize(i+1,0);
            vv[i][0]=vv[i][vv[i].size()-1]=1;
        }
        for(size_t i=2;i<vv.size();i++){
            for(size_t j=1;j<vv[i].size()-1;j++){
                vv[i][j]=vv[i-1][j-1]+vv[i-1][j];
            }
        }

    }
};