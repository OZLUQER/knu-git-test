class Oval {
private:
	int width;
	int height;
public:
	Oval();
	Oval(int a, int b);
	void set(int a, int b);
	int getWidth();
	int getHeight();
	void show();
	~Oval();
};