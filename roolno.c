#include<stdio.h>

	struct students{
		int roll_no;
		char name[100];
		int chemmarks;
		int mathmarks;
		int phymarks;
};

  int main()
{
	int i;
	float percentage;
	struct students m[5];
	for(i=0;i<3;i++)
	{
	 	printf("enter roll_no=");
		scanf("%d",&marks[i].roll_no);
		printf("enter nane=");
		scanf("%d",&marks[i].name);
		printf("enter physics marks=");
		scanf("%d",&marks[i].phymarks);
		printf("enter chemistry marks=");
		scanf("%d",&marks[i].chemmarks);
		printf("enter matha marks=");
		scanf("%d",&marks[i].mathmarks);
	}
	printf("\n===========================\n");
	for(i=0;i<3;i++)
	{
		printf("student roll_no =%d\n",marks[i].roll_no);
		printf("student  name=%d\n",marks[i].name);
		printf("student  physica marks=%d\n",marks[i].phymarks);
		printf("student  chemisty marks=%d\n",marks[i].chemmarks);
		printf("student matha marks =%d\n",marks[i].mathmarks);
        sum=m[i].roll_no+marsk[i].name+marks[i].phymarks+marks[i]chemmarks+marks[i].mathmarks;
        percentage=sum*100\300;
		printf("student percentage is=%f\n",percentage);
	}
}
