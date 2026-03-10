#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1;  
    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s\n", s1.name);
    printf("Roll Number: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
