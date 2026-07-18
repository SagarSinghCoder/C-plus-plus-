#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

class StringAndArray{
public:
   void ReverseString(string str){
    reverse(str.begin(),str.end());
    cout<<"Reversed string is : "<<str<<endl;
   }

   void SortArray(int arr[],int size){
        sort(arr,arr+size);
        cout<<"Sorted Array :"<<endl;
        for(int i =0;i < size;i++){
            cout<<arr[i]<<" ";
            cout<<endl;
        }
   }
};

int main(){
    StringAndArray s;
    
    string str;
    cout<<"Enter String : ";
    cin>>str;
    s.ReverseString(str);

    int arr[]={5,6,2,7,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    s.SortArray(arr,size);
    return 0;
}


