#include <stdio.h>
#include "function.h"
#include "testcase.h"

int main() {
    printf("Prime Test Case Score: %.2f\n", testcase_prime());
    printf("Power Test Case Score: %0.2f\n", testcase_power());
    return 0;
}
