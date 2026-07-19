#ifndef COURSE_RESULT_H
#define COURSE_RESULT_H

#include "course.h"

typedef struct {
    Course *course;
    double marks;
    int completed;
} CourseResult;

CourseResult createCompletedCourseResult(Course *course, double marks);
CourseResult createIncompleteCourseResult(Course *course);
void viewCourseResult(CourseResult result);

#endif