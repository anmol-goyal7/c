#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void input(struct Student *s, int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &s[i].roll);
        scanf("%s", s[i].name);
        scanf("%f", &s[i].marks);
    }
}

float average(struct Student *s, int n) {
    float sum = 0;
    for (int i = 0; i < n; i++)
        sum += s[i].marks;
    return sum / n;
}

struct Student highest(struct Student *s, int n) {
    int idx = 0;
    for (int i = 1; i < n; i++)
        if (s[i].marks > s[idx].marks)
            idx = i;
    return s[idx];
}

int main() {
    struct Student s[5];
    input(s, 5);

    struct Student top = highest(s, 5);
    float avg = average(s, 5);

    printf("%d %s %.2f\n", top.roll, top.name, top.marks);
    printf("%.2f\n", avg);

    return 0;
}

