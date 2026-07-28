#include <bits/stdc++.h>
using namespace std;




int main() {
    int t;
   cin>>t;
   while(t--){
    
    
     int c1;
     cin>>c1;
      int a[c1];
     for( int i=0;i<c1;i++){
        cin>>a[i];
     } 
   sort(a,a+c1);
   cout<<a[c1-1]+1-a[0]<<"\n";
   cout<<"Bla bla"<<"\n";

   }



    return 0;
}