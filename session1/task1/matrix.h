#ifndef _MATRIX_H_
#define _MATRIX_H_

typedef struct {
    int rows;
    int cols;
    float** data;
} Matrix;

Matrix* matrix_create(int, int);
Matrix* matrix_multiply(const Matrix*, const Matrix*);
void matrix_fill(Matrix*);
void matrix_destroy(Matrix*);

#endif  // _MATRIX_H_
