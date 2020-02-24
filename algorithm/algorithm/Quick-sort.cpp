#include <iostream>

using namespace std;

// 퀵 정렬 : 특정한 값(Pivot)을 기준으로 큰 숫자와 작은 숫자를 구분하는 정렬입니다.

int array[10] = { 1, 9, 4, 10, 6, 2, 5, 3, 7, 8 };

void quick_sort(int* array, int start, int end)
{
    if (start >= end) // 원소가 1개인 경우
        return;

    int pivot = start; // 기준점
    int i = pivot + 1; // 왼쪽 출발 지점
    int j = end; // 오른쪽 출발 지점
    int temp;

    while (true) // 포인터가 엇갈릴때까지 반복한다.
    {
        while (i <= end && array[i] <= array[pivot]) // 기준점보다 큰 값을 찾는다.
            i++;

        while (j > start&& array[j] >= array[pivot]) // 기준점보다 작은 값을 찾는다.
            j--;

        if (i > j) // 엇갈릴 경우 기준점을 바꾼다.
        {
            temp = array[j];
            array[j] = array[pivot];
            array[pivot] = temp;

            quick_sort(array, start, j - 1); // 기준점 기준으로 왼쪽 퀵 정렬
            quick_sort(array, j + 1, end); // 기준점 기준으로 오른쪽 퀵 정렬

            return;
        }
        else // i와 j를 바꾼다.
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
