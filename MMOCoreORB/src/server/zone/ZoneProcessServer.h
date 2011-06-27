/*
 *	server/zone/ZoneProcessServer.h generated by engine3 IDL compiler 0.60
 */

#ifndef ZONEPROCESSSERVER_H_
#define ZONEPROCESSSERVER_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace managers {
namespace skill {

class SkillManager;

} // namespace skill
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::skill;

namespace server {
namespace zone {
namespace managers {
namespace player {
namespace creation {

class PlayerCreationManager;

} // namespace creation
} // namespace player
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::player::creation;

namespace server {
namespace zone {

class ZoneServer;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZonePacketHandler;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace chat {

class ChatManager;

} // namespace chat
} // namespace server

using namespace server::chat;

namespace server {
namespace zone {
namespace managers {
namespace objectcontroller {

class ObjectController;

} // namespace objectcontroller
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::objectcontroller;

namespace server {
namespace zone {
namespace managers {
namespace name {

class NameManager;

} // namespace name
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::name;

namespace server {
namespace zone {
namespace managers {
namespace holocron {

class HolocronManager;

} // namespace holocron
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::holocron;

namespace server {
namespace zone {
namespace managers {
namespace sui {

class SuiManager;

} // namespace sui
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::sui;

namespace server {
namespace zone {
namespace managers {
namespace player {

class PlayerManager;

} // namespace player
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::player;

namespace server {
namespace zone {
namespace managers {
namespace professions {

class ProfessionManager;

} // namespace professions
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::professions;

namespace server {
namespace zone {
namespace managers {
namespace object {

class ObjectManager;

} // namespace object
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::object;

namespace server {
namespace zone {
namespace managers {
namespace vendor {

class VendorManager;

} // namespace vendor
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::vendor;

#include "engine/core/ManagedService.h"

namespace server {
namespace zone {

class ZoneProcessServer : public ManagedService {
public:
	ZoneProcessServer(ZoneServer* server);

	void initialize();

	VendorManager* getVendorManager();

	ZoneServer* getZoneServer();

	ZonePacketHandler* getPacketHandler();

	ProfessionManager* getProfessionManager();

	ObjectController* getObjectController();

	PlayerManager* getPlayerManager();

	NameManager* getNameManager();

	HolocronManager* getHolocronManager();

	ChatManager* getChatManager();

	SuiManager* getSuiManager();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	ZoneProcessServer(DummyConstructorParameter* param);

	virtual ~ZoneProcessServer();

	friend class ZoneProcessServerHelper;
};

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {

class ZoneProcessServerImplementation : public ManagedServiceImplementation {
protected:
	ManagedReference<ZoneServer* > zoneServer;

	Reference<SkillManager* > skillManager;

	Reference<PlayerCreationManager* > playerCreationManager;

	Reference<VendorManager* > vendorManager;

	Reference<ZonePacketHandler* > zonePacketHandler;

	Reference<NameManager* > nameManager;

	Reference<HolocronManager* > holocronManager;

	Reference<SuiManager* > suiManager;

	Reference<ProfessionManager* > professionManager;

	ManagedReference<ObjectController* > objectController;

public:
	ZoneProcessServerImplementation(ZoneServer* server);

	ZoneProcessServerImplementation(DummyConstructorParameter* param);

	void initialize();

	void finalize();

	VendorManager* getVendorManager();

	ZoneServer* getZoneServer();

	ZonePacketHandler* getPacketHandler();

	ProfessionManager* getProfessionManager();

	ObjectController* getObjectController();

	PlayerManager* getPlayerManager();

	NameManager* getNameManager();

	HolocronManager* getHolocronManager();

	ChatManager* getChatManager();

	SuiManager* getSuiManager();

	WeakReference<ZoneProcessServer*> _this;

	operator const ZoneProcessServer*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~ZoneProcessServerImplementation();

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

	friend class ZoneProcessServer;
};

class ZoneProcessServerAdapter : public ManagedServiceAdapter {
public:
	ZoneProcessServerAdapter(ZoneProcessServerImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	void initialize();

	void finalize();

	ZoneServer* getZoneServer();

	PlayerManager* getPlayerManager();

	ChatManager* getChatManager();

};

class ZoneProcessServerHelper : public DistributedObjectClassHelper, public Singleton<ZoneProcessServerHelper> {
	static ZoneProcessServerHelper* staticInitializer;

public:
	ZoneProcessServerHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<ZoneProcessServerHelper>;
};

} // namespace zone
} // namespace server

using namespace server::zone;

#endif /*ZONEPROCESSSERVER_H_*/
