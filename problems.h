#include <vector>
using namespace std;

void delete11(vector<int> &v) {
    auto it = v.begin();
    while (it != v.end()) {
        if (*it % 11 == 0) {
            it = v.erase(it);
        } else {
            ++it;
        }
    }
}

void insertMany(vector<int> &v, int a, int b) {
    for (int i = 0; i < a; ++i) {
        int mid = (v.size() % 2 == 0) ? (v.size() / 2) : (v.size() / 2) + 1;
        v.insert(v.begin() + mid, b);
    }
}

int* allocateAndSet(int a, int b) {
    if (a > b) return nullptr;
    int size = b - a + 1;
    int* arr = new int[size];
    for (int i = 0; i < size; ++i) {
        arr[i] = a + i;
    }
    return arr;
}

void deallocate(int* arr) {
    delete[] arr;
    arr = nullptr;
}

int* reallocate(int *arr, int N, int n) {
    int newSize = N - n;
    int* newArr = new int[newSize];
    for (int i = 0; i < newSize; ++i) {
        newArr[i] = arr[i + n];
    }
    return newArr;
}

int** transposed(int **arr, int n, int m) {
    int **newArr = new int*[m];
    for (int i = 0; i < m; ++i) {
        newArr[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            newArr[i][j] = arr[j][i];
        }
    }
    return newArr;
}

void deallocateMatrix(int**& matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
    matrix = nullptr;
}
