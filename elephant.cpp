#include<bits/stdc++.h>
using namespace std;
int main(){
for(int i=1;i<=5;i++)
{
    for(int j=1;j<=5;j++)
    {
        int n;
        cin>>n;
        if(n==1){
            cout<<abs(i-3)+(j-3)<<endl;
        }
    }
}

return 0;
}
