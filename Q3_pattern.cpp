
#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int k=i;k<5;k++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}