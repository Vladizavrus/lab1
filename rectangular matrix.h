#pragma once

///////////////
typedef struct Matrix{
    char type_name;         //    only 'i', 'f', 'c'    means which type we work with (int; float; complex)
    void** elem;
    int n;
    int m;} matrix;
    typedef matrix* pmatrix;

typedef struct Complex{
    float real;
    float im;
     }complex;

typedef struct Matrix_c{
    complex** elem;
    int n;
    int m;} matrix_c;

typedef struct Matrix_i{
    int** elem;
    int n;
    int m;} matrix_i;

typedef struct Matrix_f{
    float** elem;
    int n;
    int m;} matrix_f;

typedef matrix_c* pmatrix_c;            //pointer to a matrix of complex numbers
typedef matrix_i* pmatrix_i;
typedef matrix_f* pmatrix_f;
////////////////////////////////////////
complex complex_sum(complex a,complex b);
complex complex_mult(complex a, complex b);
matrix_i matrix_summ_i(matrix_i A, matrix_i B);
matrix_f matrix_summ_f(matrix_f A, matrix_f B);
matrix_c matrix_summ_c(matrix_c A, matrix_c B);
matrix_i matrix_mult_i(matrix_i A, matrix_i B);
matrix_f matrix_mult_f(matrix_f A, matrix_f B);
matrix_c matrix_mult_c(matrix_c A, matrix_c B);
void print_matrix(matrix A);
void print_matrix_i (matrix_i A);
void print_matrix_f (matrix_f A);
void print_matrix_c (matrix_c A);
void Multiply_by_Number(pmatrix A, void* K);
void Multiply_by_Number_i(pmatrix_i A, int K);
void Multiply_by_Number_f(pmatrix_f A, float K);
void Multiply_by_Number_c(pmatrix_c A, complex K);
int create_matrix (pmatrix A);
int create_and_scan_matrix(pmatrix A);
int create_matrix_i(pmatrix_i A);
int create_and_scan_matrix_i(pmatrix_i A);
int create_matrix_f(pmatrix_f A);
int create_and_scan_matrix_f(pmatrix_f A);
int create_matrix_c(pmatrix_c A);
int create_and_scan_matrix_c(pmatrix_c A);
matrix matrix_summ(matrix A, matrix B);

int transpose(pmatrix A);
int transpose_f(pmatrix_f A);
int transpose_c(pmatrix_c A);
matrix matrix_mult(matrix A, matrix B);

    int Add_line_string_combination(pmatrix A,int k, void* alphos );
    int Add_string_i(pmatrix_i A,int k, int* str);
    int Add_line_string_combination_i(pmatrix_i A, int k, int* alphos );
    int Add_string_f(pmatrix_f A,int k, float* str);
    int Add_line_string_combination_f(pmatrix_f A, int k, float* alphos );
    int Add_string_c(pmatrix_c A,int k, complex* str);
    int Add_line_string_combination_c(pmatrix_c A, int k, complex* alphos );
   void Add_line_string_combination_with_iniz(pmatrix A);


