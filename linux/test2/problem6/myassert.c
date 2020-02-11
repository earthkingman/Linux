#include <stdio.h>
#include <stdlib.h>




void myassert(int a){


if(!((a >= 0)&&(a <= 100)));
         abort();
        printf("foo : num = %d\n",a);
	printf("%s: ,%s: ,%d :",__func__,__FILE__, __LINE__);

	}


        




main(int argc, char *argv[])
{
 int num ;

	if (argc <2) {

		fprintf(stderr, "Usage: assert_test aNumber\n(0 <= anumber <= 100)\n");
			
	exit(1);
}
	

	num = atoi(argv[1]);
	myassert(num);	
   

    }

