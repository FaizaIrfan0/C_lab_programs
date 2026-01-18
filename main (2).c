#include <stdio.h>

int main()
{
    int n=0, number=10, iterator=5;
    while (n<iterator) {
        printf("%d \n", number++);
        n++;
    }
    int m=0;
    while (m<iterator){
        printf("%d \n",number--);
        m++;
    }
    return 0;
}