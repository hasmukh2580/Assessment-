#include<stdio.h>

int main() 
{
    int total =0;
    int i;
    int num_of_inputs;

    printf("How many numbers do you want to input? ");
    scanf("%d",&num_of_inputs);

    for(i=0;i<num_of_inputs;i++)
	{
        int num;
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        total+=num;
    }

    printf("The sum of the numbers is: %d\n", total);

    return 0;
}

