#include <stdio.h>

int main(void) {
int i, a = 1, b = 2, c;
printf("%d, %d, ", a, b);
for (i = 3; i <= 98; i++) {
c = a + b;
a = b;
b = c;
printf("%d", c);
if (i != 98) {
printf(", ");
}
}
printf("\n");
return 0;
}
