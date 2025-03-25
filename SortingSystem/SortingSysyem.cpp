#include"SortingSystem.h"
#include<iostream>
#include"chrono"
using namespace std;
int choice;
template<typename T>
SortingSystem<T>::SortingSystem(int n) {

    size = n;
    data = new T[size];
    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> data[i];
    }
}
template<typename T>
SortingSystem<T>::~SortingSystem() {
    delete[] data;
}

template<typename T>
void SortingSystem<T>::showMenu() {
    cout << "please choose the sort" << endl;
    
    cout << "1.selection sort" << endl;
    cin >> choice;
     
    
}
template<typename T>
void SortingSystem <T>::displayData() {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << data[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]\n";
}

template<typename T>
void SortingSystem<T>::measureSortingTime() {
    auto start = chrono::high_resolution_clock::now();
    
    switch (choice)
    {
    case 1:
        selectionSort();
    default:
        break;
    }
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> duration = end - start;
    cout << "Time taken: " << duration.count() << " seconds" << endl;
}
template class SortingSystem<int>;
template class SortingSystem<string>;

