#include "stdlib.h"
#include "stddef.h"

int _stdlib2_start();

void _start() {
    exit(_stdlib2_start(0, NULL));
}
