#include "string.h"

int main2() {
    const char a[] = "abcd1efgh2i";
    const char b[] = "123";
    const char c[] = "890";

    if (strcspn(a, "123") != 4){
       return 1;
    }

    if (strcspn(a, "abc") != 0){
       return 1;
    }

    if (strcspn(a, "890") != strlen(a)){
       return 1;
    }

    return 0;
}
