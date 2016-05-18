#pragma once
#include "Agent.h"

class SearchAgent : public Agent
{
public:
	SearchAgent(unsigned int gl_program_shader, glm::vec3 modelSize, glm::vec3 startPosition, int agentIndex, glm::vec3 moveSpeed, glm::vec4 mapSize, unsigned int textureIndex);
	~SearchAgent();
};

