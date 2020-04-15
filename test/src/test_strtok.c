#include "string.h"

int main2() {
    char a[] = "This, is a-string";
    const char *p = strtok(a, " ,-");
    if (strcmp(p, "This") != 0) {
        return 1;
    }

    p = strtok(NULL, " ,-");
    if (strcmp(p, "is") != 0) {
        return 1;
    }

    p = strtok(NULL, " ,-");
    if (strcmp(p, "a") != 0) {
        return 1;
    }

    p = strtok(NULL, " ,-");
    if (strcmp(p, "string") != 0) {
        return 1;
    }

    p = strtok(NULL, " ,-");
    if (p != NULL) {
        return 1;
    }

    char b[] = "This, is a-string";
    p = strtok(b, "-");
    if (strcmp(p, "This, is a") != 0) {
        return 1;
    }

    return 0;
}
