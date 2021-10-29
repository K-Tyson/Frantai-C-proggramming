#include<stdio.h>
int main()
{
    int A,B,C,D,E,avarage;
    printf("enter value of A,B,C,D,E");
    scanf("%d%d%d%d%d",&A,&B,&C,&D,&E);
    avarage=(A+B+C+D+E)/5;
    printf("avarage=%d",avarage);
    if(avarage>=90&& avarage<=100)
    {
    printf("Grade A");
    }
    else if(avarage>=80&& avarage<=90)
{
printf("Grade B");
}
else if(avarage>=70&& avarage<=80)
{
printf("Grade C");
}
else if(avarage>=60&& avarage<=70)
{
printf("Grade D");
}
else if(avarage>=50&& avarage<=60)
{
printf("Grade E");
}
else if(avarage<=50)
{
printf("fail");
}
return 0;
}



