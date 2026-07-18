#include<iostream>

using namespace std;

class Matrix{
   private :
   int n;
   int arr[10][10];

   public :

   void input(){
   cout<<"Enter the order of matrix : ";
   cin>>n;
   
   for(int i = 0;i < n;i++){
      for(int j = 0;j < n;j++){
         cin>>arr[i][j];
      }
   }
} 
    void display(){
      for(int i = 0;)
    }   
};