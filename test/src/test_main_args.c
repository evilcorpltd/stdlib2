#include "stdbool.h"

int main2(int argc, char *argv[]) {
    if (argc != 2) {
        return 1;
    }
    const bool success = argv[1][0] == 'h' && argv[1][1] == 'e' &&
                         argv[1][2] == 'j' && argv[1][3] == '\0';
    return success ? 0 : 1;
}
