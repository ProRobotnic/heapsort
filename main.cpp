// Heap Sort in C

#include <stdio.h>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <time.h>

using namespace std;

// Function to swap the position of two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapify(int arr[], int N, int i) {
    // Find largest among root, left child and right child
    // Initialize largest as root
    int largest = i;
    // left = 2*i + 1
    int left = 2 * i + 1;
    // right = 2*i + 2
    int right = 2 * i + 2;
    // If left child is larger than root
    if (left < N && arr[left] > arr[largest])
        largest = left;
    // If right child is larger than largest
    // so far
    if (right < N && arr[right] > arr[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}

// Main function to do heap sort
void heapSort(int arr[], int N) {
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        // Heapify root element to get highest element at
        // root again
        heapify(arr, i, 0);
    }
}

//==================================================================================================================char
// Function to swap the position of two elements
void swapc(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapifyc(char arr[], int N, int i) {
    // Find largest among root, left child and right child
    // Initialize largest as root
    int largest = i;
    // left = 2*i + 1
    int left = 2 * i + 1;
    // right = 2*i + 2
    int right = 2 * i + 2;
    // If left child is larger than root
    if (left < N && arr[left] > arr[largest])
        largest = left;
    // If right child is larger than largest
    // so far
    if (right < N && arr[right] > arr[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
        swapc(&arr[i], &arr[largest]);
        // Recursively heapify the affected
        // sub-tree
        heapifyc(arr, N, largest);
    }
}

// Main function to do heap sort
void heapSortc(char arr[], int N) {
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapifyc(arr, N, i);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
        swapc(&arr[0], &arr[i]);
        // Heapify root element to get highest element at
        // root again
        heapifyc(arr, i, 0);
    }
}

//=================================================================================================================string
// Function to swap the position of two elements
void swaps(string *a, string *b) {
    string temp = *a;
    *a = *b;
    *b = temp;
}

// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapifys(string arr[], int N, int i) {
    // Find largest among root, left child and right child
    // Initialize largest as root
    int largest = i;
    // left = 2*i + 1
    int left = 2 * i + 1;
    // right = 2*i + 2
    int right = 2 * i + 2;
    // If left child is larger than root
    if (left < N && arr[left] > arr[largest])
        largest = left;
    // If right child is larger than largest
    // so far
    if (right < N && arr[right] > arr[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
        swaps(&arr[i], &arr[largest]);
        // Recursively heapify the affected
        // sub-tree
        heapifys(arr, N, largest);
    }
}

// Main function to do heap sort
void heapSorts(string arr[], int N) {
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapifys(arr, N, i);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
        swaps(&arr[0], &arr[i]);
        // Heapify root element to get highest element at
        // root again
        heapifys(arr, i, 0);
    }
}

//================================================================================================================float
// Function to swap the position of two elements
void swapf(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapifyf(float arr[], int N, int i) {
    // Find largest among root, left child and right child
    // Initialize largest as root
    int largest = i;
    // left = 2*i + 1
    int left = 2 * i + 1;
    // right = 2*i + 2
    int right = 2 * i + 2;
    // If left child is larger than root
    if (left < N && arr[left] > arr[largest])
        largest = left;
    // If right child is larger than largest
    // so far
    if (right < N && arr[right] > arr[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
        swapf(&arr[i], &arr[largest]);
        // Recursively heapify the affected
        // sub-tree
        heapifyf(arr, N, largest);
    }
}

// Main function to do heap sort
void heapSortf(float arr[], int N) {
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapifyf(arr, N, i);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
        swapf(&arr[0], &arr[i]);
        // Heapify root element to get highest element at
        // root again
        heapifyf(arr, i, 0);
    }
}

//================================================================================================================double
// Function to swap the position of two elements
void swapd(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapifyd(double arr[], int N, int i) {
    // Find largest among root, left child and right child
    // Initialize largest as root
    int largest = i;
    // left = 2*i + 1
    int left = 2 * i + 1;
    // right = 2*i + 2
    int right = 2 * i + 2;
    // If left child is larger than root
    if (left < N && arr[left] > arr[largest])
        largest = left;
    // If right child is larger than largest
    // so far
    if (right < N && arr[right] > arr[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
        swapd(&arr[i], &arr[largest]);
        // Recursively heapify the affected
        // sub-tree
        heapifyd(arr, N, largest);
    }
}

// Main function to do heap sort
void heapSortd(double arr[], int N) {
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapifyd(arr, N, i);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
        swapd(&arr[0], &arr[i]);
        // Heapify root element to get highest element at
        // root again
        heapifyd(arr, i, 0);
    }
}

//================================================================================================================main
// Driver's code
int main() {
    double ttime;
    ofstream outf("output/cpp_handmade/results.txt");
    outf << "[";
    int lenm[] = {1000, 10000, 100000, 1000000, 10000000};
    string types[] = {"char", "str", "int", "float", "double"};
    bool tfmas[] = {true, false};
    for (int len = 0; len < 5; len++) {
        for (int type = 0; type < 5; type++) {
            for (int iss = 0; iss < 2; iss++)
                for (int rep = 0; rep < 2; rep++)
                    for (int ntest = 0; ntest < 5; ntest++) {
                        ifstream myfile("tests/test_data_" + to_string(ntest) + " amount=" + to_string(lenm[len]) +
                                        " almost_sorted=" + to_string(tfmas[iss]) + " data_type=" +
                                        types[type] + " repeats=" + to_string(tfmas[rep]) + ".txt");
                        if (types[type] == "char") {
                            char arr[lenm[len]];
                            for (int i = 0; i < lenm[len]; i++)
                                myfile >> arr[i];
                            clock_t begin = clock();
                            heapSortc(arr, lenm[len]);
                            clock_t end = clock();
                            ttime = (end - begin) / CLOCKS_PER_SEC;
                        }
                        if (types[type] == "str") {
                            string arr[lenm[len]];
                            for (int i = 0; i < lenm[len]; i++)
                                myfile >> arr[i];
                            clock_t begin = clock();
                            heapSorts(arr, lenm[len]);
                            clock_t end = clock();
                            ttime = (end - begin) / CLOCKS_PER_SEC;
                        };
                        if (types[type] == "int") {
                            int arr[lenm[len]];
                            for (int i = 0; i < lenm[len]; i++)
                                myfile >> arr[i];
                            clock_t begin = clock();
                            heapSort(arr, lenm[len]);
                            clock_t end = clock();
                            ttime = (end - begin) / CLOCKS_PER_SEC;
                        };
                        if (types[type] == "float") {
                            float arr[lenm[len]];
                            for (int i = 0; i < lenm[len]; i++)
                                myfile >> arr[i];
                            clock_t begin = clock();
                            heapSortf(arr, lenm[len]);
                            clock_t end = clock();
                            ttime = (end - begin) / CLOCKS_PER_SEC;
                        };
                        if (types[type] == "double") {
                            double arr[lenm[len]];
                            for (int i = 0; i < lenm[len]; i++)
                                myfile >> arr[i];
                            clock_t begin = clock();
                            heapSortd(arr, lenm[len]);
                            clock_t end = clock();
                            ttime = (end - begin) / CLOCKS_PER_SEC;
                        };
                        myfile.close();
                        outf << (", {'time': " + to_string(ttime) + ", 'datatype': " + types[type] + ", repeats" +
                                to_string(tfmas[rep]) + ", 'almost_sorted': " +
                                to_string(tfmas[iss]) + ", 'amount': " + to_string(lenm[len])+", 'ok' : True}");

                    }
        }
    }
    outf << "]";
    // Function call

}

// This code is contributed by _i_plus_plus_.
