unsigned int flip_bits(unsigned long int n, unsigned long int m) 
{
	unsigned int count = 0;
	unsigned long int xor;

	xor = n ^ m;
  // Count the number of set bits in the XOR result.
	unsigned int count = 0;
	while (xor > 0) 
	{
		if (xor & 1) 
			count++;
    
	xor >>= 1;
	}

	return (count);
}
