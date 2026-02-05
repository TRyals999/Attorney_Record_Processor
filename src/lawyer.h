
// Tyler Ryals <N00930741@students.ncc.edu>
// CSC 217 JA
// Project 3
// Due 2025-11-17 11:59 pm
#ifndef LAWYER_H
#define LAWYER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/** 
create the lawyer data type using a struct
includes pointers for firstName, lastName, id, and hours
*/
typedef struct{ 
char *firstName; 
char *lastName;
int id;
double hours;
} Lawyer;

// Function Prototypes

/**
createLawyer
Create a new Lawyer Record
Allocates memory and initializes fields
*/
Lawyer *createLawyer(const char *first, const char *last, int id, double hours);

/**
addHours
Adds hours to a Lawyers record
*/
void addHours(Lawyer *lawyer, double hrs);

/** 
printLawyer
Prints a Lawyer record in the format “First Last (ID): hours”
*/
void printLawyer(const Lawyer *lawyer);

/**
printLawyerLastFirst
Prints a lawyer in the format “ Last, First (ID): hours”
*/
void printLawyerLastFirst(const Lawyer *lawyer);

/**
freeLawyer
Free the memory that is allocated for a Lawyers record.
*/
void freeLawyer(Lawyer *lawyer);

#endif 





 

