#include <stdio.h>
#include "modules/course.h"

int main()
{
    printf("In IUT, CGPA Matters!\n");

    Course course1 = createCourse("CSE4202", "Structured Programming II", 3.0);
    viewCourse(course1);

    return 0;
}
