#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 3
#define MAX_STRLEN 30
// Definisci il tipo di dato struct s_studente
struct s_studente{
    char name[MAX_STRLEN];
    char surname[MAX_STRLEN];
    unsigned int age;
    char class[MAX_STRLEN];
};
// Definisci studente come struct s_studente
typedef struct s_studente studente;
void ordina( studente record[], int n);
int main(int argc, char** argv) {
    // Dichiara le variabili locali
    int i,j;
    studente elenco[N];
    char temp[MAX_STRLEN];
    // Codice per l'inserimento, da parte dell'utente, dei dati
    for(i=0;i<N;i++){
        printf("Inserisci il nome della %d persona: ",i+1);
        scanf("%s",(elenco[i].name));
        printf("Inserisci il cognome della %d persona: ",i+1);
        scanf("%s",(elenco[i].surname));
        printf("Inserisci l'età della %d persona: ",i+1);
        scanf("%d",&(elenco[i].age));
        printf("Inserisci la classe della %d persona: ",i+1);
        scanf("%s",(elenco[i].class));
    }
    ordina(elenco,N);
    // Codice per la stampa dei dati (uno studente per riga)
    for(i=0;i<N;i++){
        printf("%s; %s; %d; %s;\n",elenco[i].name,elenco[i].surname,elenco[i].age,elenco[i].class);
    }
    return (EXIT_SUCCESS);
}
void ordina( studente record[], int n){
    char temp[MAX_STRLEN];
    studente temp;
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(strcmp(record[j+1].surname,record[j].surname)>0){
                strcpy(temp,record[j+1].surname); //sostituire il copy con studente
                strcpy(record[j+1].surname,record[j].surname);
                strcpy(record[j].surname,temp);
            }
        }
    }
}
