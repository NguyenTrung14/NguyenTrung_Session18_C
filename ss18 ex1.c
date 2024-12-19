#include<stdio.h>
#include<string.h>
int main(){
	struct sinhvien{
		char name[100];
		int age;
		char phoneNumber[100];
	};
	struct sinhvien s1={
		"Nguyen Sy Trung",
		18,
		"0968038690",
	};
	printf("Name : %s\n", s1.name);
	printf("Age : %d\n", s1.age);
	printf("Phonenumber : %s\n", s1.phoneNumber);
	return 0;
}
