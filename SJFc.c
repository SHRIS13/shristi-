#include<stdio.h>
#define max 50
int main()
{
                          //SJF SCHEDULING WITH Arrival Time=0
        int i,j,num;
        int temp;
        int Process[max];
        int Burst_Time[max];
        int Waiting_Time[max];
        int Turn_Around_Time[max];
        float Avg_Waiting_Time=0;
        float Avg_Turn_Around_Time=0;

        printf("Enter the number of Process");
        scanf("%d",&num);

        printf("Enter the Process number");
          for(i=0;i<num;i++)
          {
            scanf("%d",&Process[i]);
          }

        printf("Enter the Burst Time of the Process");
          for(i=0;i<num;i++)
          {
            scanf("%d",&Burst_Time[i]);
          }

          for(i=0;i<num;i++)
          {
            for(j = 0;j < (num-i) ;j++)
            {
              if(Burst_Time[j] > Burst_Time[j+1])
              {
                temp = Burst_Time[j];
                Burst_Time[j] = Burst_Time[j+1];
                Burst_Time[j+1] = temp;

                temp = Process[j];
                Process[j] =  Process[j+1];
                Process[j+1] = temp;
              }
            }
          }
        printf("Process \t Burst Time \t Waiting Time \t Turn_Around_Time\n");
          for(i=0;i<num;i++)
          {
            Waiting_Time[i] = 0;
            Turn_Around_Time[i] = 0;

            for(j=0;j<i;j++)
            {
              Waiting_Time[i] = (Waiting_Time[i] + Burst_Time[i]);
            }
            Turn_Around_Time[i]= (Waiting_Time[i] + Burst_Time[i]);
            Avg_Waiting_Time = (Avg_Waiting_Time + Waiting_Time[i]);
            Avg_Turn_Around_Time = (Avg_Turn_Around_Time + Turn_Around_Time[i]);

            printf("%d\t\t %d\t\t %d\t\t %d\n", Process[i], Burst_Time[i], Waiting_Time[i], Turn_Around_Time[i]);
          }
          Avg_Waiting_Time = (Avg_Waiting_Time/num);
          Avg_Turn_Around_Time = (Avg_Turn_Around_Time/num);

          printf("Average Waiting Time = %f\n", Avg_Waiting_Time);
          printf("Average Turn Around Time = %f", Avg_Turn_Around_Time);
          return 0;
}
