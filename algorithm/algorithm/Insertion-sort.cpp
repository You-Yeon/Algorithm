#include <iostream>

using namespace std;

// 삽입 정렬 : 앞의 원소보다 크고, 뒤에 원소보다는 작은 위치에 보내는 정렬입니다.

int main()
{
    int array[10] = { 1, 9, 4, 10, 6, 2, 5, 3, 7, 8 };
    int temp, j;

    for (int i = 0; i < 9; ++i)
    {
        j = i;
        while (j >= 0 && array[j] > array[j + 1])
        {
            temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            j--;
        }
    }

    return 0;
}
