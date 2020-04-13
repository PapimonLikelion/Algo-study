#include<iostream>
#include<algorithm>
using namespace std;

class Student{
private:
	string name;
	int score;
public:
	Student(string sName, int sScore) : name(sName), score(sScore){	}
	//smaller comes first
	bool operator < (Student &student){
		return this->score < student.score;
	}
	
	string print_student(){
		return this->name;
	}
};

int main()
{
	Student students[] {
		Student("Joel",100),
		Student("Chris",70),
		Student("Adam",80),
		Student("Bach",90),
		Student("Tildy",60),
	};
	
	sort(students, students+5);
	
	for(int i=0; i<5; i++)
		cout<<students[i].print_student()<<" ";
	
	return 0;
}
