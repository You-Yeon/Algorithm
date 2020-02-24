#include <iostream>

using namespace std;

// �� ���� : Ư���� ��(Pivot)�� �������� ū ���ڿ� ���� ���ڸ� �����ϴ� �����Դϴ�.

int array[10] = { 1, 9, 4, 10, 6, 2, 5, 3, 7, 8 };

void quick_sort(int* array, int start, int end)
{
    if (start >= end) // ���Ұ� 1���� ���
        return;

    int pivot = start; // ������
    int i = pivot + 1; // ���� ��� ����
    int j = end; // ������ ��� ����
    int temp;

    while (true) // �����Ͱ� ������������ �ݺ��Ѵ�.
    {
        while (i <= end && array[i] <= array[pivot]) // ���������� ū ���� ã�´�.
            i++;

        while (j > start&& array[j] >= array[pivot]) // ���������� ���� ���� ã�´�.
            j--;

        if (i > j) // ������ ��� �������� �ٲ۴�.
        {
            temp = array[j];
            array[j] = array[pivot];
            array[pivot] = temp;

            quick_sort(array, start, j - 1); // ������ �������� ���� �� ����
            quick_sort(array, j + 1, end); // ������ �������� ������ �� ����

            return;
        }
        else // i�� j�� �ٲ۴�.
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

}

int main()
{
    quick_sort(array, 0, 9);

    return 0;
}
