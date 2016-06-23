class User{
private:
	int age;
	int score;
public:
	User(int age=0, int score=100);
	~User();
	void setAge(int age=0);
	int getAge();
    //虚函数顺序必须和so中的保持一致方可正确的调用
    virtual void setScore(int score);
	virtual int getScore();
};