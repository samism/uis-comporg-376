#include<iostream>
using namespace std;

void multiplyMatrices(int A[2][2], int B[2][2], int C[2][2]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            C[i][j] = A[i] * A[j] + B[i] * B[j];
        }
    }
}

int main()
{
    int A[2][2] = {{3,7}, {5,4}};
    int B[2][2] = {{2,8}, {8, 3}};
    int C[2][2];

    multiplyMatrices(A, B, C);

    cout << C << endl;
    return 0;
}