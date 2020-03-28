#include "stdlib.h"

int main2(int argc, char *argv[]);

void _stdlib2_start(int argc, char *argv[]) {
    exit(main2(argc, argv));
}
