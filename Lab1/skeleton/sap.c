/**
 * CS1010 AY2011/2 Semester 1 Lab1 Ex2
 * sap.c
 * Calculate how well an NUS student have to do in order to meet target
 * Tan Jiing Jiunn
 * Seaweed
 */

#include <stdio.h>

//prototype goes here
double compute_sap(float c1, float c2, int mc1, int mc2);

int main(void)
{
	//declaration of variable
    float 	sap,
			current_cap,
			target_cap;
	int		attempted_mc,
			attempting_mc;
	
	//attempted mc and current cap
    printf("Enter MCs attempted and current CAP: ");
	scanf("%d %f", &attempted_mc, &current_cap);
	
	//get attempting mc and target cap
    printf("Enter MCs attempting and target CAP: ");
	scanf("%d %f", &attempting_mc, &target_cap);
	
	sap = compute_sap(current_cap, target_cap, attempted_mc, attempting_mc);
	
	if(sap > 5.0) //impossible cases goes here
	{
    printf("Mission impossible!\n");
    }
	
	else //possible cases goes here
	{
	printf("SAP >= %.2f\n", sap);
	}
	
    return 0;
}

//function to compute SAP
double compute_sap(float c1, float c2, int mc1, int mc2)
{
	return (c2*(mc1+mc2)-(c1*mc1))/mc2;
}


