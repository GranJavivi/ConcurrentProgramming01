//Person's structure
//Javier Marquez Ruiz
//An array containing structures,
//each one represents a person.

#include <stdio.h>
#include <string.h>

typedef struct {
	char name[25];
	long int dni;
	float balance;
} Person;

void displayPerson(Person person);
void searchPerson(Person people[5], char name[25]);

int main(){
	Person people[5];

	for (int i = 0; i < 5; i++){
		printf("Name: ");
		scanf("%s", people[i].name);
		printf("Dni: ");
		scanf("%li", &people[i].dni);
		printf("Balance: ");
		scanf("%f", &people[i].balance);
	}

	for (int i = 0; i < 5; i++){
		displayPerson(people[i]);
	}

	//Trying it
	char buscar[25];
	scanf("%s", buscar);
	searchPerson(people,buscar);
	return 0;
}

void displayPerson(Person person){
	printf("%s, dni: ", person.name);
	printf("%li, balance: ", person.dni);
	printf("%f\n", person.balance);
}

void searchPerson(Person people[5], char name[25]){
	int i = 0;
	int notFound = 1;
	while (notFound && i < 5){
		notFound = strcmp(people[i].name, name);
		if(!notFound) displayPerson(people[i]);
		i++;
	}
	if(notFound) printf("Name not found\n");
}