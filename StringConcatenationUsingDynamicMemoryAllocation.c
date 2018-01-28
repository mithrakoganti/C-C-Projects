#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	char *str1, *str2, *str3, *strcon, ch;
	int l1, l2, l3,i,j,k;
	printf("Enter lengths of three strings:");
	scanf("%d %d %d", &l1, &l2, &l3);
    str1 = (char*)malloc(l1*sizeof(char));
    str2 = (char*)malloc(l2*sizeof(char));
    str3 = (char*)malloc(l3*sizeof(char));
    
    strcon = (char*)malloc((l1+l2+l3)*sizeof(char));
    printf("\n Enter string 1:");
    scanf(" %s", str1); 
	printf("\n Enter string 2:");
	fflush(stdin);
    gets(str2);  
	printf("\n Enter string 3:");
    scanf(" %s", str3);  
	
	i=0;
	while((ch= *(str1+i)) != '\0')	
	{
		strcon[i]=ch;
		i++;
	}
	
		j=0;
	while((ch= *(str2+j)) != '\0')	
	{
		strcon[i+j]=ch;
		j++;
	}	
	
	k=0;	
	while((ch= *(str3+k)) != '\0')	
	{
		strcon[i+j+k]=ch;
		k++;
	} 
		strcon[i+j+k]='\0';
		printf("\n The concatenated string is: %s\n", strcon);
		   
}
    
