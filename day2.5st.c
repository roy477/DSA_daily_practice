#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_SIZE 50
#define ID_SIZE 20

typedef struct {
    char id[ID_SIZE];
    char name[NAME_SIZE];
    float gpa;
    int age;
} Student;

Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Database is full!\n");
        return;
    }
    
    printf("\nEnter Student ID: ");
    scanf("%s", students[studentCount].id);
    printf("Enter Student Name: ");
    scanf("%s", students[studentCount].name);
    printf("Enter Student Age: ");
    scanf("%d", &students[studentCount].age);
    printf("Enter Student GPA: ");
    scanf("%f", &students[studentCount].gpa);
    
    studentCount++;
    printf("Student added successfully!\n");
}

void displayStudent(char *id) {
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].id, id) == 0) {
            printf("\n--- Student Details ---\n");
            printf("ID: %s\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("GPA: %.2f\n", students[i].gpa);
            return;
        }
    }
    printf("Student not found!\n");
}

int main() {
    int choice;
    char searchId[ID_SIZE];
    
    while (1) {
        printf("\n1. Add Student\n2. Search Student\n3. Exit\nChoice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                printf("Enter Student ID to search: ");
                scanf("%s", searchId);
                displayStudent(searchId);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}