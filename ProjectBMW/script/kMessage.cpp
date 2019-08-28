#include <gazebo/gazebo.hh>

namespace gazebo
{
	class WorldPluginTriRobot : public WorldPlugin
	{
		public: WorldPluginTriRobot(): WorldPlugin()
		{
			printf("Welcome to Kaustubh's World!\n");
		}

		public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
		{
		}
	};
	GZ_REGISTER_WORLD_PLUGIN(WorldPluginTriRobot)
}

