#include<bits/stdc++.h>
using namespace std;
/*macros*/
#define ll long long
#define dou double
#define str string
/*macroend*/

int main(){
    int t(0); 
    cin>>t;
    while(t--){     
        int a[3];
        for(int i; i<3; i++){ 
            cin>>a[i];
            }
        sort(a,a+3);
        cout<<a[1]<<endl;
    }
}