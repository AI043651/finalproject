#include<stdio.h>
#include<stdlib.h>
struct Friendslist{
	int phone;
	char name[30];
	char adderass[100];
}
int menu(void);
void creationfriendtable(void);
void findfreind(void);
void insertremove(void);

int main(void){
	struct Freindslist;
	FLIE *fPtr;
	fptr=fopen("FriendList.txt","rb+");
	if(fptr=NULL){
		while((ans==menu())!=5){
			switch(ans){
				case 1:
					creationfriendtble(fptr);
					system("CLS");
					break;
				case 2:
					findfreind(fptr);
					system("CLS");
					break;
				case 3:
					insertmove(fptr);
					system("CLS");
					break;
				default:
					printf("Incorrect choice\n");
					system("CLS");
					break;

			}
		}
		fclose(fptr);
	}
	else{
		printf("ERROR!\n");

	}
	system("pause");
	return 0;
}
