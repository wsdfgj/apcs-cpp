#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,ans=1;
    cin>>n;
    int l[n];
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    sort(l,l+n);
    for(int i=n-1; i>2;i--){
        if(l[i-1]+l[i-2]<=l[i]){
            continue;
        }
        else{
            ans=0;
            cout<<l[i-2]<<" "<<l[i-1]<<" "<<l[i];
            break;
        }
    }
    if(ans){
        cout<<"-1";
    }
}
