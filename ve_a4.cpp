#include <stdio.h>
int main()
{
	int hang, cot;
	scanf (" %d %d", &hang,&cot);
	if (hang == cot)
	{
		for (int i = 1; i <= hang; i++)
		{
			for (int j = 1; j <= cot; j ++)
			    if (j <= i) printf ("%d",i);
			    else printf ("%d",j);
			printf ("\n");
		}
	}
	if (hang < cot)
	{
		for (int i = 1; i <= hang; i++)
	    {
	    	for (int j = 1; j <= cot; j ++)
	    	    if (j <= cot - hang +i) printf ("%d", cot - hang + i);
	    	    else printf ("%d", j);
	    	printf ("\n");
		}
	}
	if (hang > cot)
	{
		for (int i = 1; i <= hang; i++)
		{
			for (int j = 1; j <= cot ; j ++)
			    if (i < hang - cot) printf ("%d", hang - cot + j);
			    else {
			    	if (hang - cot + j <= i) printf ("%d", i);
			    	else printf ("%d", hang - cot + j);
				}
			printf ("\n");
		}
	}
	return 0;
}

