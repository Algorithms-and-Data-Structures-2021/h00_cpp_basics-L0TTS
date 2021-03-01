#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if (lhs != nullptr || rhs != nullptr) {
        int k = *lhs;
        lhs = rhs;
        rhs = &k;
        cout << lhs << " " << rhs;
    }
}
// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    // напишите код здесь ...
    return nullptr;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    // напишите код здесь ...
    return false;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    int n = arr.size()-1;
    for (int i = 0; i < arr.size()/2; ++i) {
        int k = arr[i];
        arr[i]=arr[n];
        arr[n]=k;
        n--;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {

}

// Задание 6
int *find_max_element(int *arr, int size) {

    return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> array;
    for (int i = 0; i < arr.size(); ++i) {
        if(arr[i]%2==0){
            array.push_back(arr[i]);
        }
    }
    return array;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
}
