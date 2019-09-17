//-------------------------------------------------------------------------------------------------
// Name: Christian Kranabetter
// Klasse - Katalognr: 1CHIF / 19
// Aufnahmenummer: 20170050
// Programmname: hue3_kranabetter_B2.c
//------------------------------------------------------------------------------------------------
// PROGRAMMBESCHREIBUNG:
// Dieses Programm dient dazu, Großbuchstaben und Kleinbuchstaben einzulesen und zu tauschen. Außerdem, soll es Umlaute inklusive "ß" einlesen können.
//------------------------------------------------------------------------------------------------

#include<stdio.h>

int islower_dt(int ch);                             //prüft auf Kleinbuchstabe
int isupper_dt(int ch);                             //prüft auf Großbuchstabe
int isalpha_dt(int ch);                             //prüft auf Buchstabe
int tolower_dt(int ch);                             //Verwandelt Klein- in Großbuchstaben
int toupper_dt(int ch);                             //Verwandelt Groß- in Kleinbuchstaben
int convert_dt(int ch);                             //Verwandelt Klein- in Großbuchstaben und umgekehrt

int main(void){
    int ch=0, klein=0, gross=0, h=0;
    printf("Schreiben Sie etwas und beenden Sie Ihre Eingabe indem Sie ENTER, STRG+Z, ENTER druecken!\n\n");
    while((ch = getchar()) != EOF){
        if((h=convert_dt(ch)) != 42){
            printf("%c", h);
        }
        if(isalpha_dt(ch)==1){
            gross++;
        }else if(isalpha_dt(ch)==0){
            klein++;
        }
    }
    printf("Es wurden %d kleine Buchstaben und %d grosse Buchstaben", klein, gross);
    return 0;
}

int islower_dt(int ch){
    if(ch >= 'a' && ch <= 'z'){
        return 1;
    }else{
        return 0;
    }
}

int isupper_dt(int ch){
    if(ch >= 'A' && ch <= 'Z'){
        return 1;
    }else{
        return 0;
    }
}

int isalpha_dt(int ch){
    if((ch >= 'A' && ch <= 'Z') || ch==142 || ch==153 || ch==154){
        return 1;
    }else if((ch >= 'a' && ch <= 'z') || ch==132  || ch==148 || ch==129 || ch == 225){
        return 0;
    }
}

int tolower_dt(int ch){
    int h=0;
    h=ch-32;
    return h;
}

int toupper_dt(int ch){
    int h=0;
    h=ch+32;
    return h;
}

int convert_dt(int ch){
    int h=0;
    if(ch >= 'a' && ch <= 'z'){
        h=tolower_dt(ch);
    }

    if(ch >= 'A' && ch <= 'Z'){
        h=toupper_dt(ch);
    }
    if(ch == 132){ h=142; }
    if(ch == 142){ h=132; }
    if(ch == 148){ h=153; }
    if(ch == 153){ h=148; }
    if(ch == 129){ h=154; }
    if(ch == 154){ h=129; }
    if(ch == 225){ h=225; }
    if(ch == 46){ h=46; }
    if(ch == 33){ h=33; }
    if(ch == 63){ h=63; }
    if(ch == 44){ h=44; }
    if(ch == 48){ h=48; }
    if(ch == 49){ h=49; }
    if(ch == 50){ h=50; }
    if(ch == 51){ h=51; }
    if(ch == 52){ h=52; }
    if(ch == 53){ h=53; }
    if(ch == 54){ h=54; }
    if(ch == 55){ h=55; }
    if(ch == 56){ h=56; }
    if(ch == 57){ h=57; }
    return h;
}

// ä = 132
// Ä = 142
// ö = 148
// Ö = 153
// ü = 129
// Ü = 154
// ß = 225
// . = 46
// ! = 33
// ? = 63
// , = 44
