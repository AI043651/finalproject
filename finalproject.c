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
int menu(void){
	int ans;
	printf("\n");
	printf("1.Creat friendtable\n");
	printf("2.find friendtable\n");
	printf("3.Insertremove\n");
	printf("4.exit\n");
	printf("?");
	scanf("%d",&ans);
	gerchar();
	return ans;
}
void  creatfridnetable(struct friend f[]){
	FILE *writePtr;
	writePtr=fopen("friend.txt","w");
	if(writePtr !=NULL){
		int i=0;
		puts("enter your neme,phone number and address");
		scanf("%s%s%s",f[i].name,f[i].phone,f[i].address);
		fprintf(writePtr,"%s%s%s\n",f[i].name,f[i].phone,f[i].address);
		printf("success to insert a record\n");
		i+=1;

	}
	else{
		printf("file counld not be opend\n");
		
	}
	fclose(writPtr);
	return;
}
