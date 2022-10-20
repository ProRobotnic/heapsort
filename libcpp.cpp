#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <chrono>
#include <algorithm>
 using namespace std;
int main()
{	double ttime;
    ofstream outf;
    ofstream outf1;
    vector <string> arrs;
    vector <char> arrc;
    vector <int> arri;
    vector <float> arrf;
    vector <double> arrd;
    outf.open("D:\\heapsort\\output\\cpp_lib\\results.txt");
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
                             
    						make_heap(arrc.begin(), arrc.end());
    						sort_heap(arrc.begin(), arrc.end());
                            auto end = chrono::steady_clock::now();
                            ttime = (chrono::duration_cast<chrono::microseconds>(end - start).count());
                            outf1.open("D:\\heapsort\\output\\cpp_lib\\test_result_" + to_string(ntest) + " amount=" + to_string(lenm[len]) +
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
                            make_heap(arrs.begin(), arrs.end());
    						sort_heap(arrs.begin(), arrs.end());
                            auto end = chrono::steady_clock::now();
                            ttime = (chrono::duration_cast<chrono::microseconds>(end - start).count());
                            outf1.open("D:\\heapsort\\output\\cpp_lib\\test_result_" + to_string(ntest) + " amount=" + to_string(lenm[len]) +
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
                            make_heap(arri.begin(), arri.end());
    						sort_heap(arri.begin(), arri.end());
                            auto end = chrono::steady_clock::now();
                            ttime = (chrono::duration_cast<chrono::microseconds>(end - start).count());
                            outf1.open("D:\\heapsort\\output\\cpp_lib\\test_result_" + to_string(ntest) + " amount=" + to_string(lenm[len]) +
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
                            make_heap(arrf.begin(), arrf.end());
    						sort_heap(arrf.begin(), arrf.end());
                            auto end = chrono::steady_clock::now();
                            ttime = (chrono::duration_cast<chrono::microseconds>(end - start).count());
                            outf1.open("D:\\heapsort\\output\\cpp_lib\\test_result_" + to_string(ntest) + " amount=" + to_string(lenm[len]) +
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
                            make_heap(arrd.begin(), arrd.end());
    						sort_heap(arrd.begin(), arrd.end());
                            auto end = chrono::steady_clock::now();
                            ttime = (chrono::duration_cast<chrono::microseconds>(end - start).count());
                            outf1.open("D:\\heapsort\\output\\cpp_lib\\test_result_" + to_string(ntest) + " amount=" + to_string(lenm[len]) +
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
 
    std::cout << "\nsorted:\t";
}
