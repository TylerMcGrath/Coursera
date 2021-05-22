/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief This program will perform various statistical operations as well as sort an array.
 *
 *  This program will display the median, mean, maximum, and minimum of an array.  The array will also be printed formatted to display 
 *  10 elements per line for readability. The program will also sort the array from largest to smallest and reprint the sorted array.
 *
 * @author Tyler McGrath
 * @date 5/51/2021
 *
 */



#include <stdio.h>
#include <math.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char stat_array[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  
  
  
  /* Statistics and Printing Functions Go Here */
  printf("\nBeginning array analysis and display.\n");
  print_array(stat_array, SIZE);
  printf("\n");
  print_statistics(stat_array, SIZE);
  printf("\n");
  sort_array(stat_array, SIZE);
  printf("\n");
  print_array(stat_array, SIZE);
 

  

}

/* Add other Implementation File Code Here */

void print_statistics(unsigned char *stat_arr, int size){
	printf("\nPerforming statistical analysis...\n");
	find_median(stat_arr, size);
	find_mean(stat_arr, size);
	find_maximum(stat_arr, size);
	find_minimum(stat_arr, size);

}

void print_array(unsigned char *stat_arr, int size){
	printf("\nDisplaying array...\n");
	for (int i = 0; i < size; i++)
	{
		printf(" %d", stat_arr[i]);
		if ((i + 1) % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");

}

unsigned char find_median(unsigned char *stat_arr, int size){
	int midpoint; 
	midpoint = floor(size/2);
	int median;
	median = stat_arr[midpoint];
	printf("\nThe median of the array is: %d\n", median);
	return median;
}

unsigned char find_mean(unsigned char *stat_arr, int size){
	
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
	  sum += stat_arr[i];
	}
	int mean;
	mean = floor(sum / size);
	printf("\nThe mean of the array is: %d\n", mean);
	return mean;
}

unsigned char find_maximum(unsigned char *stat_arr, int size){
	
	int maximum = stat_arr[0];
	for (int i = 0; i < size; i++)
	{
		if (maximum < stat_arr[i])
		{
			maximum = stat_arr[i];
		}
	}
	printf("\nThe maximum of the array is: %d\n", maximum);
	return maximum;
}

unsigned char find_minimum(unsigned char *stat_arr, int size){

	int minimum = stat_arr[0];
	for (int i = 0; i < size; i++)
	{
		if (minimum > stat_arr[i])
		{
			minimum = stat_arr[i];
		}
	}
	printf("\nThe minimum of the array is: %d\n", minimum);
	return minimum;
}

void sort_array(unsigned char *stat_arr, int size){
	printf("\nSorting array...\n");
	for (int i = 0;  i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (stat_arr[j] > stat_arr[i])
			{
				int temp = stat_arr[i];
				stat_arr[i] = stat_arr[j];
				stat_arr[j] = temp;
			}
		}
			
	}
	printf("\nArray sorted from largest to smallest\n");

}

