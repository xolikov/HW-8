#include <bits/stdc++.h>
using namespace std;

void delete11(vector<int> &v) {
    for (int i = 0; i < v.size(); i++) if (v[i] % 11 == 0) v.erase(v.begin() + i);
}

void insertMany(vector<int> &v, int a, int b) {
    int middle = v.size() / 2 + v.size() % 2;
    while (a--) v.insert(v.begin() + (middle++), b);
}

int* allocate(int a, int b) {
    if (a > b) return NULL;
    int *lst = new int[b - a + 1];
    for (int i = a; i <= b; i++) lst[i - a] = a;
    return lst;
}

void deallocate(int* lst) {
    delete[] lst;
}

int* reallocate(int* lst, int N, int n) {
    int* new_lst = new int[N - n];
    for (int i = n; i < N; i++) new_lst[i] = lst[i - n];
    return new_lst;
}

int** transposed(int** lst, int n, int m) {
    int ** new_lst = new int*[n * m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            new_lst[i * m + j] = *lst;
            lst++;
        }
    }
    return new_lst;
}
