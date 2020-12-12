#include <stdio.h>
struct process
{
  int process, Burst_Time, Turn_Around_Time, Waiting_Time;
};  int main()
    {
      struct process x[10],p[30];
      int i,j,k,total=0,m,n;
      float Waiting_Time=0.0,totaltime=0.0,a1,a2;

      printf("\nEnter the number of Process:\t");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
        x[i].process=i;
        printf("\nEnter the Burst_Time:\t" );
        scanf("%d",&x[i].Burst_Time );
        total=total+ x[i].Burst_Time;
      }
      printf("\nTotal Burst_Time:\t%d",total );
      p[0].Turn_Around_Time=0;
      k=1;
      printf("\nEnter the Time Slice:\t" );
      scanf("%d",&m );
      for ( j = 1; j <= total; j++)
       {
        for(i=1;i<=n;i++)
        {
          if (x[i].Burst_Time!=0)
          {
            p[k].process=i;
            if(x[i].Burst_Time-m<0)
            {
              p[k].Waiting_Time=p[k-1].Turn_Around_Time;
              p[k].Burst_Time=x[i].Burst_Time;
              p[k].Turn_Around_Time=p[k].Waiting_Time+x[i].Burst_Time;
              x[i].Burst_Time=0;
              k++;
            }
            else
            {
              p[k].Waiting_Time=p[k-1].Turn_Around_Time;
              p[k].Turn_Around_Time=p[k].Waiting_Time+m;
              x[i].Burst_Time=x[i].Burst_Time-m;
              k++;
            }
          }
        }
      }
      printf("\nProcess ID \tWaiting_Time \tTurn_Around_Time");
      for(i=1;i<=k;i++)
      {
        printf("\n\t%d \t%d \t%d",p[i].process,p[i].Waiting_Time,p[i].Turn_Around_Time );
        Waiting_Time=Waiting_Time+p[i].Waiting_Time;
        totaltime=totaltime+p[i].Turn_Around_Time;
        a1=Waiting_Time/n;
        a2=totaltime/n;

      }
      printf("\n\n Avg_Waiting_Time:\t%f",a1 );
      printf("\n\n Avg_Turnaround_Time:\t%f",a2 );
      return 0;
    }
