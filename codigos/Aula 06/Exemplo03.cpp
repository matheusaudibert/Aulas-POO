#include <iostream>

using namespace std;

int main() {

    int array[] = {1, 2, 3, 4, 5};
    int total = sizeof(array) / sizeof(array[0]);

    cout << "Total de elementos: " << total << endl;
    return 0;
}
