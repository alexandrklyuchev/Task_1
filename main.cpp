#include <iostream>
#include <stdio.h>

#include "version.h"

int version() {
    return PROJECT_VERSION_PATCH;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    printf("%d\n", version());
    return 0;
}
