/*

 * main.c
 *
 *  Created on: Jan 28, 2023
 *      Author: mohamed
 */

#include "stdio.h"

void main (){

	int Array_1[100];
	int No_Of_Element , Location , Element  ;
	printf("Enter No of element: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&No_Of_Element);
	printf("Enter all element");
	for(int i =0 ;i<No_Of_Element;i++){
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&Array_1[i]);
	}
	printf("Enter element to be inserted : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&Element);
	printf("Enter Location to be inserted : ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&Location);
	for(int i=No_Of_Element ; i >=0 ;i-- ){
		if(No_Of_Element==Location){
			Array_1[Location]= Element;
			break;
		}
		else if (i==Location){
			Array_1[i]=Array_1[i-1];
			Array_1[Location-1]=Element;
			break;
		}
		else{
			Array_1[i]=Array_1[i-1];
		}
	}
	for(int i =0 ; i<=No_Of_Element;i++){
		printf("%d ",Array_1[i]);
	}

}

