#include<stdio.h>
#include<math.h>
#include<string.h>

void encode(char *string);
void decode(char *string);

int main(){
    char s[]= "Hund Katze Maus";
    puts(s);
    encode(s);
    puts(s);
    decode(s);
    puts(s);
    return 0;
}

void encode(char *string){
    int i, len = strlen(string), j=0, u=0;
    char string1[len/2+1], string2[len/2+1];

    for (i=0; i<len; i++){
        if(i%2==0){
            string1[j]=string[i];
            j++;
        }else{
            string2[u]=string[i];
            u++;
        }
    }
    string1[j] = '\0';
    string2[u] = '\0';
    strcpy(string, strcat(string1,string2));
}

void decode(char *string){
    int i, len = strlen(string), j=0, u;
    char string2[len];
    if (len%2==0){
        u= len/2;
    }else{
        u=len/2+1;
    }
    for (i=0; i<len; i++){
        if(i%2==0){
            string2[i]=string[j];
            j++;
        }else{
            string2[i]=string[u];
            u++;
        }
    }
    string2[len] = '\0';
    strcpy(string, string2);
}
