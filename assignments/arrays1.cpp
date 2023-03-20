#include <iostream>
// For 3d and really any multi dimensional array , you have to specify
// the number of elements in []'s , only the left most is not mandatory.
// Below is the example for 3D reproduced.Omitting the 5 or the 3 or both
// will cause a compile error.
int main()
{
    int house_block1[][5][3]{

        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {13, 14, 15}},
        {{16, 17, 18}, {19, 20, 21}, {22, 23, 24}, {25, 26, 27}, {28, 29, 30}},
        {{31, 32, 33}, {34, 35, 36}, {37, 38, 39}, {40, 41, 42}, {43, 44, 45}},
        {{46, 47, 48}, {49, 50, 51}, {52, 53, 54}, {55, 56, 57}, {58, 59, 60}}

    };

    for (int i = 0; i < std::size(house_block1); i++)
    {
        for (int j = 0; j < std::size(house_block1[i]); j++)
        {
            for (int k = 0; k < std::size(house_block1[i][j]); k++)
            {
                std::cout << house_block1[i][j][k] << std::endl;
            }
        };
    };
    return 0;
};
