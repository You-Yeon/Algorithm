#include <iostream>

using namespace std;

// 합병 정렬 : 원소가 하나가 될 때까지 반으로 나눈 후 다시 합치는 정렬입니다.

int array1[10] = { 1, 9, 4, 10, 6, 2, 5, 3, 7, 8 };
int array2[10];

void merge(int left, int right) // 병합하며 정렬한다.
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

    // 정렬된 것으로 바꾸기
    for (int i = left; i <= right; i++) array1[i] = array2[i];
}

void partition(int left, int right) // 분할을 재귀적으로 호출한다. 
{
    int mid;

    if (left < right)
    {
        mid = (left + right) / 2;
        partition(left, mid); // 왼쪽을 둘로 계속 나눈다.
        partition(mid + 1, right); // 오른쪽을 둘로 계속 나눈다.
        merge(left, right); // 그리고 다시 합친다.
    }
}

int main()
{
    partition(0, 9);

    return 0;
}
