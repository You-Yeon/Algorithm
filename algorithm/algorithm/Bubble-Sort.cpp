#include <iostream>

using namespace std;

// 버블 정렬 : 옆에 있는 값을 비교해서 큰값을 뒤로 보내는 과정을 반복하는 정렬입니다.

int main()
{
    int array[10] = { 1, 9, 4, 10, 6, 2, 5, 3, 7, 8 };
    int temp;

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }

    }

    return 0;
}