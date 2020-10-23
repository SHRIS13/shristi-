#include <stdio.h>
#define max 50
int main()
{
                          //FCFS SCHEDULING WITH Arrival Time=0
    int i,j,num;
    int Burst_Time[max];
    int Waiting_Time[max];
    int Turn_Around_Time[max];
    float Avg_Waiting_Time=0;
    float Avg_Turn_Around_Time=0;


    printf("Enter the number of processes");
    scanf("%d",&num);

    printf("Enter the Burst Time of the processes");
      for(i=0;i<num;i++)
        {
          scanf("%d",Burst_Time[i]);
        }
    printf("Process\t Burst Time\t Waiting Time\t Turn Around Time\n");
    for(i=0;i<num;i++)
      {
        Waiting_Time[i]=0;
        Turn_Around_Time[i]=0;
          for(j=0;j<i;j++)
            {
              Waiting_Time[i] = (Waiting_Time[i] + Burst_Time[i]);
            }
          Turn_Around_Time[i] = (Waiting_Time[i] + Burst_Time[j]);
          Avg_Waiting_Time = (Avg_Waiting_Time + Waiting_Time[i]);
          Avg_Turn_Around_Time = (Avg_Turn_Around_Time + Turn_Around_Time[i]);

          printf("%d\t%d\t\t%d\t\t%d\n",i+1,Burst_Time[i],Waiting_Time[i],Turn_Around_Time[i]);
      }
        Avg_Waiting_Time = Avg_Waiting_Time/num ;
        Avg_Turn_Around_Time =Avg_Turn_Around_Time/num ;

        printf("Avg_Waiting_Time=%f\n", Avg_Waiting_Time );
        printf("Avg_Turn_Around_Time%f\n", Avg_Turn_Around_Time );


    return 0;
}
