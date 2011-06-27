/*
 *	server/zone/objects/tangible/terminal/mission/MissionTerminal.h generated by engine3 IDL compiler 0.60
 */

#ifndef MISSIONTERMINAL_H_
#define MISSIONTERMINAL_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

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
namespace packets {
namespace object {

class ObjectMenuResponse;

} // namespace object
} // namespace packets
} // namespace zone
} // namespace server

using namespace server::zone::packets::object;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

#include "server/zone/templates/tangible/MissionTerminalTemplate.h"

#include "server/zone/objects/tangible/terminal/Terminal.h"

#include "engine/lua/LuaObject.h"

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace mission {

class MissionTerminal : public Terminal {
public:
	MissionTerminal();

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	bool isMissionTerminal();

	bool isArtisanTerminal();

	bool isGeneralTerminal();

	bool isBountyTerminal();

	bool isEntertainerTerminal();

	bool isImperialTerminal();

	bool isNewbieTerminal();

	bool isRebelTerminal();

	bool isScoutTerminal();

	bool isStatueTerminal();

	bool isSlicer(PlayerCreature* slicer);

	void addSlicer(PlayerCreature* slicer);

	void removeSlicer(PlayerCreature* slicer);

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	MissionTerminal(DummyConstructorParameter* param);

	virtual ~MissionTerminal();

	friend class MissionTerminalHelper;
};

} // namespace mission
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::mission;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace terminal {
namespace mission {

class MissionTerminalImplementation : public TerminalImplementation {
protected:
	String terminalType;

	Vector<ManagedReference<PlayerCreature* > > slicers;

public:
	MissionTerminalImplementation();

	MissionTerminalImplementation(DummyConstructorParameter* param);

	void loadTemplateData(SharedObjectTemplate* templateData);

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	bool isMissionTerminal();

	bool isArtisanTerminal();

	bool isGeneralTerminal();

	bool isBountyTerminal();

	bool isEntertainerTerminal();

	bool isImperialTerminal();

	bool isNewbieTerminal();

	bool isRebelTerminal();

	bool isScoutTerminal();

	bool isStatueTerminal();

	bool isSlicer(PlayerCreature* slicer);

	void addSlicer(PlayerCreature* slicer);

	void removeSlicer(PlayerCreature* slicer);

	WeakReference<MissionTerminal*> _this;

	operator const MissionTerminal*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~MissionTerminalImplementation();

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

	friend class MissionTerminal;
};

class MissionTerminalAdapter : public TerminalAdapter {
public:
	MissionTerminalAdapter(MissionTerminalImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initializeTransientMembers();

	int handleObjectMenuSelect(PlayerCreature* player, byte selectedID);

	bool isMissionTerminal();

	bool isArtisanTerminal();

	bool isGeneralTerminal();

	bool isBountyTerminal();

	bool isEntertainerTerminal();

	bool isImperialTerminal();

	bool isNewbieTerminal();

	bool isRebelTerminal();

	bool isScoutTerminal();

	bool isStatueTerminal();

	bool isSlicer(PlayerCreature* slicer);

	void addSlicer(PlayerCreature* slicer);

	void removeSlicer(PlayerCreature* slicer);

};

class MissionTerminalHelper : public DistributedObjectClassHelper, public Singleton<MissionTerminalHelper> {
	static MissionTerminalHelper* staticInitializer;

public:
	MissionTerminalHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<MissionTerminalHelper>;
};

} // namespace mission
} // namespace terminal
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::terminal::mission;

#endif /*MISSIONTERMINAL_H_*/
