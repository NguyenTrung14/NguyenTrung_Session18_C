#include<stdio.h>
#include<string.h>
int main(){
	struct sinhvien{
		int id;
		char name[100];
		int age;
		char phoneNumber[100];
	};
	struct sinhvien s[5];
	for(int i=1;i<=5;i++){
	    printf("Moi ban nhap ten id %d : ",i);
    	fgets(s[i].name,100,stdin);
    	printf("Moi ban nhap tuoi id %d : ",i);
    	scanf("%d", &s[i].age);
    	getchar();
    	printf("Moi ban nhap so dien thoai id %d : ",i);
    	fgets(s[i].phoneNumber,100,stdin);
    	printf("\n \n");
    	printf("Id : %d\n",i);
    	printf("Name id %d : %s",i, s[i].name);
    	printf("Age id %d : %d\n",i, s[i].age);
    	printf("Phonenumber id %d : %s\n",i, s[i].phoneNumber);
    	printf("\n \n");
    }
	return 0;
}
