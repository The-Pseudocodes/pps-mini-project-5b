#include<stdio.h>

int main()
{
	
		int oc,ch; int i;
		unsigned long int number; 
		char choice;
		
		do
		{

			for(i=1;i<85;i++)
	{
		printf("*");
	}
		
		printf("\nPress 1 if you are a AIRTEL user");
		printf("\nPress 2 if you are a JIO user\n");

		for(i=1;i<85;i++)
	{
		printf("*");
	}

		printf("\nEnter your Operator Code = ");
		scanf("%d",&oc);

		printf("\nEnter your 10 Digit Mobile Number = +91 ");
		scanf("%lu",&number);
		for(i=1;i<85;i++)
	{
		printf("*");
	}

		if(oc==1)
		{
			printf("\nEnter 1 for Recommended Plans");
			printf("\nEnter 2 for Unlimited Plans");
			printf("\nEnter 3 for Smart Recharge");
			printf("\nEnter 4 for Other Plans\n");
			
			for(i=1;i<85;i++)
	{
		printf("*");
	}

			printf("\nEnter Your Choice = ");
			scanf("%d",&ch);

			for(i=1;i<85;i++)
	{
		printf("*");
	}
			
			if(ch==1)
			{
				printf("\n*Recommended Plans*");

			    printf("\n\nValidity: 84 days and Talktime = 99 Rs/-");
				printf("\n(Data: 200 MB)");

				printf("\n\nValidity: 24 days = 155 Rs/-");
				printf("\n(Data: 1 GB Voice: Unlimited Local,STD SMS: 300)");

				printf("\n\nValidity: 56 days = 549 Rs/-");
				printf("\n(Data: 2 GB/Day Voice: Unlimited Local,STD SMS: 100/Day)");

				printf("\n\nValidity: 84 days = 455 Rs/-");
				printf("\n(Data: 1.5 GB/Day Voice: Unlimited Local,STD SMS: 900)\n");
				for(i=1;i<85;i++)
	{
		printf("*");
	}
			}

			else if(ch==2)
			{
				printf("\nValidity: 56 days = 549 Rs/-");
				printf("\n(Data: 2 GB/day Voice: Unlimited Calls SMS: 100/day)");

			    printf("\n\nValidity: 84 days = 719 Rs/-");
				printf("\n(Data: 1.5 GB/day Voice: Unlimited Calls SMS: 100/day)");
				printf("\nValidity: 84 days = 839 Rs/-");
				printf("\n(Data: 2 GB/day Voice: Unlimited Calls SMS: 100/day)");
				printf("\nValidity: 84 days = 999 Rs/-");
				printf("\n(Data: 2.5 GB/day Voice: Unlimited Calls SMS: 100/day with Amazon Prime for 84 days)");

				printf("\n\nValidity: 365 days = 2,999 Rs/-");
				printf("\n(Data: 2 GB/day Voice: Unlimited Calls SMS: 100/day)");
				printf("\n\nValidity: 365 days = 3,359 Rs/-");
				printf("\n(Data: 2.5 GB/day Voice: Unlimited Calls SMS: 100/day with DISNEY+HOTSTAR Annual Subscription)\n");

				for(i=1;i<85;i++)
	{
		printf("*");
	}
				
			}
			else if(ch==3)
			{
				printf("\n*Smart Recharge*");

				printf("\n\nValidity: 84 days and Talktime = 99 Rs/-");
				printf("\n(Data: 200 MB || Tarrif Calla :Local/STD/LL @ 2.5 sec)\n");
				for(i=1;i<85;i++)
	{
		printf("*");
	}
			}
			else if(ch==4)
			{
				printf("\n*Other Plans*");

				printf("\n\nValidity: NA = 10 Rs/-");
				printf("\n(Talktime: 7.47 rs)");
				printf("\n\nValidity: NA = 20 Rs/-");
				printf("\n(Talktime: 14.95 rs)");
				printf("\n\nValidity: NA = 100 Rs/-");
				printf("\n(Talktime: 81.75 rs)");
				printf("\n\nValidity: NA = 500 Rs/-");
				printf("\n(Talktime: 423.73 rs)");
				printf("\n\nValidity: NA = 1,000 Rs/-");
				printf("\n(Talktime: 847.46 rs)");
				printf("\n\nValidity: NA = 5,000 Rs/-");
				printf("\n(Talktime: 4237.29 rs)\n");
				for(i=1;i<85;i++)
	{
		printf("*");
	}
				
			}
			else 
			{
				printf("\nEnter a Valid Choice\n");
				for(i=1;i<85;i++)
	{
		printf("*");
	}
			}

		}

		else if(oc==2)
		{
			printf("\nEnter 1 for Recommended Plans");
			printf("\nEnter 2 for Smartphone Plans");
			printf("\nEnter 3 for Data add-on Plans");
			printf("\nEnter 4 for Cricket Packs");
			printf("\nEnter 5 for ISD/Roaming Plans\n");
			for(i=1;i<85;i++)
	{
		printf("*");
	}

			printf("\nEnter Your Choice = ");
			scanf("%d",&ch);
			for(i=1;i<85;i++)
	{
		printf("*");
	}

			if(ch==1)
			{
				printf("\n*Recommended Plans*");

			    printf("\n\nValidity: 84 days = 666 Rs/-");
				printf("\n(Data: 1.5 GB/day Voice: Unlimited Calls SMS: 100/day)");

				printf("\n\nValidity: 365 days = 2,999 Rs/-");
				printf("\n(DISNEY+HOTSTAR Annual Subscription Data: 2.5 GB/day Voice: Unlimited Calls SMS: 100/day)\n");
				for(i=1;i<85;i++)
	{
		printf("*");
	}
			}
			else if(ch==2)
			{
			    printf("\n*Smartphone Plans*");

				printf("\n\nValidity: 28 days = 239 Rs/-");
				printf("\n(Data: 1.5 GB/day Voice: Unlimited Calls SMS: 100/day)");
				printf("\nValidity: 28 days = 299 Rs/-");
				printf("\n(Data: 2 GB/day Voice: Unlimited Calls SMS: 100/day)");

				printf("\n\nValidity: 56 days = 479 Rs/-");
				printf("\n(Data: 1.5 GB/day Voice: Unlimited Calls SMS: 100/day)");
				printf("\nValidity: 56 days = 533 Rs/-");
				printf("\n(Data: 2 GB/day Voice: Unlimited Calls SMS: 100/day)");

			    printf("\n\nValidity: 84 days = 666 Rs/-");
				printf("\n(Data: 1.5 GB/day Voice: Unlimited Calls SMS: 100/day)");
				printf("\nValidity: 84 days = 719 Rs/-");
				printf("\n(Data: 2 GB/day Voice: Unlimited Calls SMS: 100/day)");

				printf("\n\nValidity: 336 days = 2,545 Rs/-");
				printf("\n(Data: 1.5 GB/day Voice: Unlimited Calls SMS: 100/day)");
				printf("\n\nValidity: 365 days = 2,875 Rs/-");
				printf("\n(Data: 2 GB/day Voice: Unlimited Calls SMS: 100/day)\n");
				for(i=1;i<85;i++)
	{
		printf("*");
	}
				
			}
			else if(ch==3)
			{
				printf("\n*Data add-on Plans*");

				printf("\n\nValidity: NA = 15 Rs/-");
				printf("\n(Data: 1 GB)");
				printf("\n\nValidity: NA = 25 Rs/-");
				printf("\n(Data: 2 GB)");
				printf("\n\nValidity: NA = 61 Rs/-");
				printf("\n(Data: 6 GB)\n");
				for(i=1;i<85;i++)
	{
		printf("*");
	}
			}
			else if(ch==4)
			{
				printf("\n*CRIKET Packs*");

				printf("\n\nValidity: 28 days = 499 Rs/-");
				printf("\n(DISNEY+HOTSTAR Annual Subscription Data: 2 GB/day Voice: Unlimited Calls SMS: 100/day)");
				printf("\n\nValidity: 55 days = 555 Rs/-");
				printf("\n(DISNEY+HOTSTAR Annual Subscription Data: 55 GB)");
				printf("\n\nValidity: 84 days = 1,066 Rs/-");
				printf("\n(DISNEY+HOTSTAR Annual Subscription Data: 2 GB/day+5GB Voice: Unlimited Calls SMS: 100/day)");
				printf("\n\nValidity: 365 days = 2,999 Rs/-");
				printf("\n(DISNEY+HOTSTAR Annual Subscription Data: 2.5 GB/day Voice: Unlimited Calls SMS: 100/day)\n");
				for(i=1;i<85;i++)
	{
		printf("*");
	}
			}
			else if(ch==5)
			{
				 printf("\n*ISD/Roaming Plans*");

				printf("\n\nValidity: 28 days = 1,101 Rs/-");
				printf("\n(Calling Monetary value of Rs. 933.05 and 5 ISD SMS.)");
				printf("\nValidity: 30 days = 5,751 Rs/-");
				printf("\n(1500 minutes Voice Calls 1500 SMS and Unlimited Data)\n");
				for(i=1;i<85;i++)
	{
		printf("*");
	}
			}
			else 
			{
				printf("\nEnter a Valid Choice\n");
				for(i=1;i<85;i++)
	{
		printf("*");
	}
			}
		}

		else
		{
		printf("\nEnter a Valid Operator Code\n");
		for(i=1;i<85;i++)
	{
		printf("*");
	}
		}

			printf("\n\nPress Y to check plans with other Number = ");
			scanf("%s",&ch);
			
		} while (ch=='Y' || ch=='y');
	for(i=1;i<85;i++)
	{
		printf("*");
	}
	printf("Thank You");
	for(i=1;i<85;i++)
	{
		printf("*");
	}

return 0;
};
