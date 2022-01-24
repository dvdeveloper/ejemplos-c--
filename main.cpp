#include <Windows.h>

int main() {
    const HDC dc = GetDC(NULL);
    while (1) {
        Rectangle(dc, 100, 100, 500, 500);
    }
    return 0;
}
