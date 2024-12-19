#include<stdio.h>
#include<string.h>
int main(){
	struct sinhvien{
		char name[100];
		int age;
		char phoneNumber[100];
	};
	struct sinhvien s1;
	printf("Moi ban nhap ten : ");
	fgets(s1.name,100,stdin);
	printf("Moi ban nhap tuoi : ");
	scanf("%d", &s1.age);
	printf("Moi ban nhap so dien thoai : ");
	scanf("%d", &s1.phoneNumber);
	printf("Name : %s", s1.name);
	printf("Age : %d\n", s1.age);
	printf("Phonenumber : %s\n", s1.phoneNumber);
	return 0;
}
