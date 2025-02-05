#pragma once
#include "CircuitManager.h"


class ComponentManipulation {
public:
	ComponentManipulation();
	void init(CircuitManager* _circuitManagerPointer);
	void placeComponent(glm::vec3 _cameraPosition, glm::vec3 _cameraDirection, componentType _componentTypeSelected);
	void deleteComponent(glm::vec3 _cameraPosition, glm::vec3 _cameraDirection);
	glm::vec3 getSelectedComponent(glm::vec3 _cameraPosition, glm::vec3 _cameraDirection);
	int getSide(glm::vec3 _component, glm::vec3 _cameraPosition, glm::vec3 _cameraDirection);
	void switchButton(glm::vec3 _cameraPosition, glm::vec3 _cameraDirection);
	glm::vec3 getNewComponentLocation(glm::vec3 _cameraPosition, glm::vec3 _cameraDirection);

private:
	glm::vec3 getLineFaceIntersect(glm::vec3 _min, glm::vec3 _max, glm::vec3 _origin, glm::vec3 _direction, int _orientation);
	float get3DDistance(glm::vec3 _p1, glm::vec3 _p2);
	glm::vec3 nullComponent = glm::vec3(-0.1, -0.1, -0.1);
	glm::vec3 nullIntersection = glm::vec3(0.5, 0.5, 0.5);
	CircuitManager* circuitManagerPointer;

};