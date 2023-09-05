#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a,ans=0;
    cin>>a;
    int l[a],r[a];
    for(int i=0;i<a;i++){
        cin>>l[i];
    }
    for(int i=0;i<a;i++){
        cin>>r[i];
    }
    sort(l,l+a);
    sort(r,r+a);
    for(int i=0;i<a;i++){
        ans+=l[i]*r[i];
    }
    cout<<ans;
}