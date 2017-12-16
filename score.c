/*
 * score.c
 *
 *  Created on: Feb 6, 2017
 *      Author: popescumarius
 */

#include<stdio.h>
#include<string.h>

struct student
{
	char name[15];
	int midterm1;
	int midterm2;
};

int  readData()
{
	FILE *file;
	char line[80];
	file = fopen("scores.txt", "rt");
	if (file == 0)
	{
	printf("Cannot open file\n");
	exit(1);
	}
	while(fgets(line,80,file))
	{
	printf("%s", line);
	}
	fclose(file);
	return line;
}

void saveAverageToFile()
{
	double average;
//	average = (students.midterm1 + students.midterm2)/2;
	FILE *file;
	file = fopen("avg.txt", "wt");
	fprintf(file, "This is junk\n");
	fclose(file);
}
int main()
{
	struct student students[100];
	int count = readData(&students);
	saveAverageToFile(students, count);
	printf("%d students...\n", count);
	return 0;
}
