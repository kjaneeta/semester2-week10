#include <assert.h>
#include <stdlib.h>
#include "matrix.h"

int main(void)
{
    const int size = 1000;

    Matrix* a = matrix_create(size, size);
    Matrix* b = matrix_create(size, size);

    matrix_fill(a);
    matrix_fill(b);

    Matrix* c = matrix_multiply(a, b);

    matrix_destroy(c);
    matrix_destroy(b);
    matrix_destroy(a);

    return 0;
}
