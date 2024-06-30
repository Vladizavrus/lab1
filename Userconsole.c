#pragma once
#include "rectangular matrix.c"
#include <stdio.h>

int Userconsole(){
pmatrix array;
int number_of_matrixes=0;

while(1){
    printf("You have %d matrixes\n",number_of_matrixes);
    int action;
    printf("choose action:\n1. create &  initialize matrix \n2. add matrix to another one\n3. multiply matrix by another one\n4. transpose matrix\n5. add line string combination to the matrix\n6. print matrix\n0. exit\n");
    scanf("%d",&action);

    switch(action){
        case 0 :{   for (int i=0;i<number_of_matrixes;++i)
        {
            distruct(array+i);
        }
        return 0;
        }

        case 1 :{number_of_matrixes++;
            if (number_of_matrixes!=1){array=(pmatrix) realloc(array, number_of_matrixes*sizeof(matrix) );
            } else{array=(pmatrix) malloc(sizeof(matrix) );}

            create_and_scan_matrix( &array[number_of_matrixes-1]);

            printf("the matrix  %d successfuly created and initialized \n",number_of_matrixes);
            break;
        }
        case 2:{printf("enter the number of the matrix to add another one to\n");
            int first, second;
            scanf("%d",&first);
            printf("enter the number of the matrix to be added to the matrix %d\n",first);
            scanf("%d",&second);
            array[first-1]=matrix_summ(array[first-1], array[second-1]);

            printf("the matrix  %d successfuly added to the matrix %d   \n",second, first);
            break;
        }
        case 3:{printf("enter the number of the matrix to be multiplied by another one\n ");
            int first, second;
            scanf("%d",&first);
            printf("enter the number of the matrix to multiply the matrix %d\n",first);
            scanf("%d",&second);
            array[first-1]=matrix_mult(array[first-1], array[second]);
            printf("the matrix  %d successfuly multiplied by the matrix %d   \n",first, second);
            break;
        }
        case 4: {printf("enter the number of the matrix to be transposed\n");
            int number;
            scanf("%d",&number);
            transpose(&array[number-1]);
            printf("the matrix  %d successfuly transposed \n",number);
            break;
        }
        case 5: {printf("enter the number of the matrix to add its linear combination \n");
            int number;
            scanf("%d",&number);
            Add_line_string_combination_with_iniz(&array[number-1]);
            printf("linear combination successfuly added to the matrix %d \n",number);
            break;
        }
        case 6: {printf("enter the number of the matrix to be printed\n");
            int number;
            scanf("%d",&number);
            print_matrix(array[number-1]);
            printf("the matrix  %d successfuly printed \n",number);
            break;}
    }
}
}
