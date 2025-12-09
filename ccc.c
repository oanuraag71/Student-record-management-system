# include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define STUDENT_FILE "students.txt"
#define CREDENTIAL_FILE "credentials.txt"
struct Student{
	int roll;
	char name[50];
	float marks;
	};
	char currentRole[10];
	char currentUser[50];
	
	
	
	int main(){
		if(loginSystem()){
			mainMenu90;
		}else{
			printf("\n Access Denied. Existing...\n");
		}
		return 0;
	}
	
	int loginSystem(){
		char username[50],password[50];
		char fileUser[50],filePass[50],fileRole[10];
		
		printf("==== Login ====\n");
		printf("Username:");
		scanf("Password: ");
		scanf("%s",password);
		
		FILE *fp = fopen(CREDENTIAL_FILE,"r");
		if(!fp){
			printf("ERROR: credentials.txt not found!\n");
			return 0;
		}
		while(fscan(fp,"%s %s %s", fileUser,filePass,fileRole)==3){
			if(strcmp(username,fileUser)==0 && strcmp(password,filePass)==0){
				strcpy(currentRole,fileRole);
				strcpy(currentUser,fileUser);
				fclose(fp);
				return 1;
			}
		}
		fclose(fp);
		return 0;	
			}
			
			switch(choice){
				case 1: addStudent();break;
				case 2: displayStudents();break;
				case 3: searchStudent();break;
				case 4: updateStudents();break;
				case 5: deleteStudent();break;
				case 6: printf("logging out...\n");return ;
				default: printf("invalid choice!\n");
			}
			}while(1);
		}
			
