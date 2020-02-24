#include <iostream>

using namespace std;

// �պ� ���� : ���Ұ� �ϳ��� �� ������ ������ ���� �� �ٽ� ��ġ�� �����Դϴ�.

int array1[10] = { 1, 9, 4, 10, 6, 2, 5, 3, 7, 8 };
int array2[10];

void merge(int left, int right) // �����ϸ� �����Ѵ�.
{
    int mid = (left + right) / 2;

    int i = left;
    int j = mid + 1;
    int k = left;
    while (i <= mid && j <= right)
    {
        if (array1[i] <= array1[j])
            array2[k++] = array1[i++];
        else
            array2[k++] = array1[j++];
    }

    int tmp = i > mid ? j : i;

    while (k <= right) array2[k++] = array1[tmp++];

    // ���ĵ� ������ �ٲٱ�
    for (int i = left; i <= right; i++) array1[i] = array2[i];
}

void partition(int left, int right) // ������ ��������� ȣ���Ѵ�. 
{
    int mid;

    if (left < right)
    {
        mid = (left + right) / 2;
        partition(left, mid); // ������ �ѷ� ��� ������.
        partition(mid + 1, right); // �������� �ѷ� ��� ������.
        merge(left, right); // �׸��� �ٽ� ��ģ��.
    }
}

int main()
{
    partition(0, 9);

    return 0;
}
