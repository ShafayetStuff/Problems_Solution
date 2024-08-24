#include<iostream>
using namespace std;
/*macros*/
#define ll long long
#define dou double
#define str string
/*macroend*/

int main(){
    int n(0),p,q,t(0);
    cin>>n;

    for (int i; i<n;i++){
        cin>>p>>q;
    }
    if(p<q){
        t++;
    }
    cout<<t;

}