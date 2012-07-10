/**
 * CS1010 AY2011/2 Semester 1 Lab3 Ex1
 * rectangles.c
 * Tan Jiing Jiunn
 * Seaweed
 * check if 2 rectangles are overlapping. if it is, calculate area of overlap
 */

#include <stdio.h>

void adjustCorners(float *, float *, float *, float *);
void typeAndArea(float, float, float, float, float, float, float, float,
                 int *, float *);
int isInLine(float p1, float p2, float q1, float q2);
int isOverlap(float p1, float p2, float q1, float q2);

int main(void)
{
	float rectAx1, rectAy1, rectAx2, rectAy2; // 1st rectangle
	float rectBx1, rectBy1, rectBx2, rectBy2; // 2nd rectangle
	float *ax1, *ax2, *ay1, *ay2; //pointers to 1st rectangle
	float *bx1, *bx2, *by1, *by2; //pointers to 2nd rectangle
	float area, *areaPtr; // overlapped area + pointer
	int type, *typePtr; //type + pointer

	// read inputs
	printf("Enter one corner of 1st rectangle: ");
	scanf("%f %f", &rectAx1, &rectAy1);
	printf("Enter opp corner of 1st rectangle: ");
	scanf("%f %f", &rectAx2, &rectAy2);

	printf("Enter one corner of 2nd rectangle: ");
	scanf("%f %f", &rectBx1, &rectBy1);
	printf("Enter opp corner of 2nd rectangle: ");
	scanf("%f %f", &rectBx2, &rectBy2);

    //assigning pointers
	ax1 = &rectAx1; ax2 = &rectAx2; bx1 = &rectBx1; bx2 = &rectBx2;
	ay1 = &rectAy1; ay2 = &rectAy2; by1 = &rectBy1; by2 = &rectBy2;
    typePtr = &type;
    areaPtr = &area;

    //adjust corners for both rectangles
	adjustCorners(ax1, ax2, ay1, ay2);
	adjustCorners(bx1, bx2, by1, by2);

    //printing of the adjusted coordinates
    printf("Rectangle A = ([%.1f, %.1f], [%.1f, %.1f])\nRectangle B = ([%.1f, %.1f], [%.1f, %.1f])\n",
           rectAx1, rectAy1, rectAx2, rectAy2, rectBx1, rectBy1, rectBx2, rectBy2);

    //call out to functions to determine each possibilities
    typeAndArea(rectAx1, rectAy1, rectAx2, rectAy2,
                rectBx1, rectBy1, rectBx2, rectBy2,
                typePtr, areaPtr);

    //printing of the type of overlapping
	switch(type){
        case 0:
            printf("Rectangles A and B are disjoint.\n");
            break;
        case 1:
            printf("Rectangles A and B touch each other.\n");
            break;
        case 2:
            printf("Rectangles A and B overlap each other.\n");
            break;
    }

	printf("Overlapped area = %.2f\n", area);

	return 0;
}

void adjustCorners(float *x1, float *x2, float *y1, float *y2){
    float temp;
    //swapping of coordinates x if necessary
    if(*x1 > *x2){
        temp = *x1;
        *x1 = *x2;
        *x2 = temp;
    }
    //swapping of coordinates y if necessary
    if(*y1 > *y2){
        temp = *y1;
        *y1 = *y2;
        *y2 = temp;
    }
}

//function to compute type and area of overlap
void typeAndArea(float Ax1, float Ay1, float Ax2, float Ay2,
                 float Bx1, float By1, float Bx2, float By2,
                 int *type, float *area){
    float *l1, *l2, *w1, *w2;

    if( ( (Ay1 > By2) || (By1 > Ay2) || (Ax1 > Bx2) || (Bx1 > Ax2) ) ){ //case where rectangles are disjoint
        *type = 0;
        *area = 0;

    }else if((isInLine(Ax1, Ax2, Bx1, Bx2) && isOverlap(Ay1, Ay2, By1, By2)) ||
             (isInLine(Ay1, Ay2, By1, By2) && isOverlap(Ax1, Ax2, Bx1, Bx2)) ){ //case if rectangles are touching
        *type = 1;
        *area = 0;

    }else{ //case if rectangles are overlapping

        *type = 2;

        if(Ax1 > Bx1){
            l1 = &Ax1;
        }else{
            l1 = &Bx1;
        }
        if(Ax2 < Bx2){
            l2 = &Ax2;
        }else{
            l2 = &Bx2;
        }

        if(Ay1 > By1){
            w1 = &Ay1;
        }else{
            w1 = &By1;
        }
        if(Ay2 < By2){
            w2 = &Ay2;
        }else{
            w2 = &By2;
        }

        *area = (*w2 - *w1)*(*l2 - *l1);
    }
}

//check if the corners of the rectangle is in line with each other
int isInLine(float p1, float p2, float q1, float q2){
    if(p1 == q2 || p2 == q1){
        return 1;
    }else{
        return 0;
    }

}

//determine if any of the corners of any rectangle is within the boundary ofthe other rectangle
int isOverlap(float p1, float p2, float q1, float q2){
    if((p1 <= q2 && p1 >= q1) || (p2 <= q2 && p2 >= q1)||(q1 <= p2 && q1 >= p1) || (q2 <= p2 && q2 >= p1) ){
        return 1;
    }else{
        return 0;
    }
}
