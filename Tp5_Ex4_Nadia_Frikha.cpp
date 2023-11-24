//EX4

#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main() {
	char ch[10];
	char RES[10];
	char CM[10],VM[10],cm[10],vm[10]; //CM:consonne majuscule, VM:voyelle majuscule
	//cm:consonne minuscule, vm:voyelle minuscule
	char c[10];
	int i,j ;
	
	
	// saisie d'une phrase non vide
	do{
		printf("saisir une phrase non vide:");
		gets(ch);
	}while (strlen(ch)==0);
	
	//supression des caracteres autres que les alphabetique
	i=0;
	while(ch[i]){
		if (isalpha(ch[i])==0){
			for(j=i; j<strlen(ch); j++){
				ch[j] = ch[j+1];	
			}	
		}
		else{
			i++;
		}	
	}
	

	//affichage de la chaine avec les caracteres alphabetique 
	printf("ch:%s",ch);

	//Construire CM,VM,cm,vm
	CM[0]='\0'; VM[0]='\0' ; cm[0]='\0'; vm[0]='\0' ;
	for(i=0; ch[i]; i++){
		c[0]=ch[i];
		c[1]='\0';
		if (isupper(ch[i])){
			if( (ch[i]!='A') && (ch[i]!='E')&& (ch[i]!='O')&& (ch[i]!='Y')&& (ch[i]!='I') ){
				strcat(CM,c); //construire une chaine CM de consonne majuscule
			}
			else{
				strcat(VM,c); //construire une chaine CM de voyelle majuscule
			}
		}
		else{
			if( (ch[i]!='a') && (ch[i]!='e')&& (ch[i]!='o')&& (ch[i]!='y')&& (ch[i]!='i') ){
				strcat(cm,c); //construire une chaine CM de consonne miniscule
			}
			else{
				strcat(vm,c); //construire une chaine CM de voyelle majuscule
			}
		}
	}
	
	//construire RES 
	strcpy(RES,CM);
	strcat(RES,VM);
	strcat(RES,cm);
	strcat(RES,vm);
	
	//affichage 
	printf("\nRES=%s",RES);
	
	return 0;
}
