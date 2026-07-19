#include <stdio.h>
#include "course.h"
#include "courseResult.h"
#include "gpa.h"

int main()
{
    Course courses[3];
    CourseResult results[3];
    int n_courses = 0;

    courses[n_courses++] = createCourse("CSE4107", "Structured Programming I", 3.0);
    courses[n_courses++] = createCourse("CSE4108", "Structured Programming I Lab", 1.5);
    courses[n_courses++] = createCourse("CSE4203", "Discrete Mathematics", 3.0);

    for (int i = 0; i < n_courses; i++)
    {
        double marks;
        printf("Marks for %s: ", courses[i].name);
        scanf("%lf", &marks);
        results[i] = createCourseResult(&courses[i], marks);
    }

    printf("\nResults\n");
    for (int i = 0; i < n_courses; i++)
    {
        printf("%s: %s (credit: %.1f)\n", courses[i].code, courses[i].name, courses[i].credit);
        printf("Marks: %.2f\n", results[i].marks);
        printf("Grade: %s\n", getLetterGrade(results[i]));
    }

    double cgpa = calculateGPA(results, n_courses);
    printf("CGPA: %.2f\n", cgpa);

    return 0;
}