#include <iostream>
using namespace std;
int main(){
    int n,x,y,a=0,b=0,ans=0;
    int l[n*2];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        a+=x;
        a-=y;
        if(a*b<0){
            ans+=1;
        }
        if(a!=0){
            b=a;
        }
    }
    cout<<ans;
}