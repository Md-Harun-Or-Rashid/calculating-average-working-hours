#include <stdio.h>
#include <stdlib.h>

int main()
{
//arr[30] indicates 30 elements in arr.
int i,working_day=1,totalWorkingDay;
float totalWorkingHours,arr[30];
printf("The program calculates the total hours worked during specific period and the average length of a day.\nTotal working days must be less then 31 days\n");
printf("How many days:");
scanf("%d",&totalWorkingDay);
for (i=0;i<totalWorkingDay;i++){
        // to avoid the error , if statement is used ,if users put total working days more then 30 , this program will close automatically.
        if(totalWorkingDay>30)
        {
            printf("Total working days must be less then 31 days.\nPlease try again.");
            break;
        }
        else
        {
            printf("Enter the working hours for day %d:",working_day++);
            scanf("%f",&arr[i]);
            continue;

        }

}
 for (i=0;i<totalWorkingDay;i++){
         if(totalWorkingDay>30)
        {

            break;
        }
        else
        {
            totalWorkingHours=totalWorkingHours+arr[i];
            continue;

        }

}

printf("Total hours worked: %0.2f\n",totalWorkingHours);
printf("Average length of day:%0.2f\n",totalWorkingHours/totalWorkingDay);
printf("Hours entered:");

for (i=0;i<totalWorkingDay;i++){
         if(totalWorkingDay>30)
        {

            break;
        }
        else
        {
            printf(" %0.2f",arr[i]);
            continue;

        }

}
    return 0;
}

