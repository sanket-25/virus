#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"Enter your Password (max length should be 10) : ";
     int n;
     cin>>n;
    
     for(int a=0; a<9; a++){
         for(int b=0; b<9; b++){
             for(int c=0; c<9; c++){
                 for(int d=0; d<9; d++){
                     for(int e=0; e<9; e++){
                         for(int f=0; f<9; f++){
                             for(int g=0; g<9; g++){
                                 for(int h=0; h<9; h++){
                                     for(int i=0; i<9; i++){
                                         for(int j=0; j<9; j++){
                                             int val=a*pow(10, 9)+b*pow(10, 8) + c*pow(10, 7) + d*pow(10, 6)+e*pow(10, 5) + f*pow(10, 4) + g*pow(10, 3)+h*pow(10, 2) + i*pow(10, 1) + j*pow(10, 0);
                                             if(n==val){
                                                 cout<<"Your Password is : "<<n<<endl;
                                                 return 0;
                                             }
                                             else{
                                                 cout<<val<<endl;
                                             }
                                         }
                                     }
                                 }
                             }
                         }
                     }
                 }
             }
         }
     }
     
}