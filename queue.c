#include<stdio.h>
int en_queue(int queue[],int rear,int n)
{
       if(rear>=n-1)
       {
         printf(" queue overflow \n");
         }
         else
        {
        int item;
        rear++;
        printf("Enter item to be inserted: ");
        scanf("%d",& item);
        queue[rear]=item;
        }
        return rear;
        }
        
        int de_queue( int queue[],int front,int rear)
        {
        if(front>rear)
        {
        printf("Queue underflow \n");
        }
        else
        {
           int item=queue[front];
          printf("Deleted item is: %d\n", item);
          front++;
          }
          return front;
          }
          
         void display(int queue[], int front, int rear)
             {
               if(front>rear)
               {
                   printf("queue is empty. \n");
                   }
                   else
                   {
                   
                      printf("The queue is :\n");
                      for(int i=front;i<=rear; i++)
                      {
                          printf("%d \t",queue[i]);
                          }
                          
                          }
                          }
                          int main()
                          {
                            int n, option;
                            int front=0;
                            int rear=-1;
                            char ch='y';
                            printf("Enter size of the queue:");
                            scanf("%d",&n);
                            int queue[n];
                            do
                            {
                              printf("****QUEUE OPERATIONS****");
                              printf("\n 1. ENQUEUE");
                              printf("\n 2. DEQUEUE");
                              printf("\n 3. DISPLAY");
                              printf("Enter your choice: ");
                              scanf("%d", &option);
                              switch(option)
                              {
                                 case 1:
                                     rear = en_queue( queue, rear,n);
                                     break;
                                 case 2:
                                     front= de_queue( queue, front,rear);
                                     break;
                                 case 3:
                                     display(queue, front,rear);
                                     break;
                                 default:
                                     printf("\n Invalid option \n");
                                     
                                     }
                                     
                                     printf("\n Do you want to continue(Y/N):");
                                     getchar();
                                     scanf("%c",&ch);
                                     }
                                     while(ch=='y'||ch=='Y');
                                     printf("\n EXITING \n");
                                     return 0;
                                     }
                              
