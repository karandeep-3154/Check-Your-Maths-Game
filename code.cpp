#include <iostream> 
#include <windows.h>
#include <cmath>
#include <time.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdio>


using namespace std;

int j;
int score(0);
string FF;

int main() 
{ 
cout << endl;
while (true)
{

j=0;
score=0;


/* Introduction : */ 
	
	cout<<"Welcome To MATH QUIZ GAME! ";
	cout<<"\n\n=========================\n\nPleas enter your name : ";
	cin>>FF;
	cout<<"\n\n=========================\n\nHello "<<FF<<" !\n\n";


/* Level 1 */
     for (int Y=1 ; j!=2 && Y!=2 ; Y++)
	{
		cout << "LEVEL 1 : Adding Quiz ( YOU HAVE ONLY 5 SECONDS TO SOLVE EACH QUESTION )\n-----------------------------------------------------------------------\n\n";
		
		for ( int i=1; i<=5; i++)
		{
			srand(time(0));
			int A = rand()%10+1+10*(i-1);
			int B = rand()%10+1+10*(i-1);
			cout << "Question" << i << " ::  " << A << " + " << B << " = ";
			int numInput;
    		time_t start = time(0);
			int y=5;
    		while ( !kbhit() )
    		{
        		if (abs(time(0) - start) > 5)
				{
					j=1;
					break;
				}
    		}
    		if (j==1)
			{
				cout << "Time's Up!!";
				j=2;
 			}
			 else
			{
 				cin >> numInput;
				if ((time(0)-start)>5)
				{
					cout << "Time's Up!!";
					j=2;
				}
    			else if ( numInput == A+B ) cout << " \nGOOOOD!!!!\n\n";
    			else
				{
					cout << "\nWrong Answer!!";
					j=2;
				}
			}
			if (j==2) break;
			
			score+=10;
		}
	}
	
	
/* Level 2 */
	
		for (int Y=1 ; j!=2 && Y!=2 ; Y++)
		{
		cout << "LEVEL 2 : Subtracting Quiz ( YOU HAVE ONLY 5 SECONDS TO SOLVE EACH QUESTION )\n-----------------------------------------------------------------------\n\n";
		
		for ( int i=1; i<=5; i++)
		{
			srand(time(0));
			int A,B;
			int H = rand()%100+1;
			int K = rand()%100+1;
			if (H>=K)
			{
			 A=H;
			 B=K;
			}
			else
			{
				A=K;
				B=H;
			}
			cout << "Question" << i << " ::  " << A << " - " << B << " = ";
			int numInput;
    		time_t start = time(0);
			int y=5;
    		while ( !kbhit() )
    		{
        		if (abs(time(0) - start) > 5)
				{
					j=1;
					break;
				}
    		}
    		if (j==1)
			{
				cout << "Time's Up!!";
				j=2;
 			}
			 else
			{
 				cin >> numInput;
				if ((time(0)-start)>5)
				{
					cout << "Time's Up!!";
					j=2;
				}
    			else if ( numInput == A-B ) cout << "\n GOOOOD!!!!\n\n";
    			else
				{
					cout << "\nWrong Answer!!";
					j=2;
				}
			}
			if (j==2) break;
			
			score+=10;
		}
		}
    
    
    
   
    
/* Level 3  */
	
		for (int Y=1 ; j!=2 && Y!=2 ; Y++)
		{
		cout << "LEVEL 3 : Multiplication Quiz ( YOU HAVE ONLY 5 SECONDS TO SOLVE EACH QUESTION )\n-----------------------------------------------------------------------\n\n";
		
		for ( int i=1; i<=5; i++)
		{
			srand(time(0));
			int A = rand()%(5*i)+1;
			int B = rand()%(5*i)+1;
			cout << "Question" << i << " ::  " << A << " x " << B << " = ";
			int numInput;
    		time_t start = time(0);
			int y=5;
    		while ( !kbhit() )
    		{
        		if (abs(time(0) - start) > 5)
				{
					j=1;
					break;
				}
    		}
    		if (j==1)
			{
				cout << "Time's Up!!";
				j=2;
 			}
			 else
			{
 				cin >> numInput;
				if ((time(0)-start)>5)
				{
					cout << "Time's Up!!";
					j=2;
				}
    			else if ( numInput == A*B ) cout << "\n GOOOOD!!!!\n\n";
    			else
				{
					cout << "\nWrong Answer!!";
					j=2;
				}
			}
			if (j==2) break;
			
			score+=10;
		}
		}
	
	
	
/* Level 4  */
	for (int Y=1 ; j!=2 && Y!=2 ; Y++)
	{
	
	
		cout << "LEVEL 4 : FINAL QUESTION ( 10 SECONDS TO SOLVE!!!!! )\n-----------------------------------------------------------------------\n\n";
		
			srand(time(0));
			int A = rand()%(10)+6;
			cout << "Final Question" << " ::  " << A << " + " << A << " x " << A << " = ";
			int numInput;
    		time_t start = time(0);
			int y=5;
    		while ( !kbhit() )
    		{
        		if (abs(time(0) - start) > 10)
				{
					j=1;
					break;
				}
    		}
    		if (j==1)
			{
				cout << "Time's Up!!";
				j=2;
 			}
			 else
			{
 				cin >> numInput;
				if ((time(0)-start)>10)
				{
					cout << "Time's Up!!";
					j=2;
				}
    			else if ( numInput == A+A*A ) cout << " \n GOOOOD!!!!\n\n";
    			else
				{
					cout << "\n Wrong Answer!!";
					j=2;
				}
			}
			if (j==2) break;
			
			score+=10;
	}
	
/* Game Over */

	if (j==2)
			{
				cout << "\n\nGAME OVER!!!!!\n"<<FF<<", Your Score (( " << score << " ))\n\n";
			}


cout << "\n\nPRESS ( ENTER ) TO PLAY AGAIN!";
while (true)
{
	if ( kbhit() )
	{
		cout << "\r";
		break;
	}
}
}

return 0;
}

