#include "stdbool.h"

int main2(int argc, char *argv[]) {
    if (argc != 3) {
        return 1;
    }
    const bool arg1ok = argv[1][0] == 'h' && argv[1][1] == 'e' &&
                        argv[1][2] == 'j' && argv[1][3] == '\0';
    if (!arg1ok) {
        return 1;
    }
    const bool arg2ok = argv[2][0] == 's' && argv[2][1] == 'a' &&
                        argv[2][2] == 'n' && argv[2][3] == '\0';
    return arg2ok ? 0 : 1;
}
