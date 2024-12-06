#include<stdio.h>
int main(){
	vaishvi:
	printf("press 1 for gujarat\n");
	printf("press 2 for maharastra\n");
	printf("press 3 for madhya pradesh\n");
	printf("press 0 for exit\n");
	int choice1,choice2;
	printf("enter your choice:");
	scanf("%d",&choice1);
	
		switch(choice1){
			case 1:
				printf("enter 1 for bharuch\n");
				printf("enter 2 for surat\n");
				printf("enter 3 for baroda\n");
				
				printf("enter your choice:\n");
				scanf("%d",&choice2);
				switch(choice2){
					case 1 : printf("bharuch\n");
					break;
					case 2 : printf("surat\n");
					break;
					case 3 : printf("baroda\n");
					break;
					default:
					printf("invalid choice");
				}
				goto vaishvi;
				break;
				
				case 2:
				printf("enter 1 for pune\n");
				printf("enter 2 for mumbai\n");
				printf("enter 3 for garchiroli\n");
				
				printf("enter your choice:\n");
				scanf("%d",&choice2);
				switch(choice2){
					case 1 : printf("pune\n");
					break;
					case 2 : printf("mumbai\n");
					break;
					case 3 : printf("garchiroli\n");
					break;
					default:
					printf("invalid choice");
				}
				goto vaishvi;
				break;
				
				case 3:
				printf("enter 1 for ujjain\n");
				printf("enter 2 for indore\n");
				printf("enter 3 for mahakaleshwar\n");
				
				printf("enter your choice:\n");
				scanf("%d",&choice2);
				switch(choice2){
					case 1 : printf("ujjain\n");
					break;
					case 2 : printf("indore\n");
					break;
					case 3 : printf("mahakaleshwar\n");
					break;
					default:
					printf("invalid choice");
				}
				goto vaishvi;
				break;
			case 0 :printf("exited succesfully\n");
			break;
			default:
				printf("invalid choice");
				goto vaishvi;
		
}
			
		
}
