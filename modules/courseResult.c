#include <stdio.h>
#include "courseResult.h"

CourseResult createCourseResult(Course *course, double marks)
{
    CourseResult result;
    result.course = course;
    result.marks = marks;

    return result;
}

void viewCourseResult(CourseResult result)
{
    printf("Code: %s\n", result.course->code);
    printf("Name: %s\n", result.course->name);
    printf("Credit: %.1f\n", result.course->credit);
    printf("Marks: %.2f\n", result.marks);
}