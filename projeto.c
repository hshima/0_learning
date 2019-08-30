/* Documentations (Documentation Section)*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h> //inclui string para função gets().  strcpy() stringCopy

/* Preprocessor Statements (Link Section)*/
//#include "header/textos.h"
//#include "header/addForm.h"
//#include "header/viewForm.h"
//#include "header/saveFile.h"
//#include "header/login.h"
//#include "header/menu.h"


/* Global Declarations (Definition Section)*/
	char name[50], prontuario[50];
/* The main() function*/

int main(void){
	 login();
	 saveFile(name, prontuario);
	/* 2.0
	 * Master - Caso o nome do usuário seja “MASTER”, o programa deverá apresentar a tela com menu de opções
	 * O menu deverá executar em looping até que seja escolhida a opção “F. Fim”. O programa deve aceitar “F” ou “f”.
	 */
 	do{
 		menu();
 	} while(op != 'F' || op != 'f');


	/*
	 * 
	 */
	/*
	 * 
	 */
	/* 
	 * 
	 */
	/* 
	 * 
	 */
	/* 
	 * 
	 */
	/* 
	 * 
	 */
	/* 
	 * 
	 */
	/* 
	 * 
	 */
	/* 
	 * 
	 */
	/* 
	 * 
	 */
	/* 
	 * 
	 */
	/* 
	 * 
	 */
	/* 
	 * 
	 */
	/* 
	 * 
	 */
	/* 
	 * 
	 */
	/* 
	 * 
	 */
	 return 0;
}

/* Local Declarations*/
/* Program Statements & Expressions*/
/* User Defined Functions*/
void login(void){
		/* 1.0
	 * Tela de Login - exibir uma tela de login para que o usuário informe seu
	 * nome e prontuário
	 */

	bool ok;
	bool masterMode = false;
	
	do{
	system("cls"); fflush(stdin);
	printf("Informe seu nome:"); scanf("%s\n", &name);
		for(int i=0; i<sizeof(name); i++){
			if(name[i] == 0 || !(name[i] >= 48 && name[i] <= 57) || !(name[i] >= 65 && name[i] <= 90) || !(name[i] >= 97 && name[i] <= 122)){
				printf("Nome inválido. Tente novamente!");
				return ok = false;
			} else {
				ok = true;
				if(name == "MASTER"){
				/*
				 * 2.0
				 * Modo Master, sai da função e volta para main()
				 */
					printf("\n\nIniciando modo MASTER. Pressione qualquer tecla");
					getch();
					system("cls");
					masterMode = true;
					}
			}
		}
	} while (ok || masterMode);
	while(!ok || !masterMode){
	system("cls");
	printf("Informe seu nome: %s", nome); fflush(stdin);
	printf("Informe seu prontuário: ");	scanf("%s\n", &prontuario);
		for(int i=0;i<sizeof(prontuario);i++){
			if(!(prontuario[i] >= 48 && prontuario[i] <= 57) || !(prontuario[i] >= 65) && (prontuario[i] <= 90) || !(prontuario[i] >= 97 && prontuario[i] <= 122)){
				printf("Prontuário incorreto, %s. Tente novamente!",&name);
				return ok = false;
			}else{
				return ok = true;
			}
		} 
	};
}
};

void saveFile(char name[50], char prontuario[50]){
	char[sizeof(name+prontuario+1)] archName;
	for (int i=0; i<sizeof(name);i++){
		if(name[i] == ' ') {
			archName[i] = '_';
		} else {
			archName[i] = name[i];
		}
		if(name[i]==sizeof(name)){
			archName[i] = '_';
		}
	}
	archName = archName+prontuario;
	FILE* file = "RESULTADO_"+archName;
	fopen(file+".txt",a);
		if(file == NULL){
			fprintf(stderr,"OpenFileException.txt");
			return 1;
		}
	fprintf(file,name,prontuario);
	fclose(file);
};
