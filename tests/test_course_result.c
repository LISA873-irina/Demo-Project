#include <stdio.h>
#include "course.h"
#include "courseResult.h"

int testResultCourse()
{
    Course course = createCourse("CSE4202", "Structured Programming II", 3.0);
    CourseResult result = createCourseResult(&course, 77);
    return result.course == &course;
}

int testResultMarks()
{
    Course course = createCourse("CSE4202", "Structured Programming II", 3.0);
    CourseResult result = createCourseResult(&course, 77);
    return result.marks == 77;
}

int main()
{
    int total = 0, passed = 0;

    total++;
    if (testResultCourse()) passed++;

    total++;
    if (testResultMarks()) passed++;

    printf("Course result module tests\n");
    printf("Passed %d/%d tests\n", passed, total);

    return 0;
}