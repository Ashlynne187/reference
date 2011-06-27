/*
 *	server/zone/objects/player/sessions/MigrateStatsSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef MIGRATESTATSSESSION_H_
#define MIGRATESTATSSESSION_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace tangible {

class TangibleObject;

} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible;

#include "engine/core/ManagedObject.h"

#include "server/zone/objects/scene/ObserverEventType.h"

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "engine/log/Logger.h"

#include "engine/core/ManagedReference.h"

#include "engine/util/Facade.h"

#include "system/lang/ref/Reference.h"

#include "engine/core/Task.h"

namespace server {
namespace zone {
namespace objects {
namespace player {

class MigrateStatsSession : public Facade {
public:
	MigrateStatsSession(CreatureObject* parent);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void setAttributeToModify(int attribute, int value);

	int getAttribtueToModify(int attribute);

	void migrateStats();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	MigrateStatsSession(DummyConstructorParameter* param);

	virtual ~MigrateStatsSession();

	friend class MigrateStatsSessionHelper;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

namespace server {
namespace zone {
namespace objects {
namespace player {

class MigrateStatsSessionImplementation : public FacadeImplementation {
protected:
	ManagedWeakReference<CreatureObject* > creature;

	Vector<int> attributesToModify;

public:
	MigrateStatsSessionImplementation(CreatureObject* parent);

	MigrateStatsSessionImplementation(DummyConstructorParameter* param);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void setAttributeToModify(int attribute, int value);

	int getAttribtueToModify(int attribute);

	void migrateStats();

	WeakReference<MigrateStatsSession*> _this;

	operator const MigrateStatsSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~MigrateStatsSessionImplementation();

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

	friend class MigrateStatsSession;
};

class MigrateStatsSessionAdapter : public FacadeAdapter {
public:
	MigrateStatsSessionAdapter(MigrateStatsSessionImplementation* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int initializeSession();

	int cancelSession();

	int clearSession();

	void setAttributeToModify(int attribute, int value);

	int getAttribtueToModify(int attribute);

	void migrateStats();

};

class MigrateStatsSessionHelper : public DistributedObjectClassHelper, public Singleton<MigrateStatsSessionHelper> {
	static MigrateStatsSessionHelper* staticInitializer;

public:
	MigrateStatsSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<MigrateStatsSessionHelper>;
};

} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player;

#endif /*MIGRATESTATSSESSION_H_*/
