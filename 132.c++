#include <iostream>
using namespace std;
int main(){
    int a,ll=0,big=0,l=0;
    cin>>a;
    int b[a],m[1000000];
    cin>>b[0];
    m[b[0]]=1;
    for(int r=1; r<a; r++){
        cin>>b[r];
        while(m[b[r]]==1){
            m[b[l]]=0;
            l+=1;
        }
        if(r-l>big){
            big=r-l;
            ll=l;
        }
        m[b[r]]=1;
    }
    for(int i=ll;i<=ll+big;i++){
        cout<<b[i]<<" ";
    }
}