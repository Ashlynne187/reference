/*
 *	server/zone/managers/minigames/ForageManager.h generated by engine3 IDL compiler 0.60
 */

#ifndef FORAGEMANAGER_H_
#define FORAGEMANAGER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace player {

class PlayerCreature;

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/objects/area/ForageMap.h"

#include "engine/log/Logger.h"

#include "engine/lua/Lua.h"

#include "system/util/VectorMap.h"

#include "system/util/Vector.h"

#include "engine/util/Observer.h"

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class ForageManager : public Observer {
public:
	ForageManager(ZoneServer* server);

	void deleteForageAreaCollection(String& playerName);

	void startForaging(PlayerCreature* player, bool scoutForage);

	void finishForaging(PlayerCreature* player, bool scoutForage, float forageX, float forageY, const String& planet);

	void forageGiveItems(PlayerCreature* player, bool scoutForage, float forageX, float forageY, const String& planet);

	void forageGiveResource(PlayerCreature* player, float forageX, float forageY, const String& planet);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ForageManager(DummyConstructorParameter* param);

	virtual ~ForageManager();

	friend class ForageManagerHelper;
};

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

namespace server {
namespace zone {
namespace managers {
namespace minigames {

class ForageManagerImplementation : public ObserverImplementation, public Logger {
protected:
	ManagedWeakReference<ZoneServer* > zoneServer;

	ForageMap forageAreas;

public:
	ForageManagerImplementation(ZoneServer* server);

	ForageManagerImplementation(DummyConstructorParameter* param);

	void deleteForageAreaCollection(String& playerName);

	void startForaging(PlayerCreature* player, bool scoutForage);

	void finishForaging(PlayerCreature* player, bool scoutForage, float forageX, float forageY, const String& planet);

	void forageGiveItems(PlayerCreature* player, bool scoutForage, float forageX, float forageY, const String& planet);

	void forageGiveResource(PlayerCreature* player, float forageX, float forageY, const String& planet);

	WeakReference<ForageManager*> _this;

	operator const ForageManager*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ForageManagerImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class ForageManager;
};

class ForageManagerAdapter : public ObserverAdapter {
public:
	ForageManagerAdapter(ForageManagerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void deleteForageAreaCollection(String& playerName);

	void startForaging(PlayerCreature* player, bool scoutForage);

	void finishForaging(PlayerCreature* player, bool scoutForage, float forageX, float forageY, const String& planet);

	void forageGiveItems(PlayerCreature* player, bool scoutForage, float forageX, float forageY, const String& planet);

	void forageGiveResource(PlayerCreature* player, float forageX, float forageY, const String& planet);

protected:
	String _param0_deleteForageAreaCollection__String_;
	String _param4_finishForaging__PlayerCreature_bool_float_float_String_;
	String _param4_forageGiveItems__PlayerCreature_bool_float_float_String_;
	String _param3_forageGiveResource__PlayerCreature_float_float_String_;
};

class ForageManagerHelper : public DistributedObjectClassHelper, public Singleton<ForageManagerHelper> {
	static ForageManagerHelper* staticInitializer;

public:
	ForageManagerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ForageManagerHelper>;
};

} // namespace minigames
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::minigames;

#endif /*FORAGEMANAGER_H_*/
