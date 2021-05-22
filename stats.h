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
 * @file stats.h 
 * @brief Perform statistical operations on an array and display the reuslts, as well as sort an array largest to smallest
 *
 * Contains function definitions for finding and displaying the maximum, minimum, mean, and median of an array. 
 * Additionally it conains a sort function to sort an array from largest to smallest.
 * The functions will accept as parameters an unsigned character array and an unsigned int for array size. 
 * They will return an unsigned char, printf data, or in the case of the sort function IT WILL MODIFY THE ORIGINAL ARRAY and sort it from largest to smallest value
 *
 * @author Tyler McGrath
 * @date 5/21/2021
 */

#ifndef __STATS_H__
#define __STATS_H__

void print_statistics(unsigned char *stat_arr, int size);

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 *  Takes an unsigned char array and an int forthe size of that array. This function will call the find_mean, find_median, find_maximum
 *  and find minimum functions. Those functions are responsible for printing their values
 *
 * @param stat_arr: The unsigned char pointer that is used to access the array
 * @param size: An int that is the size of the array
*/

void print_array(unsigned char *stat_arr, int size);

/**
 * @brief  Given an array of data and a length, prints the array to the screen
 *
 *  Takes an unsigned char array and an int for the size of that array. The contents of the array are displayed using printf from this function.
 *  It will print a line break after every 10 elements to improve readablity.
 *
 * @param stat_arr: The unsigned char pointer that is used to access the array
 * @param size: An int that is the size of the array
*/

unsigned char find_median(unsigned char *stat_arr, int size);

/**
 * @brief Given an array of data and a length, returns the median value
 *
 *  Takes an unsigned char array and and int for the size of that array. The median value of the array is determined 
 *  then returned from the function and displayed by this function.
 *
 * @param stat_arr: The unsigned char pointer that is used to access the array
 * @param size: An int that is the size of the array
*/

unsigned char find_mean(unsigned char *stat_arr, int size);

/**
 * @brief Given an array of data and a length, returns the mean
 *
 *  Takes an unsigned char array and an int for the size of that array. The mean value of the array is determined 
 *  then returned from the function and displayed by this function.
 *
 * @param stat_arr: The unsigned char pointer that is used to access the array
 * @param size: An int that is the size of the array
*/ 

unsigned char find_maximum(unsigned char *stat_arr, int size);

/**
 * @brief Given an array of data and a length, returns the maximum
 *
 *  Takes an unsigned char array and an int for the size of that array. The maximum value of the array is determined 
 *  then returned from the function and displayed by this function.
 *
 * @param stat_arr: The unsigned char pointer that is used to access the array
 * @param size: An int that is the size of the array
*/

unsigned char find_minimum(unsigned char *stat_arr, int size);

/**
 * @brief Given an array of data and a length, returns the minimum
 *
 *  Takes an unsigned char array and an int for the size of that array. The minimum value of the array is determined 
 *  then returned from the function and displayed by this function.
 *
 * @param stat_arr: The unsigned char pointer that is used to access the array
 * @param size: An int that is the size of the array
*/ 

void sort_array(unsigned char *stat_arr, int size);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 * !!WARNING: THIS FUNCTION WILL MODIFY THE PARAMETER ARRAY!!
 *
 * Takes an unsigned char array and an int for the size of that array. The parameter array will be modified and sorted from largest to smallest value
 * The array that is passed to this function WILL BE MODIFIED 
 *
 * @param stat_arr: The unsigned char pointer that is used to access the array
 * @param size: An int that is the size of the array
 
*/ 

#endif /* __STATS_H__ */
