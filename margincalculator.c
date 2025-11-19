/* I've created this program so that I can calculate the number of classes that I can bunk while maintaining my attendance.*/
#include<stdio.h>
int main()
{
	float attended, total, required_percentage;
	
	printf("Enter the total number of classes conducted: \n");
	scanf("%f",&total);
	
	printf("Enter the number of classes attended: \n");
	scanf("%f",&attended);
	
	printf("How much attendance do you need?\nAnswer in percentage: \n");
	scanf("%f",&required_percentage);

	float current_percentage = (attended / total) * 100.0;
    printf("Current Percentage: %.2f%%\n", current_percentage);

    if (current_percentage >= required_percentage) {
        int bunked_classes = 0;
        float temp_total = total;

	while ((attended / temp_total) * 100.0 >= required_percentage) {
            bunked_classes++;
            temp_total++;
        }
	printf("You can bunk %d more classes safely.\n", bunked_classes - 1);
    }
		
	else {
        int classes_needed = 0;
        float temp_total = total;
        float temp_attended = attended;

	while ((temp_attended / temp_total) * 100.0 < required_percentage) {
            classes_needed++;
            temp_attended++;
            temp_total++;
        }
        printf("You need to attend %d more classes consecutively.\n", classes_needed);
    }
    return 0;
}

