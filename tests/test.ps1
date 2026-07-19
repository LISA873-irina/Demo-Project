gcc -Imodules modules/course.c modules/courseResult.c tests/test_course.c -o tests/test_course.exe
.\tests\test_course.exe

gcc -Imodules modules/course.c modules/courseResult.c tests/test_course_result.c -o tests/test_course_result.exe
.\tests\test_course_result.exe

gcc -Imodules modules/course.c modules/courseResult.c modules/gpa.c tests/test_gpa.c -o tests/test_gpa.exe
.\tests\test_gpa.exe