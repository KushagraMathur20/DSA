/******************************************************************************

4.	Write a program to reverse a String in C/Java/Python or choice of your programming language.
    You can write either the recursive or iterative solution. For example, 
    if a given input is "abcd," then your function should return "dcba".

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int n=str.size();
    char temp;
    for(int i=0,j=n-1;i<n/2;i++,j--){
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    cout<<str;
    return 0;
}