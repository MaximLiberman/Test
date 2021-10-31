#include <iostream>

bool Prost(int x)
{
    if (x < 2)
        return false;
    for (int d = 2; d <= sqrt(x);d++)
        if (x % d == 0)
            return false;
    return true;
}

int main()
{   
    int max1 = INT_MIN;
    const int size = 3;
    int matrix[size][size] = {
        {12, 54, -5},
        {-34, 53,  -7},
        {12, 54, -5}
    };
    int min;
    int i, j;
    bool flag;

    min = matrix[0][0];
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (matrix[i][j] == matrix[i + 1][j]) {
                flag = true;
                
            }
            else{
                flag = false;
                
                break;
            }
        }
    }
    int x = 0;
    for (i = 0; i < size; i++) {
        for (j = 1; j < size; j++) {
            x = matrix[i][j];
            if (Prost(x) == true) {
                if (x > max1) {
                    max1 = x;
                }
            }
        }
    }
    int minstolb;
    int index_1;
    if (flag == false) {
        for (j = 0; j < size; j++) {
            minstolb = INT_MAX;
            for (i = 0; i < size;i++) {
               
                if (matrix[i][j] <= minstolb) {
                    minstolb = matrix[i][j];
                    index_1 = i;
                }

                
            }
            matrix[index_1][j] = max1;

        }

    }
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            std::cout << matrix[i][j]<<" ";
        }
    std::cout << "\n";
    }
    std::cout << max1;
}