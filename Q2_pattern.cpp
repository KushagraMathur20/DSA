
#include <bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0;i<5;i++){
        for(int j=5-i-1;j>=0;j--){
            cout<<" ";
        }
        for(int k=0;k<i+1;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
