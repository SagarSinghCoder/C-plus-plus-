#include<iostream>

using namespace std;

class finder{
    public :

    int Second(int arr[],int n){
        int max1 = arr[0],max2 = -1;

        for(int i =  1;i < n;i++){
            if(arr[i] > max1){
                max2 = max1;
                max1 = arr[i];
            }else if(arr[i] > max2 && arr[i] != max1){
                max2 = arr[i];
            }
        }
        return max2;
    }
};

int main(){
    finder f1;

    int arr[] = {1,56,89,63,74,52};
    int n = sizeof (arr)/sizeof (arr[0]);

    int result = f1.Second(arr,n);

    cout<<"Second Number is : "<<result<<endl;

    return 0;
}