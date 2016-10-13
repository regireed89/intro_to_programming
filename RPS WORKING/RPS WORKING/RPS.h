#pragma once


class Application
{
public:
	virtual void Start() = 0;
	void Run();
	virtual void Shutdown() = 0;
	Application() {};
	virtual void Update() = 0;
protected:
	bool gameover;


};




class RPS : public Application
{
	void Application();
	void Start();
	void Run();
	void Shutdown();


};
