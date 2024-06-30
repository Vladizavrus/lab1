
#pragma once
#include "rectangular matrix.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

complex complex_sum(complex a,complex b){
complex res;
res.real=a.real+b.real;
res.im=a.im+b.im;
return res;}

complex complex_mult(complex a, complex b){
complex res;
res.real=a.real*b.real-a.im*b.im;
res.im=a.im*b.real+a.real*b.im;
return res;}

void print_matrix(matrix A){
    if (A.type_name=='i'){
    matrix_i B;
    B.n=A.n;
    B.m=A.m;
    B.elem=(int**) A.elem;
    print_matrix_i(B);
}
    if (A.type_name=='f'){
    matrix_f B;
    B.n=A.n;
    B.m=A.m;
    B.elem=(float**) A.elem;
    print_matrix_f(B);
}
    if (A.type_name=='c'){
    matrix_c B;
    B.n=A.n;
    B.m=A.m;
    B.elem=(complex**) A.elem;
    print_matrix_c(B);
}

}
void print_matrix_i (matrix_i A){

    for ( int i=0;i<A.n;i++){
        for(int j=0;j<A.m;j++){
            printf("%5d   ",A.elem[i][j]);}
        printf ("\n");}
}
void print_matrix_f (matrix_f A){

    for ( int i=0;i<A.n;i++){
        for(int j=0;j<A.m;j++){
            printf("%9.3f   ",A.elem[i][j]);
        }
        printf ("\n");
    }
}
void print_matrix_c (matrix_c A){

    for ( int i=0;i<A.n;i++){
        for(int j=0;j<A.m;j++){
            printf("%9.3f + i * %9.3f   ",A.elem[i][j].real, A.elem[i][j].im);
        }
    printf ("\n");
  }
}

