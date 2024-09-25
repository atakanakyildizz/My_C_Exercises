cmake_minimum_required(VERSION 3.29)
project(My_C_Exercises C)

set(CMAKE_C_STANDARD 11)

add_executable(My_C_Exercises
    exercise_2_1/exercise_2_1.c
        exercise_2_2/exercise_2_2.c)

add_executable(exercise_2_2 exercise_2_2/exercise_2_2.c)
add_executable(single_file_exe exercise_2_2/exercise_2_2.c)
add_executable(exercise_2_1 exercise_2_1/exercise_2_1.c)
add_executable(exercise_2_4 exercise_2_4/exercise_2_4.c)
add_executable(exercise_2_3 exercise_2_3/exercise_2_3.c)
add_executable(exercise_2_5 exercise_2_5/exercise_2_5.c)
add_executable(exercise_2_6 exercise_2_6/exercise_2_6.c)
add_executable(exercise_5_1 exercise_5_1/exercise_5_1.c)