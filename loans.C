
//programme based on loan 
#include <stdio.h>
int main()
{
	int age;
	float salary;
	//prompt the user to enter the age

	printf("enter the age:");
	scanf("%d",&age);
	//prompt the user to enter salary
	printf("enter the salary:");
	scanf("%f",&salary);
	if(age>=21,salary>=21000){
		printf("congratulations you qualify for the loan");
	}
	else
	{
		printf(" unfortunately we are unable to offer you a loan at this time");
	}
	return 0;
}