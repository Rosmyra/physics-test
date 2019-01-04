//
//  main.c
//  secondaprovaesamedasola
//
//  Created by Rosemarie Pirlo on 04/01/2019.
//  Copyright © 2019 Rosemarie Pirlo. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define DIMSTRINGA 25

typedef char tipoStringa[25];

enum tipoNomeVisita {oculistica, cardiologia, sangue};
enum tipoGiornoSettimana {lun, mar, mer, gio, ven};
enum tipoAmbulatorio {A, B, C};

typedef struct{
    tipoStringa nomePaziente;
    enum tipoNomeVisita nomeVisita;
    int oraInizio;
    int oraFine;
} tipoVisita;

char *strlwr(char *str) {
    unsigned char *p = (unsigned char *) str;
    
    while (*p) {
        *p = tolower((unsigned char) *p);
        p++;
    }
    
    return str;
}

void leggiVisita(tipoVisita* v){

//    char s[25];

//    printf("dammi nome paziente\n");
//    strcpy(v.nomePaziente, gets(s));
//    printf("dammi tipo visita\n");
//    scanf("%d%*c", &m);
//    v.nomeVisita = m;
    printf("dammi ora inzio visita\n");
    scanf("%d", &v->oraInizio);
    
    printf("dammi ora fine visita\n");
    scanf("%d", &v->oraFine);
    
    printf("dammi nome paziente\n");
    scanf("%24s", v->nomePaziente);
    
    printf("dammi tipo visita\n");
    char buffer[1024];
    scanf("%1023s", buffer);
    strlwr(buffer);
    if (!strcmp(buffer, "oculistica"))
        v->nomeVisita = oculistica;
    else if (!strcmp(buffer, "cardiologia"))
        v->nomeVisita = cardiologia;
    else if (!strcmp(buffer, "sangue"))
        v->nomeVisita = sangue;
    
    printf("inizializzato\n");
   
 }

void stampaVisita( tipoVisita* v){
    char buffer[1024];
    if (v->nomeVisita == sangue)
        strcpy(buffer, "sangue");
    else if (v->nomeVisita == cardiologia)
        strcpy(buffer, "cardiologia");
    else if (v->nomeVisita == oculistica)
        strcpy(buffer, "oculistica");
    
    printf("Il nome paziente e' %s \n", v->nomePaziente);
    printf("Il tipo visita e' %s \n", buffer);
    printf("orario iniziale visita  %d\n", v->oraInizio);
    printf("dammi orario finale visita è %d\n", v->oraFine);
}

void schedulaSettimana( tipoVisita tabulato[5][3]);

void schedulaSettimana(tipoVisita tabulato[5][3]){
    
    char giorniSettimana[] = {"lun", "mar", "mar", "gio", "ven"};
    int i;
    for(i = lun; i<=ven;i++)
    {
        
        
    }
    
    
}


int main(int argc, const char * argv[]) {
    
    tipoVisita v;
    /*v.oraInizio = 9;
    v.oraFine = 10;
    v.nomeVisita = sangue;*/
    leggiVisita(&v);
    stampaVisita(&v);
    /*int m;
    char s[25];
    printf("dammi nome paziente\n");
    strcpy(v.nomePaziente, gets(s));
    printf("dammi tipo visita\n");
    scanf("%d%*c", &m);
    v.nomeVisita = m;
   printf("dammi orario iniziale visita\n");
    scanf("%d%*c", &m);
    if ( m>9 && m< 18)
            {
        (v.oraInizio = m);
       }
       else
      {printf("ora iniziale non valida \n");}
        printf("dammi orario finale  visita\n");
       scanf("%d%*c", &m);
       if ( m > v.oraInizio && m>9 && m <18)
     {
      v.oraFine = m;
     }
    else
    {printf("ora finale non valida \n");}

//    leggiVisita(v);
    stampaVisita(v);*/
    
    
    
    
    
    
    
    
    return 0;
}
