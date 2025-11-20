#include <stdio.h>

struct Date {
    int dd;
    int mm;
    int yyyy;
};

int compare(struct Date d1, struct Date d2) {

    if (d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd == d2.dd)
        return 0;    // same date

    if (d1.yyyy < d2.yyyy) return -1;
    if (d1.yyyy > d2.yyyy) return 1;

    if (d1.mm < d2.mm) return -1;
    if (d1.mm > d2.mm) return 1;

    if (d1.dd < d2.dd) return -1;
    return 1;
}

int main() {
    struct Date d1, d2;

    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &d1.dd, &d1.mm, &d1.yyyy);

    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &d2.dd, &d2.mm, &d2.yyyy);

    int result = compare(d1, d2);

    if (result == 0)
        printf("Both dates are equal.\n");
    else if (result == -1)
        printf("First date is earlier than second.\n");
    else
        printf("First date is later than second.\n");

    return 0;
}
