class User{
private:
	int age;
	int score;
public:
	User(int age=0, int score=100);
	~User();
	void setAge(int age=0);
	int getAge();
	virtual void setScore(int score = 0);
	virtual int getScore();
};