#include <stdio.h>
void inASCII() {
    for (char c = 'a'; c <= 'z'; c++) {
        printf("%c : %d\n", c, c);
    }
}

int main() {
    inASCII();
    return 0;
}