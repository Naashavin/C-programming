#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Benefits {
    float healthInsurance;
    float retirementPlan;
    int paidLeave;
};
struct Employee {
    char name[50];
    char finisher[50];
    int id;
    struct Benefits benefits;
};

int main() {
    const int numEmployees = 5;

    struct Employee employees[]  =
    {
        {"John Cena", "AA", 1, {500, 200, 20}}, 
        {"Rey Mysterio", "619", 2, {500, 200, 20}}, 
        {"Undertaker", "TOMBSTONE PILDRIVER", 3, {500, 200, 20}}, 
        {"Daniel Bryan", "RUNNING KNEE", 4, {500, 200, 20}}, 
        {"AJ Styles", "STYLES CLASH", 5, {500, 200, 20}} 
    };
    
    printf("\nWWE wrestlers Details:\n");
    int i;
    for ( i = 0; i < numEmployees; i++) 
    {
        printf("\nWrestler %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Finisher: %s\n", employees[i].finisher);
        printf("ID: %d\n", employees[i].id);
        printf("Health Insurance Benefit: $%.2f\n", employees[i].benefits.healthInsurance);
        printf("Retirement Plan Benefit: $%.2f\n", employees[i].benefits.retirementPlan);
        printf("Paid Leave: %d days\n", employees[i].benefits.paidLeave);
        printf("\n************************************************************************************************************************\n");
    }
    
    printf("\nTHEN****NOW****FOREVER****TOGETHER\n");
     
    return 0;
}


