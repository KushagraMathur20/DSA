
    1
   321
  54321
 7654321
987654321

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0,k=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        int x=2*i+1;
        for(int k=0;k<i+(i+1);k++){
    
            cout<<x--;
        }
       
        cout<<"\n";
    }
    return 0;
}