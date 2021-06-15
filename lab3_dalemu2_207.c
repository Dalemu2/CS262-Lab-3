/* Daniel Alemu  G00884794
 CS 262, Lab Section 207
Lab 3*/

#include <stdio.h>
#include <stdlib.h>

void printFigurePlus(int,char);
void printFigureX(int,char);

// menu function (display Menu )
void menu()
{
	printf("To Enter/Change a Character Press Either 'C' or 'c'\n");
	printf("To Enter/Change a Number Press Either 'N' or 'N' \n");
	printf("To Print Plus (+) Figure press '1' \n");
	printf("To Print X Figure Press '2' \n");
	printf("To Quite From the Program Press Either 'q' or 'Q'\n");
}
// function allaw the user to enter char value(called by main()  and charInput() functions
char userInput()
{	
	char input;
	char buffer[50];
	fgets(buffer,50,stdin);
	sscanf(buffer,"%c",&input);
	return input;
}

// function for char(C)  input
char charInput()
{
	char charIn;
	printf("Enter A Character = ");
	charIn = userInput();
	return charIn;
}

// function allaw the user to enter an integer value(called by numInput() function
int userNInput()
{
	int intInput;
	char buffer[50];
	fgets(buffer,50,stdin);
	sscanf(buffer,"%d",&intInput);
	return intInput;
}

//function for odd Number input (N)

int numInput()
{
	int  oddNum,y=1;
	printf("Enter odd Number Between 3 and 15  =");
	oddNum=userNInput();
	if((oddNum<3)||(oddNum>15)||(oddNum%2==0))
	{
	    while(y>0)

	     {
		printf("Try Again, Enter Odd Number Between 3 and 15  =");
		oddNum=userNInput();
		if((oddNum>=3)&&(oddNum<=15)&&(oddNum%2==1))
		{
		y=0;
		}
	     }
	}	
	return oddNum;
}
// main function 
//
int main()
{
	char C=' ';
	int N=0;
	char option;

   do{

	menu();
	option=userInput();

	switch(option)
	{		
		case 'c':
		case 'C':
		C=charInput();
		break;

		case 'N':
		case 'n':
		N=numInput();
		break;

		case '1':
		printFigurePlus(N,C);
		break;

		case '2':
		printFigureX(N,C);
		break;
	
		case 'q':
		case 'Q':
		printf("Program Exit\n");
		exit(0);
		break;

		default: 
		printf("Invalid Input Enter your Choice again \n");
	}
    }while(1);	
return 0;
}
	
//print Plus(+) Figure function 
void printFigurePlus(int N,char C)
{
       int x= (N/2) + 1;
	for(int i=1; i <= N ; i++)
	{
	    for(int j=1; j<= N; j++)
		{
		   if(i == x || j == x)
		      {
			printf("%c",C);
		      }
		    else
			{
			 printf(" ");
			}
		 }
	     printf("\n");
	}
}
//print X figure function
void printFigureX(int N, char C)
{

	for(int i=1; i<= N; i++)
	{
	   for(int j=N;j>=1;j--)
	   {
		if(i==j||j== N - i+1)
		{
		   printf("%c",C);
		}
		else
		{
		  printf(" ");
	        }
	   
	  }
	
	  printf("\n");
        }

} 
	 

