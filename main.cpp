#include <iostream>
using namespace std;


int main() {
    setlocale(LC_ALL, "rus");

    int N;
    cout << "Введите размер массива: ";
    cin >> N;

    int A[100];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int maxIndex = 0;
    int minIndex = 0;

    for (int i = 1; i < N; i++)
    {
        if (A[i] > A[maxIndex])
            maxIndex = i;

        if (A[i] < A[minIndex])
            minIndex = i;
    }

    int max, min;

    if (maxIndex < minIndex)
    {
        max = maxIndex;
        min = minIndex;
    }
    else
    {
        max = minIndex;
        min = maxIndex;
    }

    int sum = 0;

    for (int i = max + 1; i < min; i++)
    {
        if (A[i] < 0)
        {
            sum += A[i];
        }
    }

    cout << "Сумма отрицательных элементов между максимальным и минимальным: ";
    cout << sum << endl;

    return 0;
}