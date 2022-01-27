/******************************************************************************

2.	Write a program to remove all the duplicate characters from a given 
    input String, like, if the given String is "Java" then the output should be "Java". 
    The second or further occurrence of duplicates should be removed.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str,s;
    cin>>str;
    int n=str.length();
    for(int i=0;i<n;i++){
        char c=str[i];
        auto found=s.find(c);
        if(found==string::npos){
            s+= c;
        }
    }
    cout<<s;
    return 0;
}
