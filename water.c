
// Implemnt (Water) get bottles number with Munites shower  

#include <cs50.h>
#include <stdio.h>

// protoytpe calcule 
double getTimeshower ( int munites);

int main (void)
{
	int water;
	
	printf("Munites: ");
	int munites = get_int();

	water = getTimeshower(munites) * 128;
	printf("Bottles: %i\n", water/16 );
}

// Function values return 
double getTimeshower ( int munites)
{
	if (munites == 1)
	{
		return 1.5;
	}

	return munites *= 1.5;
}
// J.Christ