#include <iostream>
using namespace std;

class stressen{
  public:
    int multiplication(int A[2][2],int B[2][2],int C[2][2]);
};

int stressen::multiplication(int A[2][2],int B[2][2],int C[2][2]){
    
    int P = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    int Q = B[0][0] * (A[1][0] - A[1][1]);
    int R = A[0][0] * (B[0][1] - B[1][1]);
    int S = A[1][1] * (B[1][0] - B[0][0]);
    int T = B[1][1] * (A[0][0] + A[0][1]);
    int U = (B[0][0] + B[0][1]) * (A[1][0] - A[0][0]);
    int V = (A[0][1] - A[1][1]) * (B[1][0] - B[1][1]);
    
    C[0][0] = P + S - T + V;
    C[0][1] = R + T;
    C[1][0] = Q + S;
    C[1][1] = P + R - Q +V;
    
    cout<<"Matrix 3:-"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<C[i][j]<<"  ";
        }
        cout<<endl;
    }
    
}



int main() {
    
    stressen s1;
    int A[2][2],B[2][2],C[2][2];
    
    cout<<"Enter the array 1 value:-"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<i<<j<<":-";
            cin>>A[i][j];
        }
    }
    
    cout<<"Enter the array 2 value:-"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<i<<j<<":-";
            cin>>B[i][j];
        }
    }
    
    cout<<"Matrix 1:-"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    cout<<"Matrix 2:-"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<B[i][j]<<"  ";
        }
        cout<<endl;
    }
    
    s1.multiplication(A,B,C);
    

    return 0;
}