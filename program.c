#include <stdio.h>
int main()
{
    int age = 34;
    float weight = 79.100;
    double pi = 5.5e6;
    char message = 'z';

    printf("My age is %d", age);
    printf("\n I weight  %f", weight);
    printf("\n PI  %lf", pi);
    printf("\n I want to say %c %d", message);
    printf("\n message zize: %zu", sizeof(age));
}