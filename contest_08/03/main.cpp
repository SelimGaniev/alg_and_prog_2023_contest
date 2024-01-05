int* new_array(int len, int value) {
    int* array = new int[len];
    for (int i = 0; i < len; i++) {
        array[i] = value;
    }
    return array;
}
int set_new_length(int** array, int old_len, int new_len) {
    int* new_array = new int[new_len];
    for (int i = 0; i < new_len; i++) {
        new_array[i] = (*array)[i];
    }
    if (old_len < new_len) {
        for (int i = old_len - 1; i < new_len; i++) {
            new_array[i] = 0;
        }
    }
    delete[] * array;
    *array = new_array;
    return new_len;
}

int merge(int** dest_array, int len_dest_array, const int* src_array, int len_src_array) {
    int* merged_array = new int[len_dest_array + len_src_array];
    for (int i = 0; i < len_dest_array;i++) {
        merged_array[i] = (*dest_array)[i];
    }
    for (int i = len_dest_array-1; i < len_dest_array+len_src_array; i++) {
        merged_array[i] = src_array[i-len_dest_array];
    }
    delete[] * dest_array;

    *dest_array = merged_array;

    return len_dest_array + len_src_array;
}


int dot(const int* a, const int* b, int len) {
    int result = 0;
    for (int i = 0; i < len; i++) {
        result += a[i] * b[i];
    }
    return result;
}


int* find(int* array, int len, int value) {
    for (int i = 0; i < len; i++) {
        if (array[i] == value) {
            return &array[i];
        }
    }
    return nullptr;
}
void delete_array(int** array) {
    if (!(array == nullptr)) {
        delete[] * array;
        *array = nullptr;
    }
}