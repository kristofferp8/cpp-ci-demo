#include <cassert>

int add(int, int); // Function declaration

int main() {
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    return 0;
}
