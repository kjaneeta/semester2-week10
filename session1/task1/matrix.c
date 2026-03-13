#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrix.h"


Matrix* matrix_create(int rows, int cols)
{
    assert(rows > 0 && cols > 0);

    Matrix* mat;

    if ((mat = malloc(sizeof(Matrix))) == NULL) {
        return NULL;
    }

    if ((mat->data = calloc(rows, sizeof(float*))) == NULL) {
        free(mat);
        return NULL;
    }

    for (int i = 0; i < rows; ++i) {
        mat->data[i] = calloc(cols, sizeof(float));
        if (mat->data[i] == NULL) {
            for (int j = 0; j < i; ++j) {
                free(mat->data[j]);
            }
            free(mat->data);
            free(mat);
            return NULL;
        }
    }

    mat->rows = rows;
    mat->cols = cols;

    return mat;
}


Matrix* matrix_multiply(const Matrix* a, const Matrix* b)
{
    assert(a != NULL && b != NULL);
    assert(a->cols == b->rows);

    Matrix* result = matrix_create(a->rows, b->cols);

    for (int i = 0; i < a->rows; ++i) {
        for (int j = 0; j < b->cols; ++j) {
            float sum = 0.0f;
            for (int k = 0; k < a->cols; ++k) {
                sum += a->data[i][k] * b->data[k][j];
            }
            result->data[i][j] = sum;
        }
    }

    return result;
}


void matrix_fill(Matrix* mat)
{
    assert(mat != NULL);

    srand(time(NULL));

    for (int i = 0; i < mat->rows; ++i) {
        for (int j = 0; j < mat->cols; ++j) {
            mat->data[i][j] = (float) rand() / RAND_MAX;
        }
    }
}


void matrix_destroy(Matrix* mat)
{
    assert(mat != NULL);

    for (int i = 0; i < mat->rows; ++i) {
        free(mat->data[i]);
    }

    free(mat->data);
    free(mat);
}
