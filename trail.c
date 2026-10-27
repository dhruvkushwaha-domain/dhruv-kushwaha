#include <stdio.h>
int main() {
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue; // Jaise hi i 3 hoga, loop yahin khatam ho jayega
    }
    printf("%d\n", i); // Output: 1, 2
}
    return 0;
}