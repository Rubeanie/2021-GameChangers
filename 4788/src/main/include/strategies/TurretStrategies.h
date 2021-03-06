#include "Turret.h"
#include "strategy\StrategySystem.h"

using Controllers = wml::controllers::SmartControllerGroup;

class TurretManualStrategy : public wml::Strategy  {
 public:
	TurretManualStrategy(std::string name, Turret &turret, Controllers &contGroup);
	void OnStart() override;
	void OnUpdate(double dt) override;
 private:
	double _rot = 0;
	double _vert = 0;
	double _shoot = 0;
	Turret &_turret;
	Controllers &_contGroup;
};