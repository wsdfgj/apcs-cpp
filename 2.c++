#include <iostream>
using namespace std;
int main(){
    int n,m,k,ans;
    cin>>n>>m>>k;
    int l[k][n/k+1];
    for(int i=0;i<n;i++){
        cin>>l[i%k][i/k];
    }

    for(int i=0;i<k;i++){
        ans=0;
        for(int j=0;j<sizeof(l[i]);j++){
            for(int o=0;o<m;o++){
                if(l[i][j]==o){
                    ans+=1;
                }
            }
        }
        cout<<ans;
    }
}