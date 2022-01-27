/******************************************************************************

1.	Write a program to return the maximum occurring character in the input string, 
    e.g., if the input string is "Java" then the function should return 'a'.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
char max_occ(string str){
    map<char,int>m;
    for(int i=0;i<str.size();i++){
        m[str[i]]++;
    }
    vector<pair<char,int>>v;
    for(auto& it : m){
        v.push_back(it);
    }
    sort(v.begin(),v.end(), [](pair<char,int>&a, pair<char,int>&b){
    return a.second>b.second;
    });
   
    auto it=v.begin();
    return it->first;
}
int main()
{
    string str;
    char max;
    cin>>str;
    max=max_occ(str);
    cout<<max;
    return 0;
}