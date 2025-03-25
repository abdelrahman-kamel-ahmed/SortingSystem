#include<iostream>
#include "SortingSystem.h"
using namespace std;
int main() {


    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    SortingSystem<string> sorter(n);
    sorter.showMenu();
  /*  sorter.selectionSort();*/
    sorter.measureSortingTime();

    return 0;


}