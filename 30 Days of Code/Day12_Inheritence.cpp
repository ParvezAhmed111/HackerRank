class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        Student(string firstName, string lastName, int id, std::vector<int>& scores)
            : Person(firstName,lastName,id), testScores(scores) {}
        
        char calculate(){
            int a=0;
            char grade;
            for(auto i: testScores){
                a+=i;
            }
            a=a/testScores.size();
            
            if(a>=90 && a<=100) grade='O';
            else if(a>=80 && a<=90) grade='E';
            else if(a>=70 && a<=80) grade='A';
            else if(a>=55 && a<=70) grade='P';
            else if(a>=40 && a<=55) grade='D';
            else grade='T';
            
            return grade;
        }
};
