
5
54
543
5432
54321
543210
54321
5432
543
54
5


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(i<n/2){
            int x=n/2;
            for(int j=n/2;j>(n/2)-i-1;j--){
                cout<<x--;
            }
        }
        else{
            int x=n/2;
            for(int k=n;k>i;k--){
                cout<<x--;
            }
        }
        cout<<"\n";
    }
    return 0;
}