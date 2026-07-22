#include <stdio.h>
#include <stdint.h>
#include <time.h>
#include "pcg_basic.h"


int main(void){

    uint64_t seed = (uint64_t)time(NULL);
    uint64_t stream = 54u;

    // pcg_srandom(seed, stream indipendente)
    pcg32_srandom(seed, stream);

    // 4294967296.0 = 2^32
    double x = (double)pcg32_random() / 4294967296.0;

    printf("Seed: %ld\nNumber: %f\n", seed, x);
    return 0;
}