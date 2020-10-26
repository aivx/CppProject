#include "Class_List1.h"
#include <stdio.h>

class Deq_List_One : public List_One //double side queue  aka DEQ
{ protected:
	int ID = 0;
	static int counter;
	public:
		//constructors
		Deq_List_One(void):List_One(){
			ID = counter;
			printf("Default Deq_List_One %d constructor!!!\n",ID);
			counter++;
		};
		Deq_List_One(int N):List_One(N){
			ID = counter;
			printf("Hand made Deq_List_One %d constructor!!!\n",ID);
			counter++;
		};
		Deq_List_One(int N,int Diapazon,int Shift):List_One(N,Diapazon,Shift){
			ID = counter;
			printf("Random made Deq_List_One %d constructor!!!\n",ID);
			counter++;
		};
		//destructor
		~Deq_List_One(){
			printf("Deq_List_One %d destructor!!!\n",ID);
			counter--;
		}
		
		//deq oriented methods
		void Push_Left(int N){
			Insert(N,1);
		}
		void Push_Right(int N){
			Append(N);
		}
		int Pop_Left(void){
			int tmp; 
			tmp=GetValue(1);Erase(1);
			return tmp;
		}
		int Pop_Right(void){
			int tmp; 
			tmp=GetValue(ListLength());
			Erase(ListLength());
			return tmp;
		}		
		void Print(void);	
};

int Deq_List_One::counter = 0;

void Deq_List_One::Print(void)
{
	int tmp,Count,Num=ListLength();
	if(Empty()){
		printf("Deq %d is Empty!!!\n",ID); return;
	}
	for(Count=1; Count<=Num; Count++)
	{
		tmp=Pop_Left();printf("%d ",tmp);
		Push_Right(tmp);
	}
	printf("\n");
}


