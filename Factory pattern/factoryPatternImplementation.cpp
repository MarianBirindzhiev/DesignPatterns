#include <iostream>

class IAnimal
{
public:
	virtual void type() const = 0;
};
class Duck :IAnimal
{
public:
	void type() override
	{
		std::cout<<"duck";
	}
};
class Cat :IAnimal
{
public:
	void type() override
	{
		std::cout << "cat";
	}
};

class AnimalFactory
{
public:
	virtual IAnimal* animalCreation(int somePar, double otherPar)
	{
		return 1;
	}
};
class RandomAnimalFactory :AnimalFactory
{
public:
	IAnimal* animalCreation(int somePar, double otherPar) override
	{
		return 12;
	}
};

int main()
{

	
}