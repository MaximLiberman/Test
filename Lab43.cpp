#include <iostream> 

int main()
{
    const int size = 3;
    int matrix[size][size] = {
        {12, 45, -5},
        {-34, -6,  -7},
        {11, -34, -78}
    };
    int min;
    int i, j;
    int min_index_1, min_index_2;

    min = matrix[0][0];

    for (i = 0; i < size; i++)
        for (j = 1; j < size; j++)
            if (min > matrix[i][j])
            {
                min = matrix[i][j];
                min_index_1 = i;
                min_index_2 = j;
            }

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (matrix[i][min_index_2] < 0) {
                matrix[i][min_index_2] = 0;
            }
        }
    }
    std::cout << "Min element " << min << std::endl;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            std::cout << matrix[i][j]<< " ";
        }
        std::cout << "\n";
    }
}