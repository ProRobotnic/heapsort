// Heap Sort in C


#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <chrono>

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
void heapify(vector <int> arri, long int N, long int i) {
    // Find largest among root, left child and right child
    // Initialize largest as root
    int largest = i;
    // left = 2*i + 1
    int left = 2 * i + 1;
    // right = 2*i + 2
    int right = 2 * i + 2;
    // If left child is larger than root
    if (left < N && arri[left] > arri[largest])
        largest = left;
    // If right child is larger than largest
    // so far
    if (right < N && arri[right] > arri[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
        swap(&arri[i], &arri[largest]);
        // Recursively heapify the affected
        // sub-tree
        heapify(arri, N, largest);
    }
}

// Main function to do heap sort
void heapSort(vector <int> arri, long int N) {
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arri, N, i);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
        swap(&arri[0], &arri[i]);
        // Heapify root element to get highest element at
        // root again
        heapify(arri, i, 0);
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
void heapifyc(vector <char> arrc, long int N, long int i) {
    // Find largest among root, left child and right child
    // Initialize largest as root
    int largest = i;
    // left = 2*i + 1
    int left = 2 * i + 1;
    // right = 2*i + 2
    int right = 2 * i + 2;
    // If left child is larger than root
    if (left < N && arrc[left] > arrc[largest])
        largest = left;
    // If right child is larger than largest
    // so far
    if (right < N && arrc[right] > arrc[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
        swapc(&arrc[i], &arrc[largest]);
        // Recursively heapify the affected
        // sub-tree
        heapifyc(arrc, N, largest);
    }
}

// Main function to do heap sort
void heapSortc(vector <char> arrc, long int N) {
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapifyc(arrc, N, i);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
        swapc(&arrc[0], &arrc[i]);
        // Heapify root element to get highest element at
        // root again
        heapifyc(arrc, i, 0);
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
void heapifys(vector <string> arrs, long int N, long int i) {
    // Find largest among root, left child and right child
    // Initialize largest as root
    int largest = i;
    // left = 2*i + 1
    int left = 2 * i + 1;
    // right = 2*i + 2
    int right = 2 * i + 2;
    // If left child is larger than root
    if (left < N && arrs[left] > arrs[largest])
        largest = left;
    // If right child is larger than largest
    // so far
    if (right < N && arrs[right] > arrs[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
        swaps(&arrs[i], &arrs[largest]);
        // Recursively heapify the affected
        // sub-tree
        heapifys(arrs, N, largest);
    }
}

// Main function to do heap sort
void heapSorts(vector <string> arrs, long int N) {
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapifys(arrs, N, i);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
        swaps(&arrs[0], &arrs[i]);
        // Heapify root element to get highest element at
        // root again
        heapifys(arrs, i, 0);
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
void heapifyf(vector <float> arrf, long int N, long int i) {
    // Find largest among root, left child and right child
    // Initialize largest as root
    int largest = i;
    // left = 2*i + 1
    int left = 2 * i + 1;
    // right = 2*i + 2
    int right = 2 * i + 2;
    // If left child is larger than root
    if (left < N && arrf[left] > arrf[largest])
        largest = left;
    // If right child is larger than largest
    // so far
    if (right < N && arrf[right] > arrf[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
        swapf(&arrf[i], &arrf[largest]);
        // Recursively heapify the affected
        // sub-tree
        heapifyf(arrf, N, largest);
    }
}

// Main function to do heap sort
void heapSortf(vector <float> arrf, long int N) {
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapifyf(arrf, N, i);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
        swapf(&arrf[0], &arrf[i]);
        // Heapify root element to get highest element at
        // root again
        heapifyf(arrf, i, 0);
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
void heapifyd(vector <double> arrd, long int N, long int i) {
    // Find largest among root, left child and right child
    // Initialize largest as root
    int largest = i;
    // left = 2*i + 1
    int left = 2 * i + 1;
    // right = 2*i + 2
    int right = 2 * i + 2;
    // If left child is larger than root
    if (left < N && arrd[left] > arrd[largest])
        largest = left;
    // If right child is larger than largest
    // so far
    if (right < N && arrd[right] > arrd[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i) {
        swapd(&arrd[i], &arrd[largest]);
        // Recursively heapify the affected
        // sub-tree
        heapifyd(arrd, N, largest);
    }
}

// Main function to do heap sort
void heapSortd(vector <double> arrd, int N) {
    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)
        heapifyd(arrd, N, i);
    // Heap sort
    for (int i = N - 1; i >= 0; i--) {
        swapd(&arrd[0], &arrd[i]);
        // Heapify root element to get highest element at
        // root again
        heapifyd(arrd, i, 0);
    }
}

//================================================================================================================main
// Driver's code
int main() {
    double ttime;
    ofstream outf;
    ofstream outf1;
    vector <string> arrs;
    vector <char> arrc;
    vector <int> arri;
    vector <float> arrf;
    vector <double> arrd;
    outf.open("D:\\heapsort\\output\\cpp_handmade\\results.txt");
    outf << "[";
    int co = 0;
    long int lenm[] = {1000, 10000, 100000, 1000000, 10000000};
    string types[] = {"char", "str", "int", "float", "double"};
    string tfmas[] = {"True", "False"};
    for (int len = 0; len < 5; len++) {
        for (int type = 0; type < 5; type++) {
            for (int iss = 0; iss < 2; iss++)
                for (int rep = 0; rep < 2; rep++)
                    for (int ntest = 0; ntest < 5; ntest++) {
                        ifstream myfile("tests/test_data_" + to_string(ntest) + " amount=" + to_string(lenm[len]) +
                                        " almost_sorted=" + (tfmas[iss]) + " data_type=" +
                                        types[type] + " repeats=" + (tfmas[rep]) + ".txt");
                        if (types[type] == "char") {
                            arrc.clear();
                        	char tc;
                            for (int i = 0; i < lenm[len]; i++){
						
                                myfile >> tc;
                            	arrc.push_back(tc);	}
                            auto start = chrono::steady_clock::now();
                            heapSortc(arrc, lenm[len]);
                            auto end = chrono::steady_clock::now();
                            ttime = (chrono::duration_cast<chrono::microseconds>(end - start).count());
                            outf1.open("D:\\heapsort\\output\\cpp_handmade\\test_result_" + to_string(ntest) + " amount=" + to_string(lenm[len]) +
                                        " almost_sorted=" + (tfmas[iss]) + " data_type=" +
                                        types[type] + " repeats=" + (tfmas[rep]) + ".txt");
                            for (int i = 0; i < lenm[len]; i++) outf1 << arrc[i] << " ";
                            outf1.close();

                        }
                        if (types[type] == "str") {
                        	arrs.clear();
                        	string t;
                            for (int i = 0; i < lenm[len]; i++){
						
                                myfile >> t;
                            	arrs.push_back(t);	}
                            auto start = chrono::steady_clock::now();
                            heapSorts(arrs, lenm[len]);
                            auto end = chrono::steady_clock::now();
                            ttime = (chrono::duration_cast<chrono::microseconds>(end - start).count());
                            outf1.open("D:\\heapsort\\output\\cpp_handmade\\test_result_" + to_string(ntest) + " amount=" + to_string(lenm[len]) +
                                        " almost_sorted=" + (tfmas[iss]) + " data_type=" +
                                        types[type] + " repeats=" + (tfmas[rep]) + ".txt");
                            for (int i = 0; i < lenm[len]; i++) outf1 << arrs[i] << " ";
                            outf1.close();

                        };
                        if (types[type] == "int") {
                            arri.clear();
                        	int ti;
                            for (int i = 0; i < lenm[len]; i++){
						
                                myfile >> ti;
                            	arri.push_back(ti);	}
                            auto start = chrono::steady_clock::now();
                            heapSort(arri, lenm[len]);
                            auto end = chrono::steady_clock::now();
                            ttime = (chrono::duration_cast<chrono::microseconds>(end - start).count());
                            outf1.open("D:\\heapsort\\output\\cpp_handmade\\test_result_" + to_string(ntest) + " amount=" + to_string(lenm[len]) +
                                        " almost_sorted=" + (tfmas[iss]) + " data_type=" +
                                        types[type] + " repeats=" + (tfmas[rep]) + ".txt");
                            for (int i = 0; i < lenm[len]; i++) outf1 << arri[i] << " ";
                            outf1.close();
                        };
                        if (types[type] == "float") {
                            arrf.clear();
                        	float tf;
                            for (int i = 0; i < lenm[len]; i++){
						
                                myfile >> tf;
                            	arrf.push_back(tf);	}
                            auto start = chrono::steady_clock::now();
                            heapSortf(arrf, lenm[len]);
                            auto end = chrono::steady_clock::now();
                            ttime = (chrono::duration_cast<chrono::microseconds>(end - start).count());
                            outf1.open("D:\\heapsort\\output\\cpp_handmade\\test_result_" + to_string(ntest) + " amount=" + to_string(lenm[len]) +
                                        " almost_sorted=" + (tfmas[iss]) + " data_type=" +
                                        types[type] + " repeats=" + (tfmas[rep]) + ".txt");
                            for (int i = 0; i < lenm[len]; i++) outf1 << arrf[i] << " ";
                            outf1.close();
                        };
                        if (types[type] == "double") {
                            arrd.clear();
                        	double td;
                            for (int i = 0; i < lenm[len]; i++){
						
                                myfile >> td;
                            	arrd.push_back(td);	}
                            auto start = chrono::steady_clock::now();
                            heapSortd(arrd, lenm[len]);
                            auto end = chrono::steady_clock::now();
                            ttime = (chrono::duration_cast<chrono::microseconds>(end - start).count());
                            outf1.open("D:\\heapsort\\output\\cpp_handmade\\test_result_" + to_string(ntest) + " amount=" + to_string(lenm[len]) +
                                        " almost_sorted=" + (tfmas[iss]) + " data_type=" +
                                        types[type] + " repeats=" + (tfmas[rep]) + ".txt");
                            for (int i = 0; i < lenm[len]; i++) outf1 << arrd[i] << " ";
                            outf1.close();
                        };
                        myfile.close();
                        outf << (", {'time': " + to_string(ttime) + ", 'datatype': '" + types[type] + "', 'repeats':" +
                                 (tfmas[rep]) + ", 'almost_sorted': " +
                                 (tfmas[iss]) + ", 'amount': " + to_string(lenm[len]) + ", 'ok' : True}");
                        cout << co;
                        co++;
                    }

        }
    }
    outf << "]";
    // Function call

}

// This code is contributed by _i_plus_plus_.
