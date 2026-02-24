#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(){
    char cuvinte[300][300], propozitie[300], *p;
    int nr = 0;
    if (scanf("%[^\n]", propozitie) == 0) return 0;
    p = strtok(propozitie, " ");
    while(p != NULL)
    {
        strcpy(cuvinte[nr], p);
        nr++;
        p = strtok(NULL, " ");
    }
    for(int i = 0; i < nr - 1; i++) {
     for(int j = i + 1; j < nr; j++) 
        {
            bool inversam = false;
            if(strlen(cuvinte[i]) < strlen(cuvinte[j])) {
                inversam = true;
            }   
            else if(strlen(cuvinte[i]) == strlen(cuvinte[j])) {
            if(strcmp(cuvinte[i], cuvinte[j]) > 0) {
                    inversam = true;
                }
            }
            if(inversam) {
                char aux[300];
                strcpy(aux, cuvinte[i]);
                strcpy(cuvinte[i], cuvinte[j]);
                strcpy(cuvinte[j], aux);
            }
        }
    }
    for(int i = 0; i < nr; i++) {
        printf("%s\n", cuvinte[i]);
    }
    return 0;
}