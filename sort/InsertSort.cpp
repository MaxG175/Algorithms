# include <iostream>

class InsertSort{
private:
	int* Array = NULL;
	int size = 0;
public:
	InsertSort(int);
	void PrintSequence();
	void Sorting();
	void ScanfSequence();
};

int main(){
	InsertSort* sort = new InsertSort(10);
	sort->ScanfSequence();
	sort->PrintSequence();
	sort->Sorting();
	sort->PrintSequence();

}

InsertSort::InsertSort(int N){
	this->Array = new int[N];
	for(int i = 0;i<N;i++)
		*(Array+i)=0;
	this->size=N;
}

void InsertSort::ScanfSequence(){
	for(int i=0;i<this->size;i++){
		std::cin>>*(Array+i);
	}
}

void InsertSort::PrintSequence(){
	for(int i=0;i<this->size;i++){
		std::cout<<*(Array+i)<<" ";
	}
	std::cout<<"\n";
}

void InsertSort::Sorting(){
	for(int j=1;j<this->size;j++){
		int key=*(Array+j);
		int i=j-1;

		while(i>=0 && key<*(Array+i)){
			*(Array+i+1)=*(Array+i);
			i--;
		}

		*(Array+i+1)=key;

	}
}
