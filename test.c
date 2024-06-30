#pragma once
#include "rectangular matrix.c"
#include <stdio.h>

void int_test_matrix_sum(){
    printf("matrix sum tests for int values are running\n");
    printf("0/3  tests are passsed\n\n\n");
    matrix A;
    matrix B;
    matrix C;
     matrix_i A_i;
    matrix_i B_i;
    matrix_i C_i;
    A.type_name='i';
    B.type_name='i';
    C.type_name='i';
    A.n=3;
    A.m=3;
    B.n=3;
    B.m=3;
    C.n=3;
    C.m=3;
     A_i.n=3;
    A_i.m=3;
    B_i.n=3;
    B_i.m=3;
    C_i.n=3;
    C_i.m=3;
    create_matrix(&A);
    create_matrix(&B);
    create_matrix(&C);
    create_matrix_i(&A_i);
    create_matrix_i(&B_i);
    create_matrix_i(&C_i);
    A_i.elem[0][0]=1; A_i.elem[0][1]=2; A_i.elem[0][2]=3;
    A_i.elem[1][0]=4; A_i.elem[1][1]=5; A_i.elem[1][2]=6;
    A_i.elem[2][0]=7;A_i.elem[2][1]=8; A_i.elem[2][2]=9;
    A.elem=(int**) A_i.elem;
    printf("first of summing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0]=1; B_i.elem[0][1]=4; B_i.elem[0][2]=7;
    B_i.elem[1][0]=2; B_i.elem[1][1]=5; B_i.elem[1][2]=8;
    B_i.elem[2][0]=3;B_i.elem[2][1]=6; B_i.elem[2][2]=9;
    B.elem=(int**) B_i.elem;
    printf("second of summing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_summ(A,B));
    C_i.elem[0][0]=2; C_i.elem[0][1]=6; C_i.elem[0][2]=10;
    C_i.elem[1][0]=6; C_i.elem[1][1]=10; C_i.elem[1][2]=14;
    C_i.elem[2][0]=10;C_i.elem[2][1]=14; C_i.elem[2][2]=18;
    C.elem=(int**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);

    printf("matrix sum tests for int values are running\n");
    printf("1/3  tests are passsed\n\n\n");

    A_i.elem[0][0]=1; A_i.elem[0][1]=2; A_i.elem[0][2]=3;
    A_i.elem[1][0]=4; A_i.elem[1][1]=5; A_i.elem[1][2]=6;
    A_i.elem[2][0]=7;A_i.elem[2][1]=8; A_i.elem[2][2]=9;
    A.elem=(int**) A_i.elem;
    printf("first of summing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0]=0; B_i.elem[0][1]=0; B_i.elem[0][2]=0;
    B_i.elem[1][0]=0; B_i.elem[1][1]=0; B_i.elem[1][2]=0;
    B_i.elem[2][0]=0;B_i.elem[2][1]=0; B_i.elem[2][2]=0;
    B.elem=(int**) B_i.elem;
    printf("second of summing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_summ(A,B));
    C_i.elem[0][0]=1; C_i.elem[0][1]=2; C_i.elem[0][2]=3;
    C_i.elem[1][0]=4; C_i.elem[1][1]=5; C_i.elem[1][2]=6;
    C_i.elem[2][0]=7;C_i.elem[2][1]=8; C_i.elem[2][2]=9;
    C.elem=(int**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);

    printf("matrix sum tests for int values are running\n");
    printf("2/3  tests are passsed\n\n\n");

    A_i.elem[0][0]=1; A_i.elem[0][1]=2; A_i.elem[0][2]=3;
    A_i.elem[1][0]=4; A_i.elem[1][1]=5; A_i.elem[1][2]=6;
    A_i.elem[2][0]=7;A_i.elem[2][1]=8; A_i.elem[2][2]=9;
    A.elem=(int**) A_i.elem;
    printf("first of summing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0]=1; B_i.elem[0][1]=0; B_i.elem[0][2]=0;
    B_i.elem[1][0]=0; B_i.elem[1][1]=1; B_i.elem[1][2]=0;
    B_i.elem[2][0]=0;B_i.elem[2][1]=0; B_i.elem[2][2]=1;
    B.elem=(int**) B_i.elem;
    printf("second of summing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_summ(A,B));
    C_i.elem[0][0]=2; C_i.elem[0][1]=2; C_i.elem[0][2]=3;
    C_i.elem[1][0]=4; C_i.elem[1][1]=6; C_i.elem[1][2]=6;
    C_i.elem[2][0]=7;C_i.elem[2][1]=8; C_i.elem[2][2]=10;
    C.elem=(int**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);


    printf("3/3 matrix sum for int values tests are passsed\n\n\n");

}
void float_test_matrix_sum(){
    printf("matrix sum tests for float values are running\n");
    printf("0/3  tests are passsed\n\n\n");
    matrix A;
    matrix B;
    matrix C;
     matrix_f A_i;
    matrix_f B_i;
    matrix_f C_i;
    A.type_name='f';
    B.type_name='f';
    C.type_name='f';
    A.n=3;
    A.m=3;
    B.n=3;
    B.m=3;
    C.n=3;
    C.m=3;
     A_i.n=3;
    A_i.m=3;
    B_i.n=3;
    B_i.m=3;
    C_i.n=3;
    C_i.m=3;
    create_matrix(&A);
    create_matrix(&B);
    create_matrix(&C);
    create_matrix_f(&A_i);
    create_matrix_f(&B_i);
    create_matrix_f(&C_i);
    A_i.elem[0][0]=1.1; A_i.elem[0][1]=2.2; A_i.elem[0][2]=3.2;
    A_i.elem[1][0]=4.2; A_i.elem[1][1]=5.2; A_i.elem[1][2]=6.7;
    A_i.elem[2][0]=7;A_i.elem[2][1]=8; A_i.elem[2][2]=9.6;
    A.elem=(float**) A_i.elem;
    printf("first of summing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0]=1.2; B_i.elem[0][1]=4.4; B_i.elem[0][2]=7.6;
    B_i.elem[1][0]=2.5; B_i.elem[1][1]=5.5; B_i.elem[1][2]=8.1;
    B_i.elem[2][0]=3.6;B_i.elem[2][1]=6.1; B_i.elem[2][2]=9.1;
    B.elem=(float**) B_i.elem;
    printf("second of summing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_summ(A,B));
    C_i.elem[0][0]=2.3; C_i.elem[0][1]=6.6; C_i.elem[0][2]=10.8;
    C_i.elem[1][0]=6.7; C_i.elem[1][1]=10.7; C_i.elem[1][2]=14.8;
    C_i.elem[2][0]=10.6;C_i.elem[2][1]=14.1; C_i.elem[2][2]=18.7;
    C.elem=(float**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);

    printf("matrix sum tests for float values are running\n");
    printf("1/3  tests are passsed\n\n\n");

    A_i.elem[0][0]=1.1; A_i.elem[0][1]=2.2; A_i.elem[0][2]=3.2;
    A_i.elem[1][0]=4.2; A_i.elem[1][1]=5.2; A_i.elem[1][2]=6.7;
    A_i.elem[2][0]=7;A_i.elem[2][1]=8; A_i.elem[2][2]=9.6;
    A.elem=(float**) A_i.elem;
    printf("first of summing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0]=0; B_i.elem[0][1]=0; B_i.elem[0][2]=0;
    B_i.elem[1][0]=0; B_i.elem[1][1]=0; B_i.elem[1][2]=0;
    B_i.elem[2][0]=0;B_i.elem[2][1]=0; B_i.elem[2][2]=0;
    B.elem=(float**) B_i.elem;
    printf("second of summing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_summ(A,B));
    C_i.elem[0][0]=1.1; C_i.elem[0][1]=2.2; C_i.elem[0][2]=3.2;
    C_i.elem[1][0]=4.2; C_i.elem[1][1]=5.2; C_i.elem[1][2]=6.7;
    C_i.elem[2][0]=7;C_i.elem[2][1]=8; C_i.elem[2][2]=9.6;
    C.elem=(float**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);

    printf("matrix sum tests for float values are running\n");
    printf("2/3  tests are passsed\n\n\n");

     A_i.elem[0][0]=1.1; A_i.elem[0][1]=2.2; A_i.elem[0][2]=3.2;
    A_i.elem[1][0]=4.2; A_i.elem[1][1]=5.2; A_i.elem[1][2]=6.7;
    A_i.elem[2][0]=7;A_i.elem[2][1]=8; A_i.elem[2][2]=9.6;
    A.elem=(float**) A_i.elem;
    printf("first of summing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0]=1.2; B_i.elem[0][1]=0; B_i.elem[0][2]=0;
    B_i.elem[1][0]=0; B_i.elem[1][1]=1.3; B_i.elem[1][2]=0;
    B_i.elem[2][0]=0;B_i.elem[2][1]=0; B_i.elem[2][2]=1.5;
    B.elem=(float**) B_i.elem;
    printf("second of summing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_summ(A,B));
    C_i.elem[0][0]=2.3; C_i.elem[0][1]=2.2; C_i.elem[0][2]=3.2;
    C_i.elem[1][0]=4.2; C_i.elem[1][1]=6.5; C_i.elem[1][2]=6.7;
    C_i.elem[2][0]=7;C_i.elem[2][1]=8; C_i.elem[2][2]=11.1;
    C.elem=(float**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);


    printf("3/3 matrix sum for float values tests are passsed\n\n\n");

}
void complex_test_matrix_sum(){
    printf("matrix sum tests for complex values are running\n");
    printf("0/2  tests are passsed\n\n\n");
    matrix A;
    matrix B;
    matrix C;
     matrix_c A_i;
    matrix_c B_i;
    matrix_c C_i;
    A.type_name='c';
    B.type_name='c';
    C.type_name='c';
    A.n=3;
    A.m=3;
    B.n=3;
    B.m=3;
    C.n=3;
    C.m=3;
     A_i.n=3;
    A_i.m=3;
    B_i.n=3;
    B_i.m=3;
    C_i.n=3;
    C_i.m=3;
    create_matrix(&A);
    create_matrix(&B);
    create_matrix(&C);
    create_matrix_c(&A_i);
    create_matrix_c(&B_i);
    create_matrix_c(&C_i);
    A_i.elem[0][0].real=1.1; A_i.elem[0][1].real=2.2; A_i.elem[0][2].real=3.2;
    A_i.elem[1][0].real=4.2; A_i.elem[1][1].real=5.2; A_i.elem[1][2].real=6.7;
    A_i.elem[2][0].real=7;A_i.elem[2][1].real=8; A_i.elem[2][2].real=9.6;
    A_i.elem[0][0].im=1.2; A_i.elem[0][1].im=4.4; A_i.elem[0][2].im=7.6;
    A_i.elem[1][0].im=2.5; A_i.elem[1][1].im=5.5; A_i.elem[1][2].im=8.1;
    A_i.elem[2][0].im=3.6;A_i.elem[2][1].im=6.1; A_i.elem[2][2].im=9.1;
    A.elem=(complex**) A_i.elem;
    printf("first of summing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0].real=1.1; B_i.elem[0][1].real=2.2; B_i.elem[0][2].real=3.2;
    B_i.elem[1][0].real=4.2; B_i.elem[1][1].real=5.2; B_i.elem[1][2].real=6.7;
    B_i.elem[2][0].real=7;B_i.elem[2][1].real=8; B_i.elem[2][2].real=9.6;
    B_i.elem[0][0].im=1.2; B_i.elem[0][1].im=4.4; B_i.elem[0][2].im=7.6;
    B_i.elem[1][0].im=2.5; B_i.elem[1][1].im=5.5; B_i.elem[1][2].im=8.1;
    B_i.elem[2][0].im=3.6;B_i.elem[2][1].im=6.1; B_i.elem[2][2].im=9.1;
    B.elem=(complex**) B_i.elem;
    printf("second of summing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_summ(A,B));
    C_i.elem[0][0].real=2.2; C_i.elem[0][1].real=4.4; C_i.elem[0][2].real=6.4;
    C_i.elem[1][0].real=8.4; C_i.elem[1][1].real=10.4; C_i.elem[1][2].real=13.4;
    C_i.elem[2][0].real=14;C_i.elem[2][1].real=16; C_i.elem[2][2].real=19.2;
    C_i.elem[0][0].im=2.4; C_i.elem[0][1].im=8.8; C_i.elem[0][2].im=15.2;
    C_i.elem[1][0].im=5.0; C_i.elem[1][1].im=11.0; C_i.elem[1][2].im=16.2;
    C_i.elem[2][0].im=7.2;C_i.elem[2][1].im=12.2; C_i.elem[2][2].im=18.2;
    C.elem=(complex**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);

   printf("matrix sum tests for complex values are running\n");
    printf("1/2  tests are passsed\n\n\n");

    A_i.elem[0][0].real=1.1; A_i.elem[0][1].real=2.2; A_i.elem[0][2].real=3.2;
    A_i.elem[1][0].real=4.2; A_i.elem[1][1].real=5.2; A_i.elem[1][2].real=6.7;
    A_i.elem[2][0].real=7;A_i.elem[2][1].real=8; A_i.elem[2][2].real=9.6;
    A_i.elem[0][0].im=0; A_i.elem[0][1].im=0; A_i.elem[0][2].im=0;
    A_i.elem[1][0].im=0; A_i.elem[1][1].im=0; A_i.elem[1][2].im=0;
    A_i.elem[2][0].im=0;A_i.elem[2][1].im=0; A_i.elem[2][2].im=0;
    A.elem=(complex**) A_i.elem;
    printf("first of summing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0].real=0; B_i.elem[0][1].real=0; B_i.elem[0][2].real=0;
    B_i.elem[1][0].real=0; B_i.elem[1][1].real=0; B_i.elem[1][2].real=0;
    B_i.elem[2][0].real=0;B_i.elem[2][1].real=0; B_i.elem[2][2].real=0;
    B_i.elem[0][0].im=1.2; B_i.elem[0][1].im=4.4; B_i.elem[0][2].im=7.6;
    B_i.elem[1][0].im=2.5; B_i.elem[1][1].im=5.5; B_i.elem[1][2].im=8.1;
    B_i.elem[2][0].im=3.6;B_i.elem[2][1].im=6.1; B_i.elem[2][2].im=9.1;
    B.elem=(complex**) B_i.elem;
    printf("second of summing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_summ(A,B));
    C_i.elem[0][0].real=1.1; C_i.elem[0][1].real=2.2; C_i.elem[0][2].real=3.2;
    C_i.elem[1][0].real=4.2; C_i.elem[1][1].real=5.2; C_i.elem[1][2].real=6.7;
    C_i.elem[2][0].real=7;C_i.elem[2][1].real=8; C_i.elem[2][2].real=9.6;
    C_i.elem[0][0].im=1.2; C_i.elem[0][1].im=4.4; C_i.elem[0][2].im=7.6;
    C_i.elem[1][0].im=2.5; C_i.elem[1][1].im=5.5; C_i.elem[1][2].im=8.1;
    C_i.elem[2][0].im=3.6;C_i.elem[2][1].im=6.1; C_i.elem[2][2].im=9.1;
    C.elem=(complex**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);



    printf("2/2 matrix sum for complex values tests are passsed\n\n\n");


}
void test_matrix_sum(){


printf("matrix sum tests for all types of values are running\n");

int_test_matrix_sum();
float_test_matrix_sum();
complex_test_matrix_sum();
printf("matrix sum tests are passed for all types of values\n");

}
void int_transpose_matrix_test(){
printf("matrix transpose tests for int values are running\n");
    printf("0/3  tests are passsed\n\n\n");
    matrix A;
    matrix C;
     matrix_i A_i;
    matrix_i C_i;
    A.type_name='i';
    C.type_name='i';
    A.n=3;
    A.m=3;
    C.n=3;
    C.m=3;
     A_i.n=3;
    A_i.m=3;
    C_i.n=3;
    C_i.m=3;
    create_matrix(&A);
    create_matrix(&C);
    create_matrix_i(&A_i);
    create_matrix_i(&C_i);
    A_i.elem[0][0]=1; A_i.elem[0][1]=2; A_i.elem[0][2]=3;
    A_i.elem[1][0]=4; A_i.elem[1][1]=5; A_i.elem[1][2]=6;
    A_i.elem[2][0]=7;A_i.elem[2][1]=8; A_i.elem[2][2]=9;
    A.elem=(int**) A_i.elem;
    printf("matrix to be transposed :\n");
    print_matrix(A);


    printf("calculated result:\n");
    transpose(&A);
    print_matrix(A);
    C_i.elem[0][0]=1; C_i.elem[0][1]=4; C_i.elem[0][2]=7;
    C_i.elem[1][0]=2; C_i.elem[1][1]=5; C_i.elem[1][2]=8;
    C_i.elem[2][0]=3;C_i.elem[2][1]=6; C_i.elem[2][2]=9;
    C.elem=(int**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);

   printf("matrix transpose tests for int values are running\n");
    printf("1/3  tests are passsed\n\n\n");
     A.n=1;
    A.m=1;
    C.n=1;
    C.m=1;
     A_i.n=1;
    A_i.m=1;
    C_i.n=1;
    C_i.m=1;
    create_matrix(&A);
    create_matrix(&C);
    create_matrix_i(&A_i);
    create_matrix_i(&C_i);

     A_i.elem[0][0]=1;
    A.elem=(int**) A_i.elem;
    printf("matrix to be transposed :\n");
    print_matrix(A);


    printf("calculated result:\n");
    transpose(&A);
    print_matrix(A);
    C_i.elem[0][0]=1;
    C.elem=(int**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);


    printf("matrix transpose tests for int values are running\n");
    printf("2/3  tests are passsed\n\n\n");

     A.n=2;
    A.m=3;
    C.n=3;
    C.m=2;
     A_i.n=2;
    A_i.m=3;
    C_i.n=3;
    C_i.m=2;
    create_matrix(&A);
    create_matrix(&C);
    create_matrix_i(&A_i);
    create_matrix_i(&C_i);

    A_i.elem[0][0]=1; A_i.elem[0][1]=2; A_i.elem[0][2]=3;
    A_i.elem[1][0]=4; A_i.elem[1][1]=5; A_i.elem[1][2]=6;

    A.elem=(int**) A_i.elem;
    printf("matrix to be transposed :\n");
    print_matrix(A);


    printf("calculated result:\n");
    transpose(&A);
    print_matrix(A);
    C_i.elem[0][0]=1; C_i.elem[0][1]=4;
    C_i.elem[1][0]=2; C_i.elem[1][1]=5;
    C_i.elem[2][0]=3;C_i.elem[2][1]=6;
    C.elem=(int**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);



    printf("3/3 matrix transpose tests for int values are passsed\n\n\n");

}
void float_transpose_matrix_test(){
printf("matrix transpose tests for float values are running\n");
    printf("0/3  tests are passsed\n\n\n");
    matrix A;
    matrix C;
     matrix_f A_i;
    matrix_f C_i;
    A.type_name='f';
    C.type_name='f';
    A.n=3;
    A.m=3;
    C.n=3;
    C.m=3;
     A_i.n=3;
    A_i.m=3;
    C_i.n=3;
    C_i.m=3;
    create_matrix(&A);
    create_matrix(&C);
    create_matrix_f(&A_i);
    create_matrix_f(&C_i);
    A_i.elem[0][0]=1.1; A_i.elem[0][1]=2.2; A_i.elem[0][2]=3.3;
    A_i.elem[1][0]=4.4; A_i.elem[1][1]=5.5; A_i.elem[1][2]=6.6;
    A_i.elem[2][0]=7.7;A_i.elem[2][1]=8.8; A_i.elem[2][2]=9.9;
    A.elem=(float**) A_i.elem;
    printf("matrix to be transposed :\n");
    print_matrix(A);


    printf("calculated result:\n");
    transpose(&A);
    print_matrix(A);
    C_i.elem[0][0]=1.1; C_i.elem[0][1]=4.4; C_i.elem[0][2]=7.7;
    C_i.elem[1][0]=2.2; C_i.elem[1][1]=5.5; C_i.elem[1][2]=8.8;
    C_i.elem[2][0]=3.3;C_i.elem[2][1]=6.6; C_i.elem[2][2]=9.9;
    C.elem=(float**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);

   printf("matrix transpose tests for float values are running\n");
    printf("1/3  tests are passsed\n\n\n");
     A.n=1;
    A.m=1;
    C.n=1;
    C.m=1;
     A_i.n=1;
    A_i.m=1;
    C_i.n=1;
    C_i.m=1;
    create_matrix(&A);
    create_matrix(&C);
    create_matrix_f(&A_i);
    create_matrix_f(&C_i);

     A_i.elem[0][0]=1.1;
    A.elem=(float**) A_i.elem;
    printf("matrix to be transposed :\n");
    print_matrix(A);


    printf("calculated result:\n");
    transpose(&A);
    print_matrix(A);
    C_i.elem[0][0]=1.1;
    C.elem=(float**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);


    printf("matrix transpose tests for float values are running\n");
    printf("2/3  tests are passsed\n\n\n");

     A.n=2;
    A.m=3;
    C.n=3;
    C.m=2;
     A_i.n=2;
    A_i.m=3;
    C_i.n=3;
    C_i.m=2;
    create_matrix(&A);
    create_matrix(&C);
    create_matrix_f(&A_i);
    create_matrix_f(&C_i);

    A_i.elem[0][0]=1.1; A_i.elem[0][1]=2.87; A_i.elem[0][2]=3;
    A_i.elem[1][0]=4; A_i.elem[1][1]=5; A_i.elem[1][2]=6.4;

    A.elem=(float**) A_i.elem;
    printf("matrix to be transposed :\n");
    print_matrix(A);


    printf("calculated result:\n");
    transpose(&A);
    print_matrix(A);
    C_i.elem[0][0]=1.1; C_i.elem[0][1]=4;
    C_i.elem[1][0]=2.87; C_i.elem[1][1]=5;
    C_i.elem[2][0]=3;C_i.elem[2][1]=6.4;
    C.elem=(float**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);



    printf("3/3 matrix transpose tests for float values are passsed\n\n\n");

}
void complex_transpose_matrix_test(){
printf("matrix transpose tests for complex values are running\n");
    printf("0/3  tests are passsed\n\n\n");
    matrix A;
    matrix C;
     matrix_c A_i;
    matrix_c C_i;
    A.type_name='c';
    C.type_name='c';
    A.n=3;
    A.m=3;
    C.n=3;
    C.m=3;
     A_i.n=3;
    A_i.m=3;
    C_i.n=3;
    C_i.m=3;
    create_matrix(&A);
    create_matrix(&C);
    create_matrix_c(&A_i);
    create_matrix_c(&C_i);
    A_i.elem[0][0].real=1.1; A_i.elem[0][1].real=2.2; A_i.elem[0][2].real=3.2;
    A_i.elem[1][0].real=4.2; A_i.elem[1][1].real=5.2; A_i.elem[1][2].real=6.7;
    A_i.elem[2][0].real=7;A_i.elem[2][1].real=8; A_i.elem[2][2].real=9.6;
    A_i.elem[0][0].im=1.2; A_i.elem[0][1].im=4.4; A_i.elem[0][2].im=7.6;
    A_i.elem[1][0].im=2.5; A_i.elem[1][1].im=5.5; A_i.elem[1][2].im=8.1;
    A_i.elem[2][0].im=3.6;A_i.elem[2][1].im=6.1; A_i.elem[2][2].im=9.1;
    A.elem=(complex**) A_i.elem;
    printf("matrix to be transposed :\n");
    print_matrix(A);


    printf("calculated result:\n");
    transpose(&A);
    print_matrix(A);
    C_i.elem[0][0].real=1.1; C_i.elem[0][1].real=4.2; C_i.elem[0][2].real=7;
    C_i.elem[1][0].real=2.2; C_i.elem[1][1].real=5.2; C_i.elem[1][2].real=8;
    C_i.elem[2][0].real=3.2;C_i.elem[2][1].real=6.7; C_i.elem[2][2].real=9.6;
    C_i.elem[0][0].im=1.2; C_i.elem[0][1].im=2.5; C_i.elem[0][2].im=3.6;
    C_i.elem[1][0].im=4.4; C_i.elem[1][1].im=5.5; C_i.elem[1][2].im=8.1;
    C_i.elem[2][0].im=3.6;C_i.elem[2][1].im=6.1; C_i.elem[2][2].im=9.1;
    C.elem=(complex**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);

   printf("matrix transpose tests for complex values are running\n");
    printf("1/3  tests are passsed\n\n\n");
     A.n=1;
    A.m=1;
    C.n=1;
    C.m=1;
     A_i.n=1;
    A_i.m=1;
    C_i.n=1;
    C_i.m=1;
    create_matrix(&A);
    create_matrix(&C);
    create_matrix_c(&A_i);
    create_matrix_c(&C_i);

     A_i.elem[0][0].real=1.1;
     A_i.elem[0][0].im=0.1;
    A.elem=(complex**) A_i.elem;
    printf("matrix to be transposed :\n");
    print_matrix(A);


    printf("calculated result:\n");
    transpose(&A);
    print_matrix(A);
     C_i.elem[0][0].real=1.1;
     C_i.elem[0][0].im=0.1;
    C.elem=(complex**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);


    printf("matrix transpose tests for complex values are running\n");
    printf("2/3  tests are passsed\n\n\n");

     A.n=1;
    A.m=2;
    C.n=2;
    C.m=1;
     A_i.n=1;
    A_i.m=2;
    C_i.n=2;
    C_i.m=1;
    create_matrix(&A);
    create_matrix(&C);
    create_matrix_c(&A_i);
    create_matrix_c(&C_i);

    A_i.elem[0][0].real=1.1; A_i.elem[0][1].real=2.87;
    A_i.elem[0][0].im=2.1; A_i.elem[0][1].im=1.87;

    A.elem=(complex**) A_i.elem;
    printf("matrix to be transposed :\n");
    print_matrix(A);


    printf("calculated result:\n");
    transpose(&A);
    print_matrix(A);
    C_i.elem[0][0].real=1.1;
    C_i.elem[1][0].real=2.87;
    C_i.elem[0][0].im=2.1;
     C_i.elem[1][0].im=1.87;

    C.elem=(complex**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);



    printf("3/3 matrix transpose tests for float values are passsed\n\n\n");

}
void transpose_matrix_test(){
printf("transpose matrix tests for all types of values are running\n");

int_transpose_matrix_test();
float_transpose_matrix_test();
complex_transpose_matrix_test();
printf("transpose matrix tests are passed for all types of values\n");


}
void int_test_matrix_mult(){
    printf("matrix mult tests for int values are running\n");
    printf("0/3  tests are passsed\n\n\n");
    matrix A;
    matrix B;
    matrix C;
     matrix_i A_i;
    matrix_i B_i;
    matrix_i C_i;
    A.type_name='i';
    B.type_name='i';
    C.type_name='i';
    A.n=3;
    A.m=3;
    B.n=3;
    B.m=3;
    C.n=3;
    C.m=3;
     A_i.n=3;
    A_i.m=3;
    B_i.n=3;
    B_i.m=3;
    C_i.n=3;
    C_i.m=3;
    create_matrix(&A);
    create_matrix(&B);
    create_matrix(&C);
    create_matrix_i(&A_i);
    create_matrix_i(&B_i);
    create_matrix_i(&C_i);
    A_i.elem[0][0]=1; A_i.elem[0][1]=2; A_i.elem[0][2]=3;
    A_i.elem[1][0]=4; A_i.elem[1][1]=5; A_i.elem[1][2]=6;
    A_i.elem[2][0]=7;A_i.elem[2][1]=8; A_i.elem[2][2]=9;
    A.elem=(int**) A_i.elem;
    printf("first of multing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0]=1; B_i.elem[0][1]=4; B_i.elem[0][2]=7;
    B_i.elem[1][0]=2; B_i.elem[1][1]=5; B_i.elem[1][2]=8;
    B_i.elem[2][0]=3;B_i.elem[2][1]=6; B_i.elem[2][2]=9;
    B.elem=(int**) B_i.elem;
    printf("second of multing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_mult(A,B));
    C_i.elem[0][0]=14; C_i.elem[0][1]=32; C_i.elem[0][2]=50;
    C_i.elem[1][0]=32; C_i.elem[1][1]=77; C_i.elem[1][2]=122;
    C_i.elem[2][0]=50;C_i.elem[2][1]=122; C_i.elem[2][2]=194;
    C.elem=(int**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);

    printf("matrix mult tests for int values are running\n");
    printf("1/3  tests are passsed\n\n\n");
     A.n=1;
    A.m=2;
    B.n=2;
    B.m=1;
    C.n=1;
    C.m=1;
     A_i.n=1;
    A_i.m=2;
    B_i.n=2;
    B_i.m=1;

    C_i.n=1;
    C_i.m=1;

    A_i.elem[0][0]=1; A_i.elem[0][1]=2;
    A.elem=(int**) A_i.elem;
    printf("first of multing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0]=5;
    B_i.elem[1][0]=3;

    B.elem=(int**) B_i.elem;
    printf("second of multing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_mult(A,B));
    C_i.elem[0][0]=11;
    C.elem=(int**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);

    printf("matrix mult tests for int values are running\n");
    printf("2/3  tests are passsed\n\n\n");
    A.n=3;
    A.m=2;
    B.n=2;
    B.m=3;
    C.n=3;
    C.m=3;
     A_i.n=3;
    A_i.m=2;
    B_i.n=2;
    B_i.m=3;

    C_i.n=3;
    C_i.m=3;

    A_i.elem[0][0]=1; A_i.elem[0][1]=2;
    A_i.elem[1][0]=4; A_i.elem[1][1]=5;
    A_i.elem[2][0]=7;A_i.elem[2][1]=8;
    A.elem=(int**) A_i.elem;
    printf("first of multing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0]=1; B_i.elem[0][1]=0; B_i.elem[0][2]=0;
    B_i.elem[1][0]=0; B_i.elem[1][1]=1; B_i.elem[1][2]=0;

    B.elem=(int**) B_i.elem;
    printf("second of multing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_mult(A,B));
    C_i.elem[0][0]=1; C_i.elem[0][1]=2; C_i.elem[0][2]=0;
    C_i.elem[1][0]=4; C_i.elem[1][1]=5; C_i.elem[1][2]=0;
    C_i.elem[2][0]=7;C_i.elem[2][1]=8; C_i.elem[2][2]=0;
    C.elem=(int**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);


    printf("3/3 matrix mult for int values tests are passsed\n\n\n");


}
void float_test_matrix_mult(){
    printf("matrix mult tests for float values are running\n");
    printf("0/3  tests are passsed\n\n\n");
    matrix A;
    matrix B;
    matrix C;
     matrix_f A_i;
    matrix_f B_i;
    matrix_f C_i;
    A.type_name='f';
    B.type_name='f';
    C.type_name='f';
    A.n=3;
    A.m=3;
    B.n=3;
    B.m=3;
    C.n=3;
    C.m=3;
     A_i.n=3;
    A_i.m=3;
    B_i.n=3;
    B_i.m=3;
    C_i.n=3;
    C_i.m=3;
    create_matrix(&A);
    create_matrix(&B);
    create_matrix(&C);
    create_matrix_f(&A_i);
    create_matrix_f(&B_i);
    create_matrix_f(&C_i);
    A_i.elem[0][0]=1.1; A_i.elem[0][1]=2.2; A_i.elem[0][2]=3;
    A_i.elem[1][0]=4; A_i.elem[1][1]=5; A_i.elem[1][2]=6;
    A_i.elem[2][0]=7;A_i.elem[2][1]=8; A_i.elem[2][2]=9.4;
    A.elem=(float**) A_i.elem;
    printf("first of multing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0]=1; B_i.elem[0][1]=4; B_i.elem[0][2]=7.67;
    B_i.elem[1][0]=2.34; B_i.elem[1][1]=5; B_i.elem[1][2]=8;
    B_i.elem[2][0]=3;B_i.elem[2][1]=6.43; B_i.elem[2][2]=9;
    B.elem=(float**) B_i.elem;
    printf("second of multing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_mult(A,B));
    C_i.elem[0][0]=15.248; C_i.elem[0][1]=34.69; C_i.elem[0][2]=53.037;
    C_i.elem[1][0]=33.7; C_i.elem[1][1]=79.58; C_i.elem[1][2]=124.68;
    C_i.elem[2][0]=53.92;C_i.elem[2][1]=128.442; C_i.elem[2][2]=202.29;
    C.elem=(float**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);

    printf("matrix mult tests for float values are running\n");
    printf("1/3  tests are passsed\n\n\n");
     A.n=1;
    A.m=2;
    B.n=2;
    B.m=1;
    C.n=1;
    C.m=1;
     A_i.n=1;
    A_i.m=2;
    B_i.n=2;
    B_i.m=1;

    C_i.n=1;
    C_i.m=1;
create_matrix(&A);
    create_matrix(&B);
    create_matrix(&C);
    create_matrix_f(&A_i);
    create_matrix_f(&B_i);
    create_matrix_f(&C_i);
    A_i.elem[0][0]=1.2; A_i.elem[0][1]=2.9;
    A.elem=(float**) A_i.elem;
    printf("first of multing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0]=5.2;
    B_i.elem[1][0]=3.8;

    B.elem=(float**) B_i.elem;
    printf("second of multing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_mult(A,B));
    C_i.elem[0][0]=17.26;
    C.elem=(float**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);

    printf("matrix mult tests for float values are running\n");
    printf("2/3  tests are passsed\n\n\n");
    A.n=3;
    A.m=2;
    B.n=2;
    B.m=3;
    C.n=3;
    C.m=3;
     A_i.n=3;
    A_i.m=2;
    B_i.n=2;
    B_i.m=3;

    C_i.n=3;
    C_i.m=3;
    create_matrix(&A);
    create_matrix(&B);
    create_matrix(&C);
    create_matrix_f(&A_i);
    create_matrix_f(&B_i);
    create_matrix_f(&C_i);

    A_i.elem[0][0]=1.3; A_i.elem[0][1]=2.4;
    A_i.elem[1][0]=4.3; A_i.elem[1][1]=5.6;
    A_i.elem[2][0]=7.3;A_i.elem[2][1]=8;
    A.elem=(float**) A_i.elem;
    printf("first of multing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0]=1.5; B_i.elem[0][1]=0.9; B_i.elem[0][2]=0.4;
    B_i.elem[1][0]=0; B_i.elem[1][1]=1.4; B_i.elem[1][2]=0.3;

    B.elem=(float**) B_i.elem;
    printf("second of multing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_mult(A,B));
    C_i.elem[0][0]=1.95; C_i.elem[0][1]=4.53; C_i.elem[0][2]=1.24;
    C_i.elem[1][0]=6.45; C_i.elem[1][1]=11.71; C_i.elem[1][2]=3.4;
    C_i.elem[2][0]=10.95;C_i.elem[2][1]=17.77; C_i.elem[2][2]=5.32;
    C.elem=(float**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);


    printf("3/3 matrix mult for float values tests are passsed\n\n\n");


}
void complex_test_matrix_mult(){

printf("matrix mult tests for complex values are running\n");
    printf("0/2  tests are passsed\n\n\n");
    matrix A;
    matrix B;
    matrix C;
    matrix_c A_i;
    matrix_c B_i;
    matrix_c C_i;
    A.type_name='c';
    B.type_name='c';
    C.type_name='c';
    A.n=3;
    A.m=3;
    B.n=3;
    B.m=3;
    C.n=3;
    C.m=3;
     A_i.n=3;
    A_i.m=3;
    B_i.n=3;
    B_i.m=3;
    C_i.n=3;
    C_i.m=3;
    create_matrix(&A);
    create_matrix(&B);
    create_matrix(&C);
    create_matrix_c(&A_i);
    create_matrix_c(&B_i);
    create_matrix_c(&C_i);

    A_i.elem[0][0].real=1.1; A_i.elem[0][1].real=2.2; A_i.elem[0][2].real=3.2;
    A_i.elem[1][0].real=4.2; A_i.elem[1][1].real=5.2; A_i.elem[1][2].real=6.7;
    A_i.elem[2][0].real=7;A_i.elem[2][1].real=8; A_i.elem[2][2].real=9.6;
    A_i.elem[0][0].im=1.2; A_i.elem[0][1].im=4.4; A_i.elem[0][2].im=7.6;
    A_i.elem[1][0].im=2.5; A_i.elem[1][1].im=5.5; A_i.elem[1][2].im=8.1;
    A_i.elem[2][0].im=3.6;A_i.elem[2][1].im=6.1; A_i.elem[2][2].im=9.1;
    A.elem=(complex**) A_i.elem;
    printf("first of multing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0].real=1.1; B_i.elem[0][1].real=2.2; B_i.elem[0][2].real=3.2;
    B_i.elem[1][0].real=4.2; B_i.elem[1][1].real=5.2; B_i.elem[1][2].real=6.7;
    B_i.elem[2][0].real=7;B_i.elem[2][1].real=8; B_i.elem[2][2].real=9.6;
    B_i.elem[0][0].im=1.2; B_i.elem[0][1].im=4.4; B_i.elem[0][2].im=7.6;
    B_i.elem[1][0].im=2.5; B_i.elem[1][1].im=5.5; B_i.elem[1][2].im=8.1;
    B_i.elem[2][0].im=3.6;B_i.elem[2][1].im=6.1; B_i.elem[2][2].im=9.1;
    B.elem=(complex**) B_i.elem;
    printf("second of multing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_mult(A,B));
    C_i.elem[0][0].real= -6.95; C_i.elem[0][1].real=91.34; C_i.elem[0][2].real=-64.94;
    C_i.elem[1][0].real=27.45; C_i.elem[1][1].real=-0.78; C_i.elem[1][2].real=-24.66;
    C_i.elem[2][0].real=56.17;C_i.elem[2][1].real=28.9; C_i.elem[2][2].real=8.580;
    C_i.elem[0][0].im=91.34; C_i.elem[0][1].im=122.78; C_i.elem[0][2].im=161.58;
    C_i.elem[1][0].im=124.71; C_i.elem[1][1].im=186.85; C_i.elem[1][2].im=257.62;
    C_i.elem[2][0].im=156.24;C_i.elem[2][1].im=245.8; C_i.elem[2][2].im=345.11;
    C.elem=(complex**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);

   printf("matrix mult tests for complex values are running\n");
    printf("1/2  tests are passsed\n\n\n");
     A.n=1;
    A.m=2;
    B.n=2;
    B.m=1;
    C.n=1;
    C.m=1;
     A_i.n=1;
    A_i.m=2;
    B_i.n=2;
    B_i.m=1;

    C_i.n=1;
    C_i.m=1;
    create_matrix(&A);
    create_matrix(&B);
    create_matrix(&C);
    create_matrix_c(&A_i);
    create_matrix_c(&B_i);
    create_matrix_c(&C_i);

    A_i.elem[0][0].real=1.2; A_i.elem[0][1].real=2.9;
    A_i.elem[0][0].im=2; A_i.elem[0][1].im=2.9;
    A.elem=(complex**) A_i.elem;
    printf("first of multing matrixes:\n");
    print_matrix(A);
    B_i.elem[0][0].real=5.2;
    B_i.elem[1][0].real=3.8;
    B_i.elem[0][0].im=5.2;
    B_i.elem[1][0].im=3.8;

    B.elem=(complex**) B_i.elem;
    printf("second of multing matrixes:\n");
    print_matrix(B);
    printf("calculated result:\n");
    print_matrix(matrix_mult(A,B));
    C_i.elem[0][0].real=-4.16;
    C_i.elem[0][0].im= 38.68;
    C.elem=(complex**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);



    printf("2/2 matrix mult for complex values tests are passsed\n\n\n");






}
void test_matrix_mult(){
printf("matrix mult tests for all types of values are running\n");

int_test_matrix_mult();
float_test_matrix_mult();
complex_test_matrix_mult();
printf("matrix mult tests are passed for all types of values\n");}
void int_test_add_linear_combination(){
printf("matrix adding linear combination for int values are running\n");
    printf("0/2  tests are passsed\n\n\n");
    matrix A;
    matrix C;
     matrix_i A_i;
    matrix_i C_i;
    A.type_name='i';
    C.type_name='i';
    A.n=3;
    A.m=3;
    C.n=3;
    C.m=3;
     A_i.n=3;
    A_i.m=3;
    C_i.n=3;
    C_i.m=3;
    create_matrix(&A);
    create_matrix(&C);
    create_matrix_i(&A_i);
    create_matrix_i(&C_i);
    A_i.elem[0][0]=1; A_i.elem[0][1]=2; A_i.elem[0][2]=3;
    A_i.elem[1][0]=4; A_i.elem[1][1]=5; A_i.elem[1][2]=6;
    A_i.elem[2][0]=7;A_i.elem[2][1]=8; A_i.elem[2][2]=9;
    A.elem=(int**) A_i.elem;

    printf("matrix to add linear combination :\n");
    print_matrix(A);
    void* alphos;
    int alp[3]={1,3,0};
    alphos=(int*) alp;
    printf("array of linear combination coefficients(adding to the 3 row):\n");
    for (int i=0;i<3;++i){
        printf("%5d   ",(int)*(alp+i));
    }
    printf("\n");
    Add_line_string_combination(&A,2, alphos );
    printf("calculated result:\n");
    print_matrix(A);
   C_i.elem[0][0]=1; C_i.elem[0][1]=2; C_i.elem[0][2]=3;
    C_i.elem[1][0]=4; C_i.elem[1][1]=5; C_i.elem[1][2]=6;
    C_i.elem[2][0]=20;C_i.elem[2][1]=25; C_i.elem[2][2]=30;
    C.elem=(int**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);
     printf("1/2  tests are passsed\n\n\n");


    A_i.elem[0][0]=5; A_i.elem[0][1]=4; A_i.elem[0][2]=13;
    A_i.elem[1][0]=44; A_i.elem[1][1]=455; A_i.elem[1][2]=6;
    A_i.elem[2][0]=8;A_i.elem[2][1]=8; A_i.elem[2][2]=49;
    A.elem=(int**) A_i.elem;

    printf("matrix to add linear combination :\n");
    print_matrix(A);

    int alp1[3]={0,1,0};
    alphos=(int*) alp1;
    printf("array of linear combination coefficients(adding to the 1 row):\n");
    for (int i=0;i<3;++i){
        printf("%5d   ",(int)*(alp+i));
    }
    printf("\n");
    Add_line_string_combination(&A,0, alphos );
    printf("calculated result:\n");
    print_matrix(A);
   C_i.elem[0][0]=49; C_i.elem[0][1]=459; C_i.elem[0][2]=19;
    C_i.elem[1][0]=44; C_i.elem[1][1]=455; C_i.elem[1][2]=6;
    C_i.elem[2][0]=8;C_i.elem[2][1]=8; C_i.elem[2][2]=49;
    C.elem=(int**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);
    printf("2/2 matrix adding linear combination tests for int values are passsed\n\n\n");



}
void float_test_add_linear_combination(){
printf("matrix adding linear combination for float values are running\n");
    printf("0/2  tests are passsed\n\n\n");
    matrix A;
    matrix C;
     matrix_f A_i;
    matrix_f C_i;
    A.type_name='f';
    C.type_name='f';
    A.n=3;
    A.m=3;
    C.n=3;
    C.m=3;
     A_i.n=3;
    A_i.m=3;
    C_i.n=3;
    C_i.m=3;
    create_matrix(&A);
    create_matrix(&C);
    create_matrix_f(&A_i);
    create_matrix_f(&C_i);
    A_i.elem[0][0]=1; A_i.elem[0][1]=2; A_i.elem[0][2]=3.9;
    A_i.elem[1][0]=4; A_i.elem[1][1]=5.9; A_i.elem[1][2]=6;
    A_i.elem[2][0]=7.7;A_i.elem[2][1]=8; A_i.elem[2][2]=9;
    A.elem=(float**) A_i.elem;

    printf("matrix to add linear combination :\n");
    print_matrix(A);
    void* alphos;
    float alp[3]={1,3.5,0};
    alphos=(float*) alp;
    printf("array of linear combination coefficients(adding to the 3 row):\n");
    for (int i=0;i<3;++i){
        printf("%9.3f   ",(float)*(alp+i));
    }
    printf("\n");
    Add_line_string_combination(&A,2, alphos );
    printf("calculated result:\n");
    print_matrix(A);
   C_i.elem[0][0]=1; C_i.elem[0][1]=2; C_i.elem[0][2]=3;
    C_i.elem[1][0]=4; C_i.elem[1][1]=5.9; C_i.elem[1][2]=6;
    C_i.elem[2][0]=22.7;C_i.elem[2][1]=30.65; C_i.elem[2][2]=33.9;
    C.elem=(float**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);
     printf("1/2  tests are passsed\n\n\n");


    A_i.elem[0][0]=5; A_i.elem[0][1]=4; A_i.elem[0][2]=1.3;
    A_i.elem[1][0]=4.4; A_i.elem[1][1]=5.6; A_i.elem[1][2]=6;
    A_i.elem[2][0]=8;A_i.elem[2][1]=8; A_i.elem[2][2]=4.9;
    A.elem=(float**) A_i.elem;

    printf("matrix to add linear combination :\n");
    print_matrix(A);

    float alp1[3]={0.2,1,0};
    alphos=(float*) alp1;
    printf("array of linear combination coefficients(adding to the 1 row):\n");
    for (int i=0;i<3;++i){
        printf("%9.3f   ",(float)*(alp+i));
    }
    printf("\n");
    Add_line_string_combination(&A,0, alphos );
    printf("calculated result:\n");
    print_matrix(A);
   C_i.elem[0][0]=9.4; C_i.elem[0][1]=9.6; C_i.elem[0][2]=7.3;
    C_i.elem[1][0]=4.4; C_i.elem[1][1]=5.6; C_i.elem[1][2]=6;
    C_i.elem[2][0]=8;C_i.elem[2][1]=8; C_i.elem[2][2]=49;
    C.elem=(float**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);
    printf("2/2 matrix adding linear combination tests for float values are passsed\n\n\n");



}
void complex_test_add_linear_combination(){
printf("matrix adding linear combination for complex values are running\n");
    printf("0/2  tests are passsed\n\n\n");
    matrix A;
    matrix C;
     matrix_c A_i;
    matrix_c C_i;
    A.type_name='c';
    C.type_name='c';
    A.n=3;
    A.m=3;
    C.n=3;
    C.m=3;
     A_i.n=3;
    A_i.m=3;
    C_i.n=3;
    C_i.m=3;
    create_matrix(&A);
    create_matrix(&C);
    create_matrix_f(&A_i);
    create_matrix_f(&C_i);
   A_i.elem[0][0].real=1.1; A_i.elem[0][1].real=2.2; A_i.elem[0][2].real=3.2;
    A_i.elem[1][0].real=4.2; A_i.elem[1][1].real=5.2; A_i.elem[1][2].real=6.7;
    A_i.elem[2][0].real=7;A_i.elem[2][1].real=8; A_i.elem[2][2].real=9.6;
    A_i.elem[0][0].im=1.2; A_i.elem[0][1].im=4.4; A_i.elem[0][2].im=7.6;
    A_i.elem[1][0].im=2.5; A_i.elem[1][1].im=5.5; A_i.elem[1][2].im=8.1;
    A_i.elem[2][0].im=3.6;A_i.elem[2][1].im=6.1; A_i.elem[2][2].im=9.1;
    A.elem=(complex**) A_i.elem;

    printf("matrix to add linear combination :\n");
    print_matrix(A);
    void* alphos;
    complex alp[3];
    alp[0].real=1;
    alp[0].im=0;
    alp[1].real=1;
    alp[1].im=0.8;
    alp[2].real=1.6;
    alp[2].im=4.7;
    alphos=(complex*) alp;
    printf("array of linear combination coefficients(adding to the 3 row):\n");
    for (int i=0;i<3;++i){
        printf("%9.3f   ",alp[i].real);
        printf("+ i * %9.3f   \t",alp[i].im);
    }
    printf("\n");
    Add_line_string_combination(&A,2, alphos );
    printf("calculated result:\n");
    print_matrix(A);
    C_i.elem[0][0].real=1.1; C_i.elem[0][1].real=2.2; C_i.elem[0][2].real=3.2;
    C_i.elem[1][0].real=4.2; C_i.elem[1][1].real=5.2; C_i.elem[1][2].real=6.7;
    C_i.elem[2][0].real=10.3;C_i.elem[2][1].real=11; C_i.elem[2][2].real=13.02;
    C_i.elem[0][0].im=1.2; C_i.elem[0][1].im=4.4; C_i.elem[0][2].im=7.6;
    C_i.elem[1][0].im=2.5; C_i.elem[1][1].im=5.5; C_i.elem[1][2].im=8.1;
    C_i.elem[2][0].im=10.66;C_i.elem[2][1].im=20.16; C_i.elem[2][2].im=30.16;
    C.elem=(complex**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);
     printf("1/2  tests are passsed\n\n\n");


    A_i.elem[0][0].real=1.1; A_i.elem[0][1].real=2.2; A_i.elem[0][2].real=3.2;
    A_i.elem[1][0].real=4.2; A_i.elem[1][1].real=5.2; A_i.elem[1][2].real=6.7;
    A_i.elem[2][0].real=7;A_i.elem[2][1].real=8; A_i.elem[2][2].real=9.6;
    A_i.elem[0][0].im=1.2; A_i.elem[0][1].im=4.4; A_i.elem[0][2].im=7.6;
    A_i.elem[1][0].im=2.5; A_i.elem[1][1].im=5.5; A_i.elem[1][2].im=8.1;
    A_i.elem[2][0].im=3.6;A_i.elem[2][1].im=6.1; A_i.elem[2][2].im=9.1;
    A.elem=(complex**) A_i.elem;

    printf("matrix to add linear combination :\n");
    print_matrix(A);


    alp[1].real=1;
    alp[2].im=0;
    alp[2].real=1;
    alp[0].im=0.8;
    alp[0].real=1.6;
    alp[1].im=4.7;
    alphos=(complex*) alp;
    printf("array of linear combination coefficients(adding to the 1 row):\n");
    for (int i=0;i<3;++i){
        printf("%9.3f   ",alp[i].real);
        printf("+ i * %9.3f   \t",alp[i].im);
    }
    printf("\n");
    Add_line_string_combination(&A,0, alphos );
    printf("calculated result:\n");
    print_matrix(A);
    C_i.elem[0][0].real=0.55; C_i.elem[0][1].real=-10.45; C_i.elem[0][2].real=-18.57;
    C_i.elem[1][0].real=4.2; C_i.elem[1][1].real=5.2; C_i.elem[1][2].real=6.7;
    C_i.elem[2][0].real=7;C_i.elem[2][1].real=8; C_i.elem[2][2].real=9.6;
    C_i.elem[0][0].im=27.04; C_i.elem[0][1].im=40.44; C_i.elem[0][2].im=56.29;
    C_i.elem[1][0].im=2.5; C_i.elem[1][1].im=5.5; C_i.elem[1][2].im=8.1;
    C_i.elem[2][0].im=3.6;C_i.elem[2][1].im=6.1; C_i.elem[2][2].im=9.1;
    C.elem=(complex**) C_i.elem;
    printf("expected result:\n");
    print_matrix(C);
    printf("2/2 matrix adding linear combination tests for complex values are passsed\n\n\n");



}
test_add_linear_combination(){
printf("matrix addiing linear combination tests for all types of values are running\n");

int_test_add_linear_combination();
float_test_add_linear_combination();
complex_test_add_linear_combination();
printf("matrix addiing linear combination mult tests are passed for all types of values\n");}
int test (){
test_matrix_sum();
test_matrix_mult();
transpose_matrix_test();
test_add_linear_combination();

return 0;
}
