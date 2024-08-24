#include<iostream>
using namespace std;
/*macros*/
#define ll long long
#define dou double
#define str string
/*macroend*/
 
int main(){
    int t(0),r(0);
    cin>>t;
    for(int i; i<t; i++){
        cin>>r;
       if(r>=1900) cout<<"Division 1"<<endl;
       if(r>=1600 && r<=1899) cout<<"Division 2"<<endl;
       if(r>=1400 && r<=1566) cout<<"Divison 3"<<endl;
       else cout<<"Division 4"<<endl;i
    }
}