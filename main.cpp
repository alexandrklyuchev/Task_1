#include <iostream>
#include <stdio.h>

#include "version.h"

int version() {
    return PROJECT_VERSION_PATCH;
}

int main() {
    printf("Version: %d\n", version());
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
