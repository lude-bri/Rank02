////////////////////////////
//        LIBRARY         //
///////////////////////////
#ifndef FLOOD_FILL_H
# define FLOOD_FILL

# include <stdio.h>
# include <stdlib.h>

#endif

#include "flood_fill.h"



/*
	flood_fill

	This function recursively fills a given 2D grid (represented by `tab`) starting from the current point (`curr`) with the character `'F'`.
	- The function stops filling when it encounters any boundary (grid limits) or a character that is different from the original character (`to_fill`).

	- Parameters:
		- `tab`: The 2D grid represented as an array of strings.
		- `size`: The size of the grid (width and height).
		- `curr`: The current point (x, y) where the filling is occurring.
		- `to_fill`: The character in the grid that needs to be replaced.

	- The function first checks for base cases:
		- If the current point (`curr.x`, `curr.y`) is out of bounds, or if the character at the current point is not the same as `to_fill`, the function returns without doing anything.
	
	- If the base case is not met, the function fills the current point (`curr.x`, `curr.y`) with the character `'F'`.
	
	- The function then recursively calls itself in the four cardinal directions:
		- Left: `(curr.x - 1, curr.y)`
		- Right: `(curr.x + 1, curr.y)`
		- Up: `(curr.x, curr.y - 1)`
		- Down: `(curr.x, curr.y + 1)`

	- This ensures that all connected regions with the original character are filled with `'F'`.
*/
void	fill(char **tab, t_point size, t_point curr, char to_fill)
{
	if (curr.x < 0 || curr.y < 0 || curr.x >= size.x || curr.y >= size.y || tab[curr.y][curr.x] != to_fill)
			return ;

	tab[curr.y][curr.x] = 'F';

	fill(tab, size, (t_point){curr.x - 1, curr.y}, to_fill);
	fill(tab, size, (t_point){curr.x + 1, curr.y}, to_fill);
	fill(tab, size, (t_point){curr.x, curr.y - 1}, to_fill);
	fill(tab, size, (t_point){curr.x, curr.y + 1}, to_fill);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}
 
