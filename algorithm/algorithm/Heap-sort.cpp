#include <iostream>

using namespace std;

// 힙 정렬 : 힙 정렬은 힙 트리를 이용한 정렬입니다.

// 왼쪽 자식의 인덱스 = (부모의 인덱스) * 2
// 오른쪽 자식의 인덱스 = (부모의 인덱스) * 2 + 1
// 부모의 인덱스 = (자식의 인덱스) / 2

void heap(int* array, int size)
{
    for (int i = 1; i < size; i++)
    {
        int child = i; // 힙은 최상위 부모 노트가 숫자 1부터 부여된다.

        while (child > 0) // 최상위 부모 노트가 될 때까지 반복한다.
        {
            int root = (child - 1) / 2;

            if (array[root] < array[child]) { // 자식이 부모보다 크다면 바꾸기.
                int temp = array[root];
                array[root] = array[child];
                array[child] = temp;
            }

            child = root;
        }
    }
}

int main()
{
    int array[10] = { 1, 9, 4, 10, 6, 2, 5, 3, 7, 8 };

    heap(array, 11); // 힙을 만든다.

    for (int i = 9; i >= 0; i--)
    {
        // i == 9
        // 최상위 부모 노트와 맨 마지막 원소와 바꾸고
        int temp = array[i];
        array[i] = array[0];
        array[0] = temp;

        // 맨 마지막으로 간 최상위 노트를 제외하고 다시 힙을 정렬한다.
        // 이렇게 하면 큰 숫자부터 계속 가져올 수 있다.
        heap(array, i);
    }

    return 0;
}