int create_matrix (pmatrix A){
     if (A->type_name=='i'){
    matrix_i B;

    B.n=A->n;
    B.m=A->m;
    create_matrix_i(&B);

    A->elem= B.elem;
}
if (A->type_name=='f'){
    matrix_f B;

    B.n=A->n;
    B.m=A->m;
    create_matrix_f(&B);

    A->elem=B.elem;
}
if (A->type_name=='c'){
    matrix_c B;

    B.n=A->n;
    B.m=A->m;
    create_matrix_c(&B);

    A->elem=B.elem;
}
    return 0;
}
int create_and_scan_matrix(pmatrix A){
    printf("set the type of matrix elements (only 'i'; 'f'; 'c'    for  int; float; complex variable type)\n");
    //scanf("%c", &(A->type_name));     this bad guy takes '\n' or ' ' from previuos input

    char temp='0';
    while(!(isalpha(temp))){
        temp=getchar();
    }
    A->type_name=temp;

        if (A->type_name=='i'){
    matrix_i B;

    create_and_scan_matrix_i(&B);
     A->n=B.n;
    A->m=B.m;
    A->elem= B.elem;
}
if (A->type_name=='f'){
    matrix_f B;

    create_and_scan_matrix_f(&B);
     A->n=B.n;
    A->m=B.m;
    A->elem= B.elem;
}
if (A->type_name=='c'){
    matrix_c B;

    create_and_scan_matrix_c(&B);
     A->n=B.n;
    A->m=B.m;
    A->elem= B.elem;
}


return 0;}
int create_matrix_i(pmatrix_i A){




    A->elem=calloc(A->n,sizeof(int*));
    if (A->elem=="NUll"){printf("Oops!\nmemory cannot be allocated:(\n");exit (1);}

    for (int i=0; i<A->n; ++i){
        *(A->elem+i)=calloc(A->m,sizeof(int));
        if (*(A->elem+i)=="NUll"){printf("Oops!\nmemory cannot be allocated:(\n");exit (1);}
    }



     return 0;
}
int create_and_scan_matrix_i(pmatrix_i A){

    printf("set numbers of stings(n) and columns(m) (used matrix n*m)\n");
    scanf("%d%d", &(A->n),&(A->m));


    create_matrix_i(A);


     for (int i=0; i<A->n; ++i){
        for (int j=0; j<A->m; ++j){
            printf("enter elem[%d][%d]\n",i+1,j+1);
            scanf("%d",(*(A->elem+i)+j));
        }
     }
     return 0;
}
int create_matrix_f(pmatrix_f A){




    A->elem=calloc(A->n,sizeof(float*));
    if (A->elem=="NUll"){printf("Oops!\nmemory cannot be allocated:(\n");exit (1);}

    for (int i=0; i<A->n; ++i){
        *(A->elem+i)=calloc(A->m,sizeof(float));
        if (*(A->elem+i)=="NUll"){printf("Oops!\nmemory cannot be allocated:(\n");exit (1);}
    }



     return 0;
}
int create_and_scan_matrix_f(pmatrix_f A){

    printf("set numbers of stings(n) and columns(m) (used matrix n*m)\n");
    scanf("%d%d", &(A->n),&(A->m));


    create_matrix_f( A);


     for (int i=0; i<A->n; ++i){
        for (int j=0; j<A->m; ++j){
            printf("enter elem[%d][%d]\n",i+1,j+1);
            scanf("%f",(*(A->elem+i)+j));
        }
     }
     return 0;
}
int create_matrix_c(pmatrix_c A){




    A->elem=calloc(A->n,sizeof(complex*));
    if (A->elem=="NUll"){printf("Oops!\nmemory cannot be allocated:(\n");exit (1);}

    for (int i=0; i<A->n; ++i){
        *(A->elem+i)=calloc(A->m,sizeof(complex));
        if (*(A->elem+i)=="NUll"){printf("Oops!\nmemory cannot be allocated:(\n");exit (1);}
    }



     return 0;
}
int create_and_scan_matrix_c(pmatrix_c A){

    printf("set numbers of stings(n) and columns(m) (used matrix n*m)\n");
    scanf("%d%d", &(A->n),&(A->m));


   create_matrix_c(A);



     for (int i=0; i<A->n; ++i){
        for (int j=0; j<A->m; ++j){
            printf("enter real part of elem[%d][%d]\n",i+1,j+1);
            scanf("%f",(&(*(A->elem+i)+j)->real));
            printf("enter imaginary part of elem[%d][%d]\n",i+1,j+1);
            scanf("%f",(&(*(A->elem+i)+j)->im));
        }
     }
     return 0;
}
matrix matrix_summ(matrix A, matrix B){
if(A.type_name!=B.type_name){printf("conflicting data types for summing matrixes\n"); exit (2);}

    matrix C;
     C.n=A.n;
    C.m=A.m;
    C.type_name=A.type_name;

    if (A.type_name=='i'){
    matrix_i A2;
    matrix_i B2;
    B2.n=A.n;
    B2.m=A.m;
    A2.n=A.n;
    A2.m=A.m;
    B2.elem=(int**) B.elem;
    A2.elem=(int**) A.elem;
    matrix_i C2;
    C2=matrix_summ_i(A2,B2);
    C.elem=C2.elem;
}
if (A.type_name=='f'){
    matrix_f A2;
    matrix_f B2;
    B2.n=A.n;
    B2.m=A.m;
    A2.n=A.n;
    A2.m=A.m;
    B2.elem=(float**) B.elem;
    A2.elem=(float**) A.elem;
    matrix_f C2;
    C2=matrix_summ_f(A2,B2);
    C.elem=C2.elem;
}
if (A.type_name=='c'){
    matrix_c A2;
    matrix_c B2;
    B2.n=A.n;
    B2.m=A.m;
    A2.n=A.n;
    A2.m=A.m;
    B2.elem=(complex**) B.elem;
    A2.elem=(complex**) A.elem;
    matrix_c C2;
    C2=matrix_summ_c(A2,B2);
    C.elem=C2.elem;
}
return C;
}
matrix_i matrix_summ_i(matrix_i A, matrix_i B){
    if((A.n!=B.n)||(A.m!=B.m)){printf("Oops!\nnumbers of strings and colums in the matrixes must be the same\n:(\n");exit (1);}


    matrix_i C;
    C.n=A.n;
    C.m=A.m;
    create_matrix_i(&C);

      for (int i=0; i<A.n; ++i){
        for (int j=0; j<A.m; ++j){


            *(*(C.elem+i)+j)=A.elem[i][j]+B.elem[i][j];
        }
     }


return C;
}
matrix_f matrix_summ_f(matrix_f A, matrix_f B){
    if((A.n!=B.n)||(A.m!=B.m)){printf("Oops!\nnumbers of strings and colums in the matrixes must be the same\n:(\n");exit (1);}


    matrix_f C;
     C.n=A.n;
    C.m=A.m;
    create_matrix_f(&C);

      for (int i=0; i<A.n; ++i){
        for (int j=0; j<A.m; ++j){


            *(*(C.elem+i)+j)=A.elem[i][j]+B.elem[i][j];
        }
     }


return C;
}
matrix_c matrix_summ_c(matrix_c A, matrix_c B){
    if((A.n!=B.n)||(A.m!=B.m)){printf("Oops!\nnumbers of strings and colums in the matrixes must be the same\n:(\n");exit (1);}


    matrix_c C;
     C.n=A.n;
    C.m=A.m;
    create_matrix_c(&C);


      for (int i=0; i<A.n; ++i){
        for (int j=0; j<A.m; ++j){


            *(*(C.elem+i)+j)=complex_sum(A.elem[i][j],B.elem[i][j]);
        }
     }


return C;
}
int transpose(pmatrix A){

        if (A->type_name=='i'){
    matrix_i B;
    B.n=A->n;
    B.m=A->m;
    B.elem=(int**) A->elem;         //kinda bad style;     now we have 2 pointers point to the same memory sell
    transpose_i(&B);
    A->elem=(int**) B.elem;
}
if (A->type_name=='f'){
    matrix_f B;
    B.n=A->n;
    B.m=A->m;
    B.elem=(float**) A->elem;
    transpose_f(&B);
    A->elem=(float**) B.elem;
}
if (A->type_name=='c'){
    matrix_c B;
    B.n=A->n;
    B.m=A->m;
    B.elem=(complex**) A->elem;
    transpose_c(&B);
    A->elem=(complex**) B.elem;

}
    int temp=A->m;
    A->m=A->n;
    A->n=temp;
    return (0);
}
int transpose_i(pmatrix_i A){

           matrix_i Tmatrix;
            Tmatrix.n=A->m;
    Tmatrix.m=A->n;
    create_matrix_i(&Tmatrix);


         for (size_t i = 0; i != A->n; ++i) {
            for (size_t j = 0; j != A->m; ++j) {
                Tmatrix.elem[j][i] = A->elem[i][j];
            }
        }

        int temp=A->m;
        A->m=A->n;
        A->n=temp;

        free (A->elem);
        create_matrix_i(A);


       for (size_t i = 0; i != A->n; ++i) {
            for (size_t j = 0; j != A->m; ++j) {
               A->elem[i][j]= Tmatrix.elem[i][j];
            }
        }
        distruct_i(&Tmatrix);


 }
 int transpose_f(pmatrix_f A){

           matrix_f Tmatrix;
           Tmatrix.n=A->m;
    Tmatrix.m=A->n;
    create_matrix_f(&Tmatrix);


         for (size_t i = 0; i != A->n; ++i) {
            for (size_t j = 0; j != A->m; ++j) {
                Tmatrix.elem[j][i] = A->elem[i][j];
            }
        }

        int temp=A->m;
        A->m=A->n;
        A->n=temp;

        free (A->elem);
        create_matrix_f(A);


       for (size_t i = 0; i != A->n; ++i) {
            for (size_t j = 0; j != A->m; ++j) {
               A->elem[i][j]= Tmatrix.elem[i][j];
            }
        }
        distruct_f(&Tmatrix);

 }
 int transpose_c(pmatrix_c A){

           matrix_c Tmatrix;
           Tmatrix.n=A->m;
    Tmatrix.m=A->n;
    create_matrix_c(&Tmatrix);


         for (size_t i = 0; i != A->n; ++i) {
            for (size_t j = 0; j != A->m; ++j) {
                Tmatrix.elem[j][i] = A->elem[i][j];
            }
        }

        int temp=A->m;
        A->m=A->n;
        A->n=temp;

        free (A->elem);
        create_matrix_c(A);


       for (size_t i = 0; i != A->n; ++i) {
            for (size_t j = 0; j != A->m; ++j) {
               A->elem[i][j]= Tmatrix.elem[i][j];
            }
        }
    distruct_c(&Tmatrix);

 }
    matrix matrix_mult(matrix A, matrix B){
        if(A.type_name!=B.type_name){printf("conflicting data types for multipling  matrixes\n"); exit (2);}

    matrix C;
     C.n=A.n;
    C.m=B.m;
    C.type_name=A.type_name;

    if (A.type_name=='i'){
    matrix_i A2;
    matrix_i B2;
    B2.n=B.n;
    B2.m=B.m;
    A2.n=A.n;
    A2.m=A.m;
    B2.elem=(int**) B.elem;
    A2.elem=(int**) A.elem;
    matrix_i C2;
    C2=matrix_mult_i(A2,B2);
    C.elem=C2.elem;
}
if (A.type_name=='f'){
    matrix_f A2;
    matrix_f B2;
    B2.n=B.n;
    B2.m=B.m;
    A2.n=A.n;
    A2.m=A.m;
    B2.elem=(float**) B.elem;
    A2.elem=(float**) A.elem;
    matrix_f C2;
    C2=matrix_mult_f(A2,B2);
    C.elem=C2.elem;
}
if (A.type_name=='c'){
    matrix_c A2;
    matrix_c B2;
    B2.n=B.n;
    B2.m=B.m;
    A2.n=A.n;
    A2.m=A.m;
    B2.elem=(complex**) B.elem;
    A2.elem=(complex**) A.elem;
    matrix_c C2;
    C2=matrix_mult_c(A2,B2);
    C.elem=C2.elem;
}
return C;
    }
    matrix_i matrix_mult_i(matrix_i A, matrix_i B){
if((A.m!=B.n)){printf("Oops!\nnumber of colums in the first matrix and number of strings in the second one must be the same:(\n");exit (3);}

matrix_i C;
C.n=A.n;
C.m=B.m;
create_matrix_i(&C);

for (size_t i = 0; i != A.n; ++i) {
            for (size_t j = 0; j != B.m; ++j) {
                    C.elem[i][j]=0;
                for (size_t k = 0; k != A.m; ++k){
                    C.elem[i][j]+=A.elem[i][k]*B.elem[k][j];
                }
            }
        }

return C;

}
    matrix_f matrix_mult_f(matrix_f A, matrix_f B){
if((A.m!=B.n)){printf("Oops!\nnumber of colums in the first matrix and number of strings in the second one must be the same:(\n");exit (3);}

matrix_f C;
C.n=A.n;
C.m=B.m;
create_matrix_f(&C);

for (size_t i = 0; i != A.n; ++i) {
            for (size_t j = 0; j != B.m; ++j) {
                    C.elem[i][j]=0;
                for (size_t k = 0; k != A.m; ++k){
                    C.elem[i][j]+=A.elem[i][k]*B.elem[k][j];
                }
            }
        }

return C;

}
    matrix_c matrix_mult_c(matrix_c A, matrix_c B){
if((A.m!=B.n)){printf("Oops!\nnumber of colums in the first matrix and number of strings in the second one must be the same:(\n");exit (3);}

matrix_c C;
C.n=A.n;
C.m=B.m;
create_matrix_c(&C);

for (size_t i = 0; i != A.n; ++i) {
            for (size_t j = 0; j != B.m; ++j) {
                    C.elem[i][j].im=0;
                    C.elem[i][j].real=0;
                for (size_t k = 0; k != A.m; ++k){
                    C.elem[i][j]=complex_sum( C.elem[i][j],complex_mult(  A.elem[i][k]  ,B.elem[k][j]));
                }
            }
        }

return C;
}
    int* Multiplied_string_i( pmatrix_i A, int k, int a){             //this function returns k string in Matrix A multiplyed by number a

        int *str=calloc(A->m,sizeof(int));
        if (str=="NUll"){printf("Oops!\nmemory cannot be allocated:(\n");exit (1);}


            for (size_t j = 0; j != A->m; ++j) {
             str[j]=A->elem[k][j]*a;
            }
            return str;

    }
    float* Multiplied_string_f( pmatrix_f A, int k, float a){          //this function returns k string in Matrix A multiplyed by number a

        float *str=calloc(A->m,sizeof(float));
        if (str=="NUll"){printf("Oops!\nmemory cannot be allocated:(\n");exit (1);}


            for (size_t j = 0; j != A->m; ++j) {
             str[j]=A->elem[k][j]*a;
            }
            return str;}
    complex* Multiplied_string_c( pmatrix_c A, int k, complex a){             //this function returns k string in Matrix A multiplyed by number a

        complex *str=calloc(A->m,sizeof(complex));
        if (str=="NUll"){printf("Oops!\nmemory cannot be allocated:(\n");exit (1);}


            for (size_t j = 0; j != A->m; ++j) {
             str[j]=complex_mult(A->elem[k][j],a);
            }
            return str;

    }
    int Add_line_string_combination(pmatrix A,int k, void* alphos ){
            if (A->type_name=='i'){
    matrix_i B;
    B.n=A->n;
    B.m=A->m;
    B.elem=(int**) A->elem;         //kinda bad style;     now we have 2 pointers point to the same memory sell
    Add_line_string_combination_i(&B, k, (int*)alphos );
}
if (A->type_name=='f'){
    matrix_f B;
    B.n=A->n;
    B.m=A->m;
    B.elem=(float**) A->elem;
    Add_line_string_combination_f(&B, k, (float*)alphos );
}
if (A->type_name=='c'){
    matrix_c B;
    B.n=A->n;
    B.m=A->m;
    B.elem=(complex**) A->elem;
    Add_line_string_combination_c(&B, k, (complex*)alphos );

}
    return (0);
    }
    int Add_string_i(pmatrix_i A,int k, int* str){
    for (int j=0; j<A->m;++j){
        A->elem[k][j]+=str[j];
    }
    return 0;
    }
    int Add_line_string_combination_i(pmatrix_i A, int k, int* alphos )    {                 //alpos - int array[n] (used matrix A n*m); (alphos[k]==0) have not to be true
        for (int i=0; i< A->n; ++i){

                if(i!=k){Add_string_i(A,k,Multiplied_string_i(A,i, alphos[i]));}

        }
        return 0;

    }
    int Add_string_f(pmatrix_f A,int k, float* str){
    for (int j=0; j<A->m;++j){
        A->elem[k][j]+=str[j];
    }
    return 0;
    }
    int Add_line_string_combination_f(pmatrix_f A, int k, float* alphos )    {                 //alpos - int array[n] (used matrix A n*m); (alphos[k]==0) have not to be true
        for (int i=0; i< A->n; ++i){

                if(i!=k){Add_string_f(A,k,Multiplied_string_f(A,i, alphos[i]));}

        }
        return 0;

    }
    int Add_string_c(pmatrix_c A,int k, complex* str){
    for (int j=0; j<A->m;++j){
        A->elem[k][j]=complex_sum(str[j],A->elem[k][j]);
    }
    return 0;
    }
    int Add_line_string_combination_c(pmatrix_c A, int k, complex* alphos )    {                 //alpos - int array[n] (used matrix A n*m); (alphos[k]==0) have not to be true
        for (int i=0; i< A->n; ++i){

                if(i!=k){Add_string_c(A,k,Multiplied_string_c(A,i, alphos[i]));}

        }
        return 0;

    }

   void Add_line_string_combination_with_iniz(pmatrix A){
    int k;
    printf("enter number of string string linear combination add to\n");
    scanf("%d",&k);
    k--;
    void** alp;
    if (A->type_name=='i'){
    int*  alphos;
    alphos=calloc((A->n),sizeof(int));
    for (int i=0; i<(A->n);++i){
           if(i!=(k)) {printf("enter the %d coefficient of the linear combination\n",i+1);
           scanf("%d",(alphos+i));}
           else {printf(" the %d coefficient ignored in the linear combination\n",i+1);}
}
 Add_line_string_combination(A,k, alphos);
}
if (A->type_name=='f'){

    float*  alphos;
    alphos=calloc((A->n),sizeof(float));
    for (int i=0; i<A->n;++i){
           if(i!=(k)) {printf("enter the %d coefficient of the linear combination\n",i+1);
           scanf("%f",(alphos+i));}
           else {printf("the %d coefficient ignored in the linear combination\n",i+1);}
}
Add_line_string_combination(A,k, alphos);
}
if (A->type_name=='c'){
      complex*  alphos;
    alphos=calloc((A->n),sizeof(complex));
    for (int i=0; i<A->n;++i){
           if(i!=(k)) {printf("enter real part of the %d coefficient of the linear combination\n",i+1);
           scanf("%f",&((alphos+i)->real));}
            if(i!=(k)) {printf("enter imaginary  part of the %d coefficient of the linear combination\n",i+1);
           scanf("%f",&((alphos+i)->im));}
           else {printf(" the %d coefficient ignored in the linear combination\n",i+1);}

}
Add_line_string_combination(A,k, alphos);

}


    }
     void distruct (pmatrix A){
    for (int i=0;i<A->n;++i){free(A->elem[i]);}
    free(A->elem);}
     void distruct_f (pmatrix_f A){
    for (int i=0;i<A->n;++i){free(A->elem[i]);}
    free(A->elem);}
     void distruct_c (pmatrix_c A){
    for (int i=0;i<A->n;++i){free(A->elem[i]);}
    free(A->elem);}
     void distruct_i (pmatrix_i A){
    for (int i=0;i<A->n;++i){free(A->elem[i]);}
    free(A->elem);}


