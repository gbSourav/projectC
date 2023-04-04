#include<stdio.h>

int main()
{
    int row,col,i,j,space;
    row=5,col=5;
    for(i=1; i<=row; i++){
    	
    	//S

    	for(j=1; j<=col; j++){
      if(i==1||i==3||(i==4 && j==5)||(i==5 && j==5)||(i==2 && j==1)||i==5)
            printf("* ");
            else
            printf("  ");
        }
        for(j=1; j<=col; j++)
        {
            printf(" ");
        }
        
        //O

        for(j=1; j<=col; j++){
        if(i==1||i==5||j==1||j==5)
        printf("* ");
        else
        printf("  ");
        }
        for(j=1; j<=col; j++)
        {
            printf(" ");
        }
        
        //U

        for(j=1;j<=col;j++){
        if(i==5||j==1||j==5)
        printf("* ");
        else
				printf("  ");
				}
				for(j=1; j<=col; j++)
        {
            printf(" ");
        }
        
        //R

				for(j=1;j<=col;j++){
				if(i==1||j==1||i==3||(i==4 && j==3)||(i==5 && j==5)||(i==5 && j==4)||(i==2 && j==5))
    
				printf("* ");
				else
				printf("  ");
				}
				for(j=1; j<=col; j++)
        {
           printf(" ");
         }
         
         //A

				for(j=1;j<=col;j++){
				if(i==1||j==1||i==3||j==col)
				printf("* ");
				else
				printf("  ");
				}
				for(j=1; j<=col; j++)
        {
           printf(" ");
         }
         
         //V

				for(j=1; j<=col; j++){
        if((j==1 && i<=3)||(j==col && i<=3)||(i==4 && j==2)||(i==4 && j==4)||(i==5 && j==3))
            printf("* ");
            else
            printf("  ");
        }
        for(j=1; j<=col; j++)
        {
            printf(" ");
         }
            printf("\n");
				
    }

}
