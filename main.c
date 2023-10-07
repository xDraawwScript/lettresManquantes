#include <stdio.h>
#include <stdlib.h>
int calcul_ordre(char c){
    int d; // gerer le cas des majuscules et espaces

        char amin='a',zmin='z';
        char amaj='A',zmaj='Z';


        if(c>=amin&&c<=zmin){
            d=c-amin;
        }
        else if(c>=amaj&&c<=zmaj){
            d=c-amaj;
        }
            else{
            d=-1;
            }
            return d;
}
int main()

{
        char phrase[1000];
        char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
        int enlever;
        printf("entrez une phrase : ");
        fgets(phrase, sizeof(phrase), stdin);

        // parcours de la phrase pour verifier presence
        for(int i=0;phrase[i]!='\0';i++)
        {
            //"b" de "bonjour"
            if((enlever=calcul_ordre(phrase[i]))!=-1)
                alphabet[enlever]='\0';

        }
    printf("lettres presentes dans la phrase : \n");
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] != '\0') {
            printf("%c\n", alphabet[i]);
        }
    }
    printf("\n");

    return 0;
}
