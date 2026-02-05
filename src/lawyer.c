// Tyler Ryals <N00930741@students.ncc.edu>
// CSC 217 JA
// Project 3
// Due 2025-11-17 11:59 pm
#include "lawyer.h"

Lawyer *createLawyer(const char *firstName, const char *lastName, int id, double hours) {
    Lawyer *l = malloc(sizeof(Lawyer));
    l->firstName = strdup(firstName);
    l->lastName = strdup(lastName);
    l->id = id;
    l->hours = hours;
    return l;
}


/**
addHours
Adds hours to a Lawyers record
*/
void addHours(Lawyer *lawyer, double hrs){
lawyer -> hours += hrs;
}
/** 
printLawyer
Prints a Lawyer record in the format “First Last (ID): hours”
*/
void printLawyer(const Lawyer *lawyer){
printf("%s %s (%d): %.2f hours \n",
    lawyer -> firstName, lawyer -> lastName, lawyer -> id, lawyer -> hours);
}
/**
printLawyerLastFirst
Prints a lawyer in the format “ Last, First (ID): hours”
*/
void printLawyerLastFirst(const Lawyer *lawyer){
printf("%s, %s (%d): %.2f hours \n", 
    lawyer -> lastName, lawyer -> firstName, lawyer -> id, lawyer -> hours);
}
/**
freeLawyer
Free the memory that is allocated for a Lawyers record.
*/
void freeLawyer(Lawyer *lawyer){
if(lawyer) {
	free(lawyer -> firstName); 
	free(lawyer -> lastName);
	free(lawyer);
     }
}
