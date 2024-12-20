#include<stdio.h>
#include<string.h>
int main(){
	int a=0;
	int index;
	char findName[50];
	struct SinhVien{
		int id;
		char name[100];
		int age;
		char phoneNumber[100];
	};
	struct SinhVien s[50]={
		{
    		1,
    		"Nguyen Sy Trung",
    		18,
    		"0123456789"
		},
		{
			2,
    		"Nguyen Manh Hung",
    		18,
    		"0123456789"
		},
		{
			3,
    		"Nguyen Tuan Dung",
    		18,
    		"0123456789"
		},
		{
			4,
    		"Tran Anh Dung",
    		18,
    		"0123456789"
		},
		{
			5,
    		"Nguyen Quyet Thang",
    		20,
    		"0123456789"
		},
		{
			6,
    		"adsasdasd",
    		19,
    		"0123456789"
		}
	};
	printf("Moi ban nhap ten muon tim kiem : ");
	scanf("%s", &findName);
	getchar();
	for(int i=1;i<51;i++){
		if(strcmp(s[i].name,findName)==0){
			index=i;
			a=1;
		}
	}
	if(a==1){
		for(int i=index;i<50;i++){
			strcpy(s[i].name,s[i+1].name);
		}
		for(int i=1;i<5;i++){
			printf("Id : %d\n",i);
        	printf("Name id %d : %s",i, s[i].name);
         	printf("Age id %d : %d\n",i, s[i].age);
 		   	printf("Phonenumber id %d : %s\n",i, s[i].phoneNumber);
   		 	printf("\n \n");
		}
		for(int i=5;i<50;i++){
		printf("Id : %d\n",i);
    	printf("Name id %d : %s",i, s[6].name);
    	printf("Age id %d : %d\n",i, s[6].age);
    	printf("Phonenumber id %d : %s\n",i, s[6].phoneNumber);
    	printf("\n \n");
		}
	}
	if(a==0){
		printf("Khong ton tai sinh vien ban dang tim ");
	}
	return 0;
}
	
