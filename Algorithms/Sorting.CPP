#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

//Selection Sort
void selectionSort(int len, int arr[]) {
        for (int i = 0; i < len; i++) {
                int minIdx = i;
                for (int j = i + 1; j < len; j++) {
                        if (arr[j] < arr[minIdx])
                                minIdx = j;
                }
                swap(arr[minIdx], arr[i]);
        }
}
 
//Bubble Sort
void bubbleSort(int len, int arr[]) {
        for (int i = 0; i < len - 1; i++) {
                for (int j = 0; j < len - i - 1; j++) {
                        if (arr[j] > arr[j + 1])
                                swap(arr[j], arr[j + 1]);
                }
        }
}

//Insertion Sort
void insertionSort(int len, int arr[]) {
        for (int i = 1; i < len; i++) {
                int j = i - 1;
                int tmp = arr[i];
                for (; j >= 0; j--) {
                        if (arr[j] < tmp)
                                break;
                        arr[j + 1] = arr[j];
                }
                arr[j + 1] = tmp;
        }
}

//Merge Sort
void merge(int arr[], int s1, int e1, int s2, int e2) {
        int start = min(s1, s2), end = max(e1, e2);
        vector<int> tmp(end - start + 5);
        int idx = 0;
        while (s1 <= e1 && s2 <= e2) {
                if (arr[s1] < arr[s2]) {
                        tmp[idx++] = arr[s1++];
                } else
                        tmp[idx++] = arr[s2++];
        }
        while (s1 <= e1) {
                tmp[idx++] = arr[s1++];
        }
        while (s2 <= e2) {
                tmp[idx++] = arr[s2++];
        }
        for (int i = start, j = 0; i <= end; i++, j++)
                arr[i] = tmp[j];
}

void mergeSort(int arr[], int st, int end) {
        if (st >= end)
                return;
        int mid = (st + end) / 2;
        mergeSort(arr, st, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, st, mid, mid + 1, end);
}

//Quick Sort
int partition(int arr[], int low, int high) {
        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++) {
                if (arr[j] < pivot) {
                        i++;
                        swap(arr[i], arr[j]);
                }
        }
        swap(arr[i + 1], arr[high]);
        return (i + 1);
}
void quickSort(int arr[], int low, int high) {
        if (low < high) {
                int pi = partition(arr, low, high);
                quickSort(arr, low, pi - 1);
                quickSort(arr, pi + 1, high);
        }
}

int main() {
        //code
}

