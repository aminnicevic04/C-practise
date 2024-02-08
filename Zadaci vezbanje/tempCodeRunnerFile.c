

if((dato == fopen("podaci.txt","a")) == NULL){ //prvo otbvara pa proverava da li je otvoren fajl
    pritnf("greska pri otvaranju");
    exit(1);
}
fprintf(dato,"pozdrav svima"); //upisujemo u fajl
fclose(dato); //zatvaramo fajl
