#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    FILE *read;
    int numar_citit;
    int suma = 0;
    read = fopen("in.txt", "r");
    if (read == NULL) {
        return 1;
    }
    while(fscanf(read, "%d", &numar_citit) == 1) 
    {
        suma += numar_citit;
    }
    printf("%d", suma);
    fclose(read);
    return 0;
}