
class Singleton
{
private:
	static Singleton instance;
	Singleton(){}

public:
	static Singleton getInstance()
	{
		if (!instance)
		{
			instance = new Singleton;
		}
		return instance;
	}
	//...
	//...
	//...
};


int main()
{
	Singleton.getInstance()
}