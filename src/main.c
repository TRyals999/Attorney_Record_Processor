// Tyler Ryals <N00930741@students.ncc.edu>
// CSC 217 JA
// Project 3
// Due 2025-11-17 11:59 pm
#include "lawyer.h"

// Comparison function for qsort
int compareLawyers(const void *a, const void *b) {
    const Lawyer *l1 = *(const Lawyer **)a;
    const Lawyer *l2 = *(const Lawyer **)b;

    int lastCmp = strcmp(l1->lastName, l2->lastName);
    if (lastCmp != 0) return lastCmp;

    return strcmp(l1->firstName, l2->firstName);
}

int main(int argc, char *argv[]) {
    Lawyer *lawyers[1000];
    int count = 0; // counter for the index of the lawyers array
    int nextId = 741;

    char first[100], last[100]; 
    double hrs;
    
    int lastNameFirst = 0;
    int sortByName = 0;

/** 
checks if you -l is i the command line to see what format to output
checks that there are more than 1 argument in the command line
and compares the second argument on the line (index 1) to -l
we choose to use -l, if we input -1 then we output in last first format
if the string compare equals 0 that means they are the same and does the same -s
*/
    for (int i = 1; i < argc; i++) {
        if (argv[i][0] == '-') {
            for (int j = 1; argv[i][j] != '\0'; j++) {
                if (argv[i][j] == 'l') {
                    lastNameFirst = 1;
                } else if (argv[i][j] == 's') {
                    sortByName = 1;
                }
            }
        }
    }

    while (scanf("%s %s %lf", first, last, &hrs) == 3) {
        // check if lawyer already exists
        int found = -1;
        for (int i = 0; i < count; i++) {
            if (strcmp(lawyers[i]->firstName, first) == 0 &&
                strcmp(lawyers[i]->lastName, last) == 0) {
                found = i;
                break;
            }
        }

        if (found >= 0) {
            addHours(lawyers[found], hrs);
        } else {
            lawyers[count] = createLawyer(first, last, nextId++, 0.0);
            addHours(lawyers[count], hrs);
            count++;
        }
    }
    if (sortByName) {
        qsort(lawyers, count, sizeof(Lawyer *), compareLawyers);
    }

    // Print results
    for (int i = 0; i < count; i++) {
        if (lastNameFirst) {
            printLawyerLastFirst(lawyers[i]);
        } else {
            printLawyer(lawyers[i]);
        }
        freeLawyer(lawyers[i]);
    }

    return 0;
}
