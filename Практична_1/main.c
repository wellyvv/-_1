#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

double time_to_eat_pie(int t1, int t2, int t3) {
	
	double total_speed = (1.0 / t1) + (1.0 / t2) + (1.0 / t3);


	double total_time = 1.0 / total_speed;

	return total_time;
}
int main() {
	int t1, t2, t3;
	setlocale(LC_ALL, "Ukr");

	printf("Введiть t1, t2, t3: ");
	scanf("%d %d %d", &t1, &t2, &t3);


	double result = time_to_eat_pie(t1, t2, t3);
	printf("Час, необхiдний для з'їдання пирога: %.2f годин\n", result);

	return 0;
}