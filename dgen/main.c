/*
  Copyright (c) 2026 lulboi30
  SPDX-License-Identifier: MIT
*/

#define _POSIX_C_SOURCE 199309L

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  struct timespec ts;
  clock_gettime(CLOCK_MONOTONIC, &ts);
  srand(ts.tv_nsec);

  char *contracts[] = {
    "Food",
    "Air",
    "Touch",
    "Water"
  };

  char *symptoms[] = {
    "Coughing",
    "Rashes",
    "Dizziness",
    "Insomnia",
    "Vomiting",
    "Chest Pain",
    "Fatigue",
    "Fever",
    "Hallucinations",
    "Memory Loss",
    "Sneezing",
    "Paralysis"
  };

  char *levels[] = {
    "Slight",
    "Mild",
    "Moderate",
    "Severe"
  };
  
  char major[4] = {
    (rand() % 26) + 'A',
    (rand() % 26) + 'A',
    (rand() % 26) + 'A',
    '\0'
  };

  unsigned int minor = rand();

  printf("%s-%x\n", major, minor);

  int stats[3] = {
    (rand() % 100) + 1,
    (rand() % 100) + 1,
    (rand() % 100) + 1
  };

  printf("Strength: %%%i\n", stats[0]);
  printf("Transferability: %%%i\n", stats[1]);
  printf("Complexity: %%%i\n", stats[2]);
  printf("Contraction: %s\n", contracts[(rand() % 4)]);
  puts("Symptoms:");

  for (int i = 0; i < (rand() % 12); i++) {
    printf("\t%s %s\n", levels[(rand() % 4)], symptoms[(rand() % 12)]);
  }
}
