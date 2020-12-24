#include <iostream>

// same as int *arr but this one template size
template<const size_t _Size>
auto print_1d(int (&arr)[_Size])
{
    for(int i = 0; i < _Size; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}
//
//auto print_2d(int **arr)
template<const size_t row, const size_t col>
auto print_2d(int (&arr)[row][col])
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << '\n';
    }
}
auto main()->int
{
    int arr[] { 1, 2, 3, 4};
    print_1d<sizeof(arr)/sizeof(int)>(arr);
    //
    int arr2d[3][3]
    {
        { 1, 2, 3},
        { 4, 5, 6},
        { 7, 8, 9}
    };
    print_2d<3,3>(arr2d);
}