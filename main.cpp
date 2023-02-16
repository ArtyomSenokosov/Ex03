#include <iostream>

using namespace std;

int fun(int array[], int size, int num, int a, int i) {

    //i=size-1

   if (i == 0) {
        if (num != 0) {
            return num;
        }
        return array[i];
    }

    int count = 0;

    for (int j = i - 1; j >= 0; j--) {
        if (array[i] == array[j]) {
            count++;
        }
    }

    if (count == 0) {
        return array[i];
    }

    int temp;
    if (count < a) {
        for (int j = 0; j < size; ++j) {
            if (array[i] == array[j]) {
                temp++;
            }
        }
        if (temp == count + 1) {
            a = count;
            num = array[i];
        }
    }
    i--;
    return fun(array, size, num, a, i);
}

int main() {

    int size1 = 10;
    int array[10] = {1, 3, 3, 2, 2, 1, 1, 5, 1, 1};
    cout << fun(array, size1, 0, 0, size1 - 1) << endl;

    return 0;
}
