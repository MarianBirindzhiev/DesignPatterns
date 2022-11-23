class IShape
{
public:
	IShape() {};
	~IShape() {};
	virtual void draw() = 0;
};
class Rectangle:IShape
{
public:
	void draw() override
	{
		std::cout << "drawing a rectangle";
	}
};
class Circle :IShape
{
public:
	void draw() override
	{
		std::cout << "drawing a Circle";
	}
};
class Square :IShape
{
public:
	void draw() override
	{
		std::cout << "drawing a Square";
	}
};

class ShapeMaker
{
private:
	 Rectangle rectangle;
	 Circle circle;
	 Square square;
public:
	ShapeMaker()
	{
		rectangle = new Rectangle();
		circle = new Circle();
		square = new Square();
	}
	void drawCircle()
	{
		circle.draw();
	}
	void drawSquare()
	{
		square.draw();
	}
	void drawRectangle()
	{
		rectangle.draw();
	}
	
};
int main()
{
	ShapeMaker shapeMaker;
	shapeMaker.drawCircle();
	shapeMaker.drawRectangle();
	shapeMaker.drawSquare();
}