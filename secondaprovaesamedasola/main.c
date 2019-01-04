//
//  main.c
//  secondaprovaesamedasola
//
//  Created by Rosemarie Pirlo on 04/01/2019.
//  Copyright © 2019 Rosemarie Pirlo. All rights reserved.
//

#include <stdio.h>
#include<string.h>
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

void leggiVisita(tipoVisita v);
void leggiVisita(tipoVisita v){

    int m;
    v.oraInizio = 0;
//    char s[25];

//    printf("dammi nome paziente\n");
//    strcpy(v.nomePaziente, gets(s));
//    printf("dammi tipo visita\n");
//    scanf("%d%*c", &m);
//    v.nomeVisita = m;
    printf("dammi orario iniziale visita\n");
    scanf("%d%*c", &m);
//    if ( m>9 && m< 18)
//    {
      (v.oraInizio = m);
//    }
//    else
//    {printf("ora iniziale non valida \n");}
//    printf("dammi orario finale  visita\n");
//    scanf("%d%*c", &m);
//    if ( m > v.oraInizio && m>9 && m <18)
//    {
//    v.oraFine = m;
//    }
//    else
//    {printf("ora finale non valida \n");} *//
   
 }


void stampaVisita( tipoVisita v);
void stampaVisita( tipoVisita v){
    char s[25];
    printf("Il nome paziente e' %s \n", v.nomePaziente);
   printf(" Il tipo visita e' %d \n", v.nomeVisita);
    printf("orario iniziale visita  %d\n", v.oraInizio);
    printf("dammi orario finale visita è %d\n", v.oraFine);
}

Definire e implementare la procedura schedulaSettimana che ha come
argomenti tabulato che è una matrice 5×3 di elementi di tipo tipoVisita. Le
righe rappresentano i giorni della settimana, le colonne rappresentano gli
ambulatori. La procedura avvalora i campi di tabulato riga per riga (fare
                                                                     uso della procedura leggiVisita).
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
    int m;
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
    stampaVisita(v);
    
    
    
    
    
    
    
    
    return 0;
}
