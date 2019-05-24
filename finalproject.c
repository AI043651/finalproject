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
int show(struct Friend f[],int  display){
	struct stat st;
	stat("friend.txt",&st);
	int i=0;
	FILE *readPtr;
	readPtr = fopen("friend.txt","r");
	if(readPtr!=NULL){
		if(display ==1){
			printf("name\tphonenumber\taddress\n");

		}
		if(st.st_size>0){
			while(!feof(readPtr)){

fscanf(readPtr."%s%s%s",f[i].name,f[i].phone,f[i].address);

			}
		}
		i++;
	}
	else{
		printf("file could not be opened\n");

	}
	fclose(readPtr);
	return i;
}
void insert(struct Friend f[]){
	struct Friend ff;
	FILE *writePtr;
	writePtr=fopen("friend.txt","a");
	if(writepte !=NULL){
		puts("enter your name,phone number and address");
		scanf("%s%s%s",ff.name,ff.phone,ff.address);
		fprintf(writePtr,"%s %s %s\n",ff.name, ff.phone, ff.address);
		printf("success to insert a record\n");
	}
	else{
		printf("file could not be opend\n");
	}
	fclose(readPtr);
	return i;
}
void removdadata(struct Friend f[], int lines){
	char name2[80];
	printf("input a  name to Remove:");
	scanf("%s",name2);
	int i = 0;
	int j = 0;
	int temp;
	FILE *writePtr;
	writePtr= fopen("friend.txt","r");
	if(writePtr!=NULL){
		while(!feof(writePtr)){
			stmp= strcmp(name2,f[i].name);
			if(stmp==0){
				break;
			}
			else{
				i++;
			}
		}
	}
	else{
		printf("file counld not be opened\n");

	}
	fclose(writePtr);
	writePrt =fopen("friend.txt","w");
	for(j=0;j<lines -1;j++){
		if(i!=j){
			fprintf(writePtr,"%s %s %s\n",f[j].name,f[j].phone,f[j].address);

		}

	}
	fclose(writePtr);
	return;
}
