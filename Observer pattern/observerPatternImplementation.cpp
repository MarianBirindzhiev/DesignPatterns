#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

class IObserver
{
public:
	IObserver() {};
	~IObserver() {};

	virtual void update() = 0;
};

class IObservable //Subject
{
private:
	std::vector<IObserver*> observers;

public:
	IObservable() {};
	~IObservable() {};

	virtual void add(IObserver* passedObserver) = 0;
	virtual void remove(IObserver* passedObserver) = 0;
	virtual void notify() = 0;
};

class WeatherStation : public IObservable //ConcreteIObservable
{
public:
	void add(IObserver* passedObserver) override
	{
		return;
	}
	void remove(IObserver* passedObserver) override
	{
		return;
	}
	void notify() override
	{
		return;
	}

	int getTemperature()
	{
		return;
	}
	int getHumidity()
	{
		return;
	}
};

class IDisplay //not necessary
{
public:
	virtual void display() = 0;
};

class PhoneDisplay :public IObserver, public IDisplay
{
	WeatherStation m_station;
public:
	PhoneDisplay(WeatherStation station)
	{
		m_station = station;
	}
	void update() override
	{
		m_station.getTemperature();
		m_station.getHumidity();
	}
	void display() override
	{
		return;
	}
};

class WindowDisplay :public IObserver, public IDisplay
{
private:
	WeatherStation m_station;
public:
	WindowDisplay(WeatherStation station)
	{
		m_station = station;
	}
	void update() override
	{
		m_station.getTemperature();
		m_station.getHumidity();
	}
	void display() override
	{
		return;
	}
};


int main()
{
	WeatherStation station = new WeatherStation;
	PhoneDisplay display = new PhoneDisplay(station);
	station.add(display);
	station.notify();
}