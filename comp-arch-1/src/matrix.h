#ifndef __matrix__
#define __matrix__

//------------------------------------------------------------------------------
// matrix.h - содержит описание обобщающей квадратной матрицы
//------------------------------------------------------------------------------

#include "two_dimensional_array.h"
#include "diagonal_matrix.h"
#include "lower_triangular_matrix.h"

//------------------------------------------------------------------------------
// matrix.h - содержит описание обобщающей квадратной матрицы
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся квадратные матрицы
struct Matrix {
    // значения ключей для каждой матрицы
    enum key {TDARRAY, LTMATRIX, DMATRIX, INVALID_MATRIX_TYPE};
    key k;
    // используемые альтернативы
    union {
        TDArray td_array;
        LTMatrix lt_matrix;
        DMatrix d_matrix;
    };
};

// Ввод обобщенной матрицы из файла
Matrix *In(std::ifstream &ifst);

// Случайный ввод обобщенной матрицы
Matrix *InRnd();

// Вывод обобщенной матрицы в форматируемый поток
void Out(Matrix &mx, std::ofstream &ofst);

// Вычисление среднего арифметического
double ArithmeticMean(Matrix &mx);

#endif //__matrix__
