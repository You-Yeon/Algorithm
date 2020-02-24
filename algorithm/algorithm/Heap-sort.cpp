#include <iostream>

using namespace std;

// �� ���� : �� ������ �� Ʈ���� �̿��� �����Դϴ�.

// ���� �ڽ��� �ε��� = (�θ��� �ε���) * 2
// ������ �ڽ��� �ε��� = (�θ��� �ε���) * 2 + 1
// �θ��� �ε��� = (�ڽ��� �ε���) / 2

void heap(int* array, int size)
{
    for (int i = 1; i < size; i++)
    {
        int child = i; // ���� �ֻ��� �θ� ��Ʈ�� ���� 1���� �ο��ȴ�.

        while (child > 0) // �ֻ��� �θ� ��Ʈ�� �� ������ �ݺ��Ѵ�.
        {
            int root = (child - 1) / 2;

            if (array[root] < array[child]) { // �ڽ��� �θ𺸴� ũ�ٸ� �ٲٱ�.
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

    heap(array, 11); // ���� �����.

    for (int i = 9; i >= 0; i--)
    {
        // i == 9
        // �ֻ��� �θ� ��Ʈ�� �� ������ ���ҿ� �ٲٰ�
        int temp = array[i];
        array[i] = array[0];
        array[0] = temp;

        // �� ���������� �� �ֻ��� ��Ʈ�� �����ϰ� �ٽ� ���� �����Ѵ�.
        // �̷��� �ϸ� ū ���ں��� ��� ������ �� �ִ�.
        heap(array, i);
    }

    return 0;
}
