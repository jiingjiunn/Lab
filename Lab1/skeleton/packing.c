/**
 * CS1010 AY2011/2 Semester 1 Lab1 Ex3
 * packing.c
 * Calculate the maximum number of slab that can be arranged into a tray
 * Desc. : The program does so by dividing the tray into areas before arranging the slabs. 
 *			In the process of arranging, horizontal and vertical orientation is taken into account as well. 
 * Tan Jiing Jiunn	
 * Seaweed
 */

#include <stdio.h>

int compute_max_slabs(int tw, int tl, int sw, int sl);
int compute_case_slabs (int tw, int tl, int sw, int sl);
int compute_section_slabs (int a, int b, int c, int d);

int main(void)
{
    int max_slabs;
	int 	tray_width,
			tray_length,
			slab_width,
			slab_length;

    printf("Enter dimension of tray: ([WIDTH] [LENGTH] ");
	scanf("%d %d", &tray_width, &tray_length);
	
    printf("Enter dimension of slab: ([WIDTH] [LENGTH] ");
	scanf("%d %d", &slab_width, &slab_length);
	
	max_slabs = compute_max_slabs(tray_width, tray_length, slab_width, slab_length);
    printf("Maximum number of slabs = %d\n", max_slabs);

    return 0;
}

//compute the final number of the maximum slabs that can be placed on the tray considering arrangement orientation
int compute_max_slabs(int tw, int tl, int sw, int sl)
{
	int case_1 = compute_case_slabs(tw, tl, sw, sl);
	printf("case1=%d\n",case_1);
	int case_2 = compute_case_slabs(tw, tl, sl, sw);
	printf("case2=%d\n",case_2);
	if(case_1 > case_2)
	{
		return case_1;
	}
	else
	{
		return case_2;
	}
}

//compute the number of maximum slabs that can be placed into an area for an orientation of arrangement
int compute_case_slabs (int tw, int tl, int sw, int sl)
{
	int slab_counter = 0;
	int total = 0;
	total = compute_section_slabs(tw, sw, tl, sl);
	//compute section 2
	printf("%d\n",total);
	total += compute_section_slabs(tw%sw, sl, tl, sw);
	printf("%d\n",total);
	total += compute_section_slabs(tw, sl, tl%sl, sw);
	printf("total=%d\n",total);	
	return total;
}	

//compute the number of slabs that can be packed into a section
int compute_section_slabs (int a, int b, int c, int d)
{
	if(a > b && c > d)//makes sure dimension fits before fitting
	{
		int n1 = a/b;
		int n2 = c/d;
		return n1*n2;
	}
	else
	{
		return 0;
	}	
}	
	

// Add your function below (and remove this comment!)
// Every function should be preceded with a comment
// that describes what the function does.

