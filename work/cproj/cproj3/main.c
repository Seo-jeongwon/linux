#include "max.h"

int main(){
    int a, b, max;
    a = data_input();
    b = data_input();
    max = data_max(a,b);
    data_print(max);
    return 0;
}