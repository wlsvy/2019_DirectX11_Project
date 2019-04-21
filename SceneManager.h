#pragma once
#include "Graphics/Model.h"
#include "Graphics/Shaders.h"
#include <vector>

class Engine; //include ���� ����
class GameObject_v2;
struct TimeInfo;
class Component;

class ShaderBuffer {
public:
	std::vector<PixelShader> pixelShaderBuffer;
	std::vector<VertexShader> vertexShaderBuffer;
};

class ModelBuffer {
public:
	std::vector<Model*> buffer;
	~ModelBuffer();
};

class SceneManager {
	friend class Engine;
public:
	//bool Initialize();
	//void LoadObject_Info();
	SceneManager(Engine * const engine_ptr, TimeInfo * const timeInfo) : engine(engine_ptr), Time(timeInfo) {}
	void Custom_Test_Obj_Set();
	void ClassifyComponent(Component * component);
	~SceneManager();
	
	TimeInfo * const Time;

private:
	std::vector<GameObject_v2*> gameObjectBuffer;
	Engine * const engine;
	ModelBuffer modelBuffer;
	ShaderBuffer shaderBuffer;
};