#include<stdio.h>
#include<string.h>
int main(){
	struct sinhvien{
		int id;
		char name[100];
		int age;
		char phoneNumber[100];
	};
	int find;
	struct sinhvien s[50];
	for(int i=1;i<=5;i++){
	    printf("Moi ban nhap ten id %d : ",i);
    	fgets(s[i].name,100,stdin);
    	printf("Moi ban nhap tuoi id %d : ",i);
    	scanf("%d", &s[i].age);
    	getchar();
    	printf("Moi ban nhap so dien thoai id %d : ",i);
    	fgets(s[i].phoneNumber,100,stdin);
    	printf("\n \n");
    }
    printf("Moi ban nhap id muon sua : ");
    scanf("%d", &find);
    getchar();
    if(find>0 && find<51){
    	printf("Moi ban sua ten : ");
    	fgets(s[find].name,100,stdin);
    	printf("Moi ban sua tuoi : ");
    	scanf("%d", &s[find].age);
    	getchar();
	}
	printf("\n \n");
	for(int i=1;i<=5;i++){
		printf("Id : %d\n",i);
    	printf("Name id %d : %s",i, s[i].name);
    	printf("Age id %d : %d\n",i, s[i].age);
    	printf("Phonenumber id %d : %s\n",i, s[i].phoneNumber);
    	printf("\n \n");
	}
	for(int i=6;i<=50;i++){
		if(i==find){
		printf("Id : %d\n",find);
    	printf("Name id %d : %s",find, s[find].name);
    	printf("Age id %d : %d\n",find, s[find].age);
    	printf("Phonenumber id %d : %s\n",find, s[3].phoneNumber);
    	printf("\n \n");	
    	i++;
		}
		printf("Id : %d\n",i);
    	printf("Name id %d : %s",i, s[1].name);
    	printf("Age id %d : %d\n",i, s[2].age);
    	printf("Phonenumber id %d : %s\n",i, s[3].phoneNumber);
    	printf("\n \n");
	}
	return 0;
}
