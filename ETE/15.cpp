#include<iostream>

using namespace std;

class Matrix{
private :
int mat[2][2];

public :
     void InputMatrix(){
        cout<<"Enter the matrix : ";
        for(int i = 0;i < 2;i++){
            for(int j = 0;j < 2;j++){
              cin>>mat[i][j];
            }
        }
     }

     void DisplayMatrix(){
        for(int i =0;i <2 ;i++){
            for(int j =0;j < 2;j++){
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
     }
     int getElement(int i,int j){
        return mat[i][j];
     }

     void setElement(int i,int j,int value){
        mat[i][j] = value;
     }
};

class MatrixOperation : public Matrix{
    public:
           void add(Matrix m1,Matrix m2){
            cout<<"Additon of matrix is : ";
            for(int i = 0;i < 2;i++){
                for(int j = 0;j < 2;j++){
                    int sum = m1.getElement(i,j) + m2.getElement(i,j);
                    cout<<sum<<" ";
                }
                cout<<endl;
            }
           }

           void subtract(Matrix m1,Matrix m2){
            cout<<"Subtraction of matrix is : ";
            for(int i = 0;i < 2;i++){
                for(int j = 0;j < 2;j++){
                    int sub = m1.getElement(i,j) - m2.getElement(i,j);
                    cout<<sub<<" ";
                }
                cout<<endl;
            }
           }

           void Multiply(Matrix m1,Matrix m2){
            cout<<"Multiplication of matrix is : ";
            for(int i = 0;i < 2;i++){
                for(int j=0;j < 2;j++){
                    int product = 0;
                    for(int k = 0;k < 2;k++){
                        product += m1.getElement(i,k) * m2.getElement(k,j);
                    }
                    cout<<product<<" ";
                }
                cout<<endl;
            }
           }
};

int main(){
    Matrix m1,m2;
    MatrixOperation result;

    cout<<"Matrix 1 : "<<endl;
    m1.InputMatrix();

    cout<<"Matrix 2 : "<<endl;
    m2.InputMatrix();

    result.add(m1,m2);
    result.subtract(m1,m2);
    result.Multiply(m1,m2);

    return 0;
}