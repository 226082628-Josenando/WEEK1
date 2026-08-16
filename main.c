#include <stdio.h>
#include <string.h>

int main() {
    char municipalityName[100];
    char mayorName[100];
    long population;

    // 1. Display the system title
    printf("=====================================================\n");
    printf("        MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("=====================================================\n\n");

    // 2. Welcome message
    printf("Welcome to Windhoek Municipality\n\n");

    // 3. Prompt the user for input
    printf("Please enter the following details:\n");
    printf("-----------------------------------------------------\n");

    printf("Municipality Name: ");
    fgets(municipalityName, sizeof(municipalityName), stdin);
    municipalityName[strcspn(municipalityName, "\n")] = '\0'; // remove newline

    printf("Mayor's Name: ");
    fgets(mayorName, sizeof(mayorName), stdin);
    mayorName[strcspn(mayorName, "\n")] = '\0'; // remove newline

    printf("Population: ");
    scanf("%ld", &population);

    // 4. Display captured information in a formatted report
    printf("\n=====================================================\n");
    printf("               MUNICIPAL INFORMATION REPORT\n");
    printf("=====================================================\n");
    printf("%-25s: %s\n", "Municipality Name", municipalityName);
    printf("%-25s: %s\n", "Mayor's Name", mayorName);
    printf("%-25s: %ld\n", "Population", population);
    printf("=====================================================\n");

    return 0;
}