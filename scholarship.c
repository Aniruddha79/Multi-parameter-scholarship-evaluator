#include <stdio.h>

int main() {
    float average, attendance;
    int extracurricular, income, age;
    int score = 0;

    printf("Scholarship Allotment System\n");

    // Input collection
    printf("Enter academic average (0–100): ");
    scanf("%f", &average);
    if (average >= 85) score++;

    printf("Enter attendance percentage (0–100): ");
    scanf("%f", &attendance);
    if (attendance >= 90) score++;

    printf("Participated in extracurricular activities? (1 = Yes, 0 = No): ");
    scanf("%d", &extracurricular);
    if (extracurricular == 1) score++;

    printf("Enter annual family income (in ₹): ");
    scanf("%d", &income);
    if (income <= 200000) score++;

    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 15) score++;

    // Output result
    printf("\nParameters fulfilled: %d\n", score);

    if (score == 5)
        printf("Scholarship Awarded: ₹50,000 (Platinum Tier)\n");
    else if (score >= 3)
        printf("Scholarship Awarded: ₹25,000 (Gold Tier)\n");
    else if (score >= 1)
        printf("Scholarship Awarded: ₹10,000 (Silver Tier)\n");
    else
        printf("Not eligible for scholarship.\n");

    return 0;
}