#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main (void)
{
	float x1,x2,y1,y2,d;
	printf ("Programa calcular distancia\n");
	printf ("Digite os valores de x1,x2,y1,y2\n");
	scanf ("%f%f%f%f\n", &x1,&x2,&y1,&y2);
	d=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	printf ("A distancia e: %f\n",sqrt (d));
	
	system ("pause");
	
	return 0;
}
