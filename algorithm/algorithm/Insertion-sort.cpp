#include <iostream>

using namespace std;

// ���� ���� : ���� ���Һ��� ũ��, �ڿ� ���Һ��ٴ� ���� ��ġ�� ������ �����Դϴ�.

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
