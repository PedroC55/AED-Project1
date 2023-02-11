#
# Tomás Oliveira e Silva, AED, November 2021
#
# makefile to compile the A.01 assignment
#

STUDENT_H_FILE=000000.h

clean:
	rm -fv a.out
	rm -fv subset_sum_problem solution_subset_sum_problem *.pdf


subset_sum_problem:	subset_sum_problem.c $(STUDENT_H_FILE)
	cc -Wall -O2 -DSTUDENT_H_FILE=\"$(STUDENT_H_FILE)\" subset_sum_problem.c -o subset_sum_problem

solution_subset_sum_problem:	solution_subset_sum_problem.c $(STUDENT_H_FILE)
	cc -Wall -O2 -DSTUDENT_H_FILE=\"$(STUDENT_H_FILE)\" solution_subset_sum_problem.c -o solution_subset_sum_problem
