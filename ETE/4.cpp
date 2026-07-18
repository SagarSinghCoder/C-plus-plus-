#include<iostream>

using namespace std;

class Pattern{
    public :

    void diamond(int rows){
            for(int i =1;i <= rows;i++){
                for(int j =1;j <= rows - i;j++){
                    cout<<" ";
                }
            for(int k =1;k <= (2*i-1); k++){
                cout<<"*";
            }
            cout<<endl;
        }
            for(int i = rows -1;i >= 1;i--){
                for(int j =1;j <= rows - i;j++){
                    cout<<" ";
                }
                for(int k = 1;k <= (2*i-1);k++){
                    cout<<"*";
                }
                cout<<endl;
            }
    }
};

int main(){
    Pattern p;
    
    int rows;
    cout<<"Enter rows : ";
    cin>>rows;
    p.diamond(rows);
    return 0;
}