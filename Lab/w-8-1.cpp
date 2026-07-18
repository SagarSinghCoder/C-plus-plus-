#include <iostream> 
using namespace std;

class Matrix { 
protected: 
 int mat[2][2]; 
public: 

 void inputMatrix() { 
 cout << "Enter 4 elements for 2x2 matrix:\n";
 for (int i = 0; i < 2; i++)
 for (int j = 0; j < 2; j++)
 cin >> mat[i][j];
 } 

 void displayMatrix(){
    for(int i = 0;i < 2;i++){
        for(int j =0;j <2;j++){
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

class MatrixOperations : public Matrix{
    public :
    void add(Matrix m1,Matrix m2){
        cout<<"\n Result of Addition : \n";
        for(int i =0;i < 2;i++){
            for(int j = 0;j < 2;j++){
                int sum = m1.getElement(i,j)+m2.getElement(i,j);
                cout<<sum<<" ";
            }
            cout<<endl;
        }
    }

    void multiply(Matrix m1,Matrix m2){
        cout<<"\n Result of Multiplication : \n";
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                int product = 0;
                for(int k = 0;k<2;k++){
                product = product + m1.getElement(i,k) * m2.getElement(k,j);
                }
                cout<<product<<" ";
            }
            cout<<endl;
        }
    }
};


int main(){
    Matrix m1,m2;
    MatrixOperations result;

    cout<<"Matrix 1 : \n";
    m1.inputMatrix();

    cout<<"Matrix 2 : \n";
    m2.inputMatrix();

    result.add(m1,m2);
    result.multiply(m1,m2);
    
    return 0;
}