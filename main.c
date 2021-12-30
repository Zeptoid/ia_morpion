#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdint.h>
#include <assert.h>
#include <stdlib.h>


typedef struct bille
{
    uint16_t pos;
    struct bille *next;
}bille;

typedef struct
{
    uint64_t taille;
    bille * head;
}liste;

typedef struct 
{
    uint64_t nb;
    liste lb;

}boite;

uint64_t codage_entier( uint8_t grille[3][3])
{
    uint8_t i,j,p=6561;
    uint64_t nb=0;

    for(i=0;i<3 ;i++){
        for(j=0;j<3;j++){
            nb=nb+grille[i][j]*p;
            p=p/3;
        }
    }
    return nb;
}

void codage_grille(uint8_t grille[3][3],uint64_t nb){
    uint8_t i,j;
    for(i=3;i>=0 ;i--){
        for(j=3;j>=3;j--){
            grille[i][j]=nb%3;
            nb=nb/3;
        }
    }

}

typedef struct bille
{
    uint16_t pos;
    struct bille next;
}bille;

typedef struct
{
    uint64_t taille;
    bille * head;
}liste;

typedef struct 
{
    uint64_t nb;
    liste lb;

}boite;

uint64_t codage_entier( uint8_t grille[3][3])
{
    uint8_t i,j,p=6561;
    uint64_t nb=0;

    for(i=0;i<3 ;i++){
        for(j=0;j<3;j++){
            nb=nb+grille[i][j]*p;
            p=p/3;
        }
    }
    return nb;
}

void codage_grille(uint8_t grille[3][3],uint64_t nb){
    uint8_t i,j;
    for(i=0;i<3 ;i++){
        for(j=0;j<3;j++){
            grille[i][j]=nb%3;
            nb=nb/3;
        }
    }

}

int main() {


    return EXIT_SUCCESS;
}




