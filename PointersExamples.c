//pointers_examples
//Javier Marquez Ruiz
//These are some examples of pointers

#include <stdio.h>

#define PRINTPTR printf("%i\n", *ptr);
#define LINE counter();
//Lexical substitution.

int global_cnt = 0;
void counter(){
	global_cnt += 1;
	printf("%i: ", global_cnt);
}

int main(){
	int *ptr; //ptr is a pointer to integer
	int x, y;
	x = 450;
	ptr = &x; //ptr points to x.
			  //Address operator: &
			  //Indirect addressing operator: *
			  //Returns content of the address memory contained by a pointer
	LINE PRINTPTR

	int z[5] = {1,2,3,4,5};
	ptr = &z[0];
	LINE PRINTPTR //Prints 5
	y = *ptr+13;
	LINE PRINTPTR
	LINE printf("%i\n", y);

	//Pointers and arrays
	int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
	ptr = &numeros[0]; //ptr points to the beginning of the array
	LINE PRINTPTR //Prints 1
	ptr += 3;
	LINE PRINTPTR //Prints 4

	char s[20] = "Cadena de prueba";
	void *ptrv;
	char *ptrc;
	ptrv = &s;
	ptrc = ptrv;
	LINE printf("%s\n", ptrc);
	

	return 0;
}
