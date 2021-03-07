#include <iostream> // cout
#include <algorithm> // copy, fill
#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    if (lhs != nullptr && rhs != nullptr) {
        int per = *lhs;
        *lhs = *rhs;
        *rhs = per;
    }
}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    if (num_rows <= 0 || num_cols <= 0) {
        return nullptr;
    }
    int **arr = new int *[num_rows];
    for (int i = 0; i < num_rows; ++i) {
        arr[i] = new int[num_cols];
    }
    for (int j = 0; j < num_rows; j++) {
        for (int i = 0; i < num_cols; i++) {
            arr[j][i] = init_value;
        }
    }
    return arr;
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    if (arr_2d_source == nullptr || arr_2d_target == nullptr || num_rows < 0 || num_cols < 0) {
        return false;
    }
    for (int i = 0; i < num_rows; ++i) {
        for (int j = 0; j < num_cols; ++j) {
            arr_2d_target[i][j] = arr_2d_source[i][j];
        }
    }
    return true;
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    int count = arr.size() - 1;
    for (int i = 0; i < arr.size() / 2; ++i) {
        int per;
        per = arr[i];
        arr[i] = arr[count];
        arr[count] = per;
        count--;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    if ( arr_end != nullptr || arr_begin != nullptr) {
        while (arr_begin < arr_end) {
            swap_args(arr_begin, arr_end);
            arr_end--;
            arr_begin++;
        }
    }

}

// Задание 6
int *find_max_element(int *arr, int size) {
    if ( size > 0 && arr != nullptr) {
        int *maximum = &arr[0];
        for (int i = 0; i < size; i++) {
            if (arr[i] > *maximum) {
                *maximum = arr[i];
            }
        }
        return maximum;
    }
    return nullptr;
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    vector<int> array;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 != 0) {
            array.push_back(arr[i]);
        }
    }
    return array;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    vector<int> array;
    vector<int> stack;
    for (int i = 0; i < arr_a.size(); ++i) {
        for (int j = 0; j < arr_b.size(); ++j) {
            if (arr_a[i] == arr_b[j]) {
                bool checking = true;
                for (int l = 0; l < stack.size(); ++l) {
                    if (stack[l] == i) {
                        checking = false;
                    }
                }
                if (checking) {
                    array.push_back(arr_a[i]);
                    stack.push_back(i);
                }
            }
        }
    }
    return array;

}