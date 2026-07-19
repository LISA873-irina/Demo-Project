#include <stdio.h>
#include "course.h"
#include "courseResult.h"

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

    for (int i = 0; i < n_courses; i++)
    {
        viewCourseResult(results[i]);
    }

    return 0;
}