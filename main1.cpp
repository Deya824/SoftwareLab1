#include<iostream> 
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
     cout<<"Hello world";

     cout<< "Merge dekhay na ken bruh wth";
   }

    return 0;
}