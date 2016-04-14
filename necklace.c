A necklace is constructed from a number of blue beads and also red beads and with a length of thread. Each blue bead costs 5pesos while the red bead cost 2pesos each. The cost of the thread is 10pesos per inch, and any length less than 10 inches will cost 90 pesos. What is the total cost of materials for the necklace given the number of blue and red beads and the length of the thread?

Create the code body of the topmost function and the code body of each wishlist function.

float redCost(int numRed)
{
	return numRed * PRICE_PER_RED;
}

float blueCost(int numBlue)
{
	return numBlue * PRICE_PER_BLUE;
}

float threadCost(float length)
{
	float cost = 0.0;
	if (length < MINIMUM_LENGTH)
	{
		cost = MIN_COST;
	}
	else
	{
		cost = COST_PER_INCH * length;
	}
	return cost;
}

//float beadCost(int numBlue, int numRed, int numWhite)
//{
//	return blueCost(numBlue) + redCost(numRed) + whiteCost(numWhite);
//}


float totalCost(int numBlue, int numRed, int numWhite, float length)
{
	return redCost(numRed) +  blueCost(numBlue) + threadCost(length);
	//return beadCost(numBlue, numRed, numWhite) + threadCost(length);
}