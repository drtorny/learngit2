#version 330 core

in vec3 vPosition;
in vec3 vNormal;

uniform vec3 lightPos;

uniform mat4 modelViewProjMatrix;
uniform mat4 modelViewMatrix;

out vec4 color;

// Phong 光照模型的实现 (per-vertex shading)

void main()
{
	gl_Position = modelViewProjMatrix * vec4(vPosition, 1.0);

	// TODO 将顶点坐标变换到相机坐标系
	// vec4 vertPos_cameraspace = ...;
	// vec3 V = ...;
	// vec3 N = ...;
	
	// TODO 设置三维物体的材质属性
	// vec3 ambiColor = ...;
	// vec3 diffColor = ...;
	// vec3 specColor = ...;
	
	// TODO 计算N，L，V，R四个向量并归一化
	// vec3 N_norm = ...;
	// vec3 L_norm = ...;
	// vec3 V_norm = ...;
	// vec3 R_norm = ...;
	
	// TODO 计算漫反射系数和镜面反射系数
	// float lambertian = ...;
	// float specular = ...;
	
	// float shininess = 10.0;
	
	// TODO 计算最终每个顶点的输出颜色
	// color = ...;
}