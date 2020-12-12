#include <stdio.h>
int main()
{
  //Round Robin Scheduling
  int num, i;
  int Quantum_Time;
  int count=0;
  int temp=0, temp2=0;
  int Burst_Time[10];
  int Waiting_Time[10];
  int Turn_Around_Time[10];
  int Remaining_Burst_Time[10];
  float Avg_Waiting_Time=0.0;
  float Avg_Turnaround_Time=0.0;

  printf("Enter num of process");
  scanf("%d",&num);

  printf("Enter Burst Time of process");
  for(i=0;i<num;i++)
  {
      scanf("%d",&Burst_Time[i]);

      Remaining_Burst_Time[i] = Burst_Time[i];
  }

  printf("Enter Quantum Time");
  scanf("%d",&Quantum_Time);
  while(1)                          //using "while loop"
  {
      for(i=0,count=0;i<num;i++)
      {
          temp = Quantum_Time;
              if(Remaining_Burst_Time[i] == 0)
              {
                count++;
                continue;
              }
              {
              if(Remaining_Burst_Time[i] > Quantum_Time)
              {
                Remaining_Burst_Time[i] = (Remaining_Burst_Time[i] - Quantum_Time);
              }
              else
                if(Remaining_Burst_Time[i] >= 0)
                  {
                    temp = Remaining_Burst_Time[i];
                    Remaining_Burst_Time[i] = 0;
                  }
                  temp2 = Burst_Time[i-1] + temp;
                  Turn_Around_Time[i] = temp2;
                }
      }
        if (num==count)
          break;

  }
    printf("\nprocess\tBurst Time\tTurn Around Time\tWaiting Time\n");
    for(i=0;i<num;i++)
    {
      Waiting_Time[i] = Turn_Around_Time[i] - Burst_Time[i];
      Avg_Waiting_Time = Avg_Waiting_Time + Waiting_Time[i];
      Avg_Turnaround_Time = Avg_Turnaround_Time + Turn_Around_Time[i];

        printf("\n%d\t%d\t\t%d\t\t\t%d",i+1,Burst_Time[i],Turn_Around_Time[i],Waiting_Time[i]);
    }
      Avg_Waiting_Time = Avg_Waiting_Time/num;
      Avg_Turnaround_Time = Avg_Turnaround_Time/num;

      printf("\nAvg Waiting Time= %f\n",Avg_Waiting_Time);
      printf("Avg Turnaround Time= %f",Avg_Turnaround_Time);

  return 0;
}
