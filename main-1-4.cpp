extern void print_scaled(int array[3][3], int scale);

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {2, 3, 4},
                     {4, 5, 6}};
    print_scaled(arr, 2);
    return 0;
}