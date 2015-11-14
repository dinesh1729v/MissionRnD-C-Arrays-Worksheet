/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

void * removeArrayDuplicates(int *Arr, int len)
{
	if (len < 0)return NULL;
	if (Arr == NULL)return NULL;
	int i, j, k;
	for (i = 0; i < len; i++)
	{
		for (j = i + 1; j < len; j++)
		{
			if (Arr[j] == Arr[i])
			{
				for (k = j + 1; k < len; k++)
					Arr[k - 1] = Arr[k];
				len--;
			}
		}
	}
	Arr[len + 1] = NULL;
	return NULL;
}