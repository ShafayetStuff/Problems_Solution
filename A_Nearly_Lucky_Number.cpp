#include<iostream>
using namespace std;
/*macros*/
#define ll long long
#define dou double
#define str string
/*macroend*/

/*main*/
int main(){
    ll n, c(0);
    cin>>n;


  while(n){
    if(n%10 == 4 || n%10 == 7){
        c+=1;
    }
    n= n/10;
    
  }
  if(c==4 || c==7){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
  }