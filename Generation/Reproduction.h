#ifndef REPRODUCTION_H
#define REPRODUCTION_H
#include <stdint.h>

class Reproduction
{
private:
	Reproduction();
	~Reproduction();
	int64_t mParent1;
	int64_t mParent2;
	int64_t mEnfant;
	int percentageMutate;
	
public:
	static Reproduction& getInstance()
	{
		static Reproduction instance;
		return instance;
	}
	enum class StateRep { select, generatechild, mutate };
	StateRep state;
	StateRep createChild(StateRep & state);
	StateRep nextState(StateRep & state);
	StateRep & getState();
	int64_t getParent1();
	int64_t getParent2();
};

#endif //REPRODUCTION_H