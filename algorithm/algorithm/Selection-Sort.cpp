#include <iostream>

using namespace std;

// ���� ���� : ���� ���� ���� �� ������ ������ ������ �ݺ��ϴ� �����Դϴ�.

int main()
{
    int array[10] = { 1, 9, 4, 10, 6, 2, 5, 3, 7, 8 };
    int min, index, temp;

    for (int i = 0; i < 10; ++i)
    {
        min = array[i];
        index = i;

        for (int j = i; j < 10; j++)
        {
            if (min > array[j])
            {
                min = array[j];
                index = j;
            }
        }

        temp = array[i];
        array[i] = array[index];
        array[index] = temp;

    }

    return 0;
}
