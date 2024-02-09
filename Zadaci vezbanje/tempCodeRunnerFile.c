int i,br;

FILE *dato;
dato = fopen("podaci.txt", "w"); //otvaranje fajla -w- upis od pocetka 

if(dato == NULL){
    printf( "Greska u otvaranju fajla");
    exit(1);
}

for(i=1;i<=10;i++){
    fprintf(dato, "%d\n",i); //upisujemo brojeve u fajl
}

fclose(dato);//zatvaramo fajl

dato = fopen("podaci.txt", "r"); //otvaranje radi citanja podataka iz fajla

if(dato==NULL){
    printf("\n Greska prilikom otvaranja datoteke podaci.txt za citanje!\n");
    exit(1);
} 

while(1){
    fscanf(dato, "%d", &br); //citamo broj iz fajla i smestamo u varijablu br

    if(feof(dato)) break; //proverava da li je stigao do kraja fajla

    printf("Procitano: %d\n",br); //izlistavanje pročitanog broja
}

fclose(dato);