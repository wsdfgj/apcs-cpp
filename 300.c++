#include <iostream>
using namespace std;
int main() {
    int a=0,b=0,c=0,d=0,e,f,g,h;
    cin >> e;
    for(int i=0; i<e; i++){
        h=g;
        g=f;
        cin >> f;
        if(i<2){continue;}
        if(f-g>0 and g-h>0){
            if(f-g>g-h){a++;}
            else if(f-g<g-h){b++;}
        }
        else if(f-g<0 and g-h<0){
            if(f-g>g-h){c++;}
            else if(f-g<g-h){d++;}
        }
    }
    cout <<a<<' '<<b<<' '<<c<<' '<<d;
    return 0;
}