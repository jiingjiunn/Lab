
#include <stdio.h>
#include <string.h>

void square(void)
{
printf("*********\n");
printf("*       *\n");
printf("*       *\n");
printf("*       *\n");
printf("*********\n");
}

void circle(void)
{
printf("   ***   \n");
printf(" *     * \n");
printf("*       *\n");
printf(" *     * \n");
printf("   ***   \n");
}

void triangle(void)
{
printf("    *    \n");
printf("   * *   \n");
printf("  *   *  \n");
printf(" *     * \n");
printf("*********\n");
}

void lines(void)
{
printf("    *    \n");
printf("   * *   \n");
printf("  *   *  \n");
printf(" *     * \n");
printf("*       *\n");
}

int main (void)
{
	int flag = 0,
        flag2 = 0;
    char YN;
    //char   input[20] = {0};
	int input;
	printf("Welcome to Constellation Drawer 1.0.\n");

	while(flag == 0)
	{
	    printf("What do you want to draw?\n");
        printf("Input 1 for ROCKET,\nInput 2 for MALE,\nInput 3 for FEMALE\n");
		//gets(input);
		scanf("%d",&input);
		printf("%d\n", input);
		//int result1 = strncmp(input, '1', 10);
		//int result2 = strncmp(input, '2', 10);
		//int result3 = strncmp(input, '3', 10);
		//if(result1 == 0)
		if(input == 1)
		{
            printf("\n");
			triangle();
			square();
			lines();
			flag2 = 0;
			while(flag2 == 0)
			{
                printf("Do you still want to draw? (Y/N)");
			    scanf("%s", &YN);
                if(YN == 'Y'||YN == 'y')
                {
                    flag = 0;
                    flag2 = 1;
                }
                else if(YN == 'N'||YN == 'n')
                {
                    flag = 1;
                    flag2 = 1;
                }
                else
                {
                    printf("Please input Y/N.\n");
                    flag2 = 0;
                }
			}
		}

		//else if(result2 == 0)
		else if(input == 2)
		{
			printf("\n");
			circle();
			square();
			lines();
			flag2 = 0;
			while(flag2 == 0)
			{
                printf("Do you still want to draw? (Y/N)");
			    scanf("%s", &YN);
                if(YN == 'Y'||YN == 'y')
                {
                    flag = 0;
                    flag2 = 1;
                }
                else if(YN == 'N'||YN == 'n')
                {
                    flag = 1;
                    flag2 = 1;
                }
                else
                {
                    printf("Please input Y/N.\n");
                    flag2 = 0;
                }
			}
		}

		//else if(result3 == 3)
		else if(input == 3)
		{
			printf("\n");
			circle();
			triangle();
			lines();
			flag2 = 0;
			while(flag2 == 0)
			{
                printf("Do you still want to draw? (Y/N)");
			    scanf("%s", &YN);
                if(YN == 'Y'||YN == 'y')
                {
                    flag = 0;
                    flag2 = 1;
                }
                else if(YN == 'N'||YN == 'n')
                {
                    flag = 1;
                    flag2 = 1;
                }
                else
                {
                    printf("Please input Y/N.\n");
                    flag2 = 0;
                }
			}
		}

		else
		{
			printf("Shape chosen is not yet included in current version, please input numbers from 1-3.\n");
			flag = 0;

		}
	}
printf("Thanks for using our software!");
return 0;
}
