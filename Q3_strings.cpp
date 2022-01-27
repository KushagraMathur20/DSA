/******************************************************************************

3.	Write a program to test if two given String is a rotation of each other or not,
    e.g. if the given String is "XYZ" and "ZXY" then your function should return true, 
    but if the input is "XYZ" and "YXZ" then return false.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

bool check(string s1, string s2){
    int n1=s1.size();
    int n2=s2.size();
    if(n1!=n2){
        return false;
    }else{
        int flag=0;
    for(int i=0,j=1;i<n1-1;i++,j++){
        if(s1[i]!=s2[j]){
            flag=1;
            break;
        }
        else{
            continue;
        }
    }
    if(s1[n1-1]!=s2[0]){
        flag=1;
    }
    if(flag==1){
        return false;
    }
    else{
        return true;
    }
    }
   
}
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    if(check(s1,s2)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}