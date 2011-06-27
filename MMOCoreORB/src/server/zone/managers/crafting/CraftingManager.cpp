/*
 *	server/zone/managers/crafting/CraftingManager.cpp generated by engine3 IDL compiler 0.60
 */

#include "CraftingManager.h"

#include "server/zone/objects/player/PlayerObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

#include "server/zone/objects/draftschematic/DraftSchematic.h"

/*
 *	CraftingManagerStub
 */

enum {RPC_GETSCHEMATIC__INT_,RPC_SENDDRAFTSLOTSTO__PLAYERCREATURE_INT_,RPC_SENDRESOURCEWEIGHTSTO__PLAYERCREATURE_INT_,RPC_CALCULATEASSEMBLYSUCCESS__PLAYERCREATURE_DRAFTSCHEMATIC_FLOAT_,RPC_CALCULATEASSEMBLYVALUEMODIFIER__INT_,RPC_GETASSEMBLYPERCENTAGE__FLOAT_,RPC_CALCULATEEXPERIMENTATIONFAILURERATE__PLAYERCREATURE_MANUFACTURESCHEMATIC_INT_,RPC_CALCULATEEXPERIMENTATIONSUCCESS__PLAYERCREATURE_DRAFTSCHEMATIC_FLOAT_,RPC_CALCULATEEXPERIMENTATIONVALUEMODIFIER__INT_INT_,RPC_GETWEIGHTEDVALUE__MANUFACTURESCHEMATIC_INT_,RPC_GENERATESERIAL__};

CraftingManager::CraftingManager() : ZoneManager(DummyConstructorParameter::instance()) {
	CraftingManagerImplementation* _implementation = new CraftingManagerImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

CraftingManager::CraftingManager(DummyConstructorParameter* param) : ZoneManager(param) {
}

CraftingManager::~CraftingManager() {
}


void CraftingManager::initialize() {
	CraftingManagerImplementation* _implementation = (CraftingManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->initialize();
}

void CraftingManager::awardSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient) {
	CraftingManagerImplementation* _implementation = (CraftingManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->awardSchematicGroup(playerObject, schematicgroups, updateClient);
}

void CraftingManager::removeSchematicGroup(PlayerObject* playerObject, Vector<String>& schematicgroups, bool updateClient) {
	CraftingManagerImplementation* _implementation = (CraftingManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->removeSchematicGroup(playerObject, schematicgroups, updateClient);
}

DraftSchematic* CraftingManager::getSchematic(unsigned int schematicID) {
	CraftingManagerImplementation* _implementation = (CraftingManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETSCHEMATIC__INT_);
		method.addUnsignedIntParameter(schematicID);

		return (DraftSchematic*) method.executeWithObjectReturn();
	} else
		return _implementation->getSchematic(schematicID);
}

void CraftingManager::sendDraftSlotsTo(PlayerCreature* player, unsigned int schematicID) {
	CraftingManagerImplementation* _implementation = (CraftingManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDDRAFTSLOTSTO__PLAYERCREATURE_INT_);
		method.addObjectParameter(player);
		method.addUnsignedIntParameter(schematicID);

		method.executeWithVoidReturn();
	} else
		_implementation->sendDraftSlotsTo(player, schematicID);
}

void CraftingManager::sendResourceWeightsTo(PlayerCreature* player, unsigned int schematicID) {
	CraftingManagerImplementation* _implementation = (CraftingManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDRESOURCEWEIGHTSTO__PLAYERCREATURE_INT_);
		method.addObjectParameter(player);
		method.addUnsignedIntParameter(schematicID);

		method.executeWithVoidReturn();
	} else
		_implementation->sendResourceWeightsTo(player, schematicID);
}

int CraftingManager::calculateAssemblySuccess(PlayerCreature* player, DraftSchematic* draftSchematic, float effectiveness) {
	CraftingManagerImplementation* _implementation = (CraftingManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALCULATEASSEMBLYSUCCESS__PLAYERCREATURE_DRAFTSCHEMATIC_FLOAT_);
		method.addObjectParameter(player);
		method.addObjectParameter(draftSchematic);
		method.addFloatParameter(effectiveness);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->calculateAssemblySuccess(player, draftSchematic, effectiveness);
}

float CraftingManager::calculateAssemblyValueModifier(int assemblyResult) {
	CraftingManagerImplementation* _implementation = (CraftingManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALCULATEASSEMBLYVALUEMODIFIER__INT_);
		method.addSignedIntParameter(assemblyResult);

		return method.executeWithFloatReturn();
	} else
		return _implementation->calculateAssemblyValueModifier(assemblyResult);
}

float CraftingManager::getAssemblyPercentage(float value) {
	CraftingManagerImplementation* _implementation = (CraftingManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETASSEMBLYPERCENTAGE__FLOAT_);
		method.addFloatParameter(value);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getAssemblyPercentage(value);
}

int CraftingManager::calculateExperimentationFailureRate(PlayerCreature* player, ManufactureSchematic* manufactureSchematic, int pointsUsed) {
	CraftingManagerImplementation* _implementation = (CraftingManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALCULATEEXPERIMENTATIONFAILURERATE__PLAYERCREATURE_MANUFACTURESCHEMATIC_INT_);
		method.addObjectParameter(player);
		method.addObjectParameter(manufactureSchematic);
		method.addSignedIntParameter(pointsUsed);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->calculateExperimentationFailureRate(player, manufactureSchematic, pointsUsed);
}

int CraftingManager::calculateExperimentationSuccess(PlayerCreature* player, DraftSchematic* draftSchematic, float effectiveness) {
	CraftingManagerImplementation* _implementation = (CraftingManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALCULATEEXPERIMENTATIONSUCCESS__PLAYERCREATURE_DRAFTSCHEMATIC_FLOAT_);
		method.addObjectParameter(player);
		method.addObjectParameter(draftSchematic);
		method.addFloatParameter(effectiveness);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->calculateExperimentationSuccess(player, draftSchematic, effectiveness);
}

float CraftingManager::calculateExperimentationValueModifier(int experimentationResult, int pointsAttempted) {
	CraftingManagerImplementation* _implementation = (CraftingManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CALCULATEEXPERIMENTATIONVALUEMODIFIER__INT_INT_);
		method.addSignedIntParameter(experimentationResult);
		method.addSignedIntParameter(pointsAttempted);

		return method.executeWithFloatReturn();
	} else
		return _implementation->calculateExperimentationValueModifier(experimentationResult, pointsAttempted);
}

float CraftingManager::getWeightedValue(ManufactureSchematic* manufactureSchematic, int type) {
	CraftingManagerImplementation* _implementation = (CraftingManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETWEIGHTEDVALUE__MANUFACTURESCHEMATIC_INT_);
		method.addObjectParameter(manufactureSchematic);
		method.addSignedIntParameter(type);

		return method.executeWithFloatReturn();
	} else
		return _implementation->getWeightedValue(manufactureSchematic, type);
}

String CraftingManager::generateSerial() {
	CraftingManagerImplementation* _implementation = (CraftingManagerImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GENERATESERIAL__);

		method.executeWithAsciiReturn(_return_generateSerial);
		return _return_generateSerial;
	} else
		return _implementation->generateSerial();
}

DistributedObjectServant* CraftingManager::_getImplementation() {

	_updated = true;
	return _impl;
}

void CraftingManager::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	CraftingManagerImplementation
 */

CraftingManagerImplementation::CraftingManagerImplementation(DummyConstructorParameter* param) : ZoneManagerImplementation(param) {
	_initializeImplementation();
}


CraftingManagerImplementation::~CraftingManagerImplementation() {
}


void CraftingManagerImplementation::finalize() {
}

void CraftingManagerImplementation::_initializeImplementation() {
	_setClassHelper(CraftingManagerHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void CraftingManagerImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (CraftingManager*) stub;
	ZoneManagerImplementation::_setStub(stub);
}

DistributedObjectStub* CraftingManagerImplementation::_getStub() {
	return _this;
}

CraftingManagerImplementation::operator const CraftingManager*() {
	return _this;
}

void CraftingManagerImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void CraftingManagerImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void CraftingManagerImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void CraftingManagerImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void CraftingManagerImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void CraftingManagerImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void CraftingManagerImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void CraftingManagerImplementation::_serializationHelperMethod() {
	ZoneManagerImplementation::_serializationHelperMethod();

	_setClassName("CraftingManager");

}

void CraftingManagerImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(CraftingManagerImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool CraftingManagerImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ZoneManagerImplementation::readObjectMember(stream, _name))
		return true;


	return false;
}

void CraftingManagerImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = CraftingManagerImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int CraftingManagerImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;

	return 0 + ZoneManagerImplementation::writeObjectMembers(stream);
}

CraftingManagerImplementation::CraftingManagerImplementation() : ZoneManagerImplementation("CraftingManager") {
	_initializeImplementation();
}

DraftSchematic* CraftingManagerImplementation::getSchematic(unsigned int schematicID) {
	// server/zone/managers/crafting/CraftingManager.idl():  		return schematicMap.get(schematicID);
	return schematicMap->get(schematicID);
}

/*
 *	CraftingManagerAdapter
 */

CraftingManagerAdapter::CraftingManagerAdapter(CraftingManagerImplementation* obj) : ZoneManagerAdapter(obj) {
}

Packet* CraftingManagerAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_GETSCHEMATIC__INT_:
		resp->insertLong(getSchematic(inv->getUnsignedIntParameter())->_getObjectID());
		break;
	case RPC_SENDDRAFTSLOTSTO__PLAYERCREATURE_INT_:
		sendDraftSlotsTo((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedIntParameter());
		break;
	case RPC_SENDRESOURCEWEIGHTSTO__PLAYERCREATURE_INT_:
		sendResourceWeightsTo((PlayerCreature*) inv->getObjectParameter(), inv->getUnsignedIntParameter());
		break;
	case RPC_CALCULATEASSEMBLYSUCCESS__PLAYERCREATURE_DRAFTSCHEMATIC_FLOAT_:
		resp->insertSignedInt(calculateAssemblySuccess((PlayerCreature*) inv->getObjectParameter(), (DraftSchematic*) inv->getObjectParameter(), inv->getFloatParameter()));
		break;
	case RPC_CALCULATEASSEMBLYVALUEMODIFIER__INT_:
		resp->insertFloat(calculateAssemblyValueModifier(inv->getSignedIntParameter()));
		break;
	case RPC_GETASSEMBLYPERCENTAGE__FLOAT_:
		resp->insertFloat(getAssemblyPercentage(inv->getFloatParameter()));
		break;
	case RPC_CALCULATEEXPERIMENTATIONFAILURERATE__PLAYERCREATURE_MANUFACTURESCHEMATIC_INT_:
		resp->insertSignedInt(calculateExperimentationFailureRate((PlayerCreature*) inv->getObjectParameter(), (ManufactureSchematic*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case RPC_CALCULATEEXPERIMENTATIONSUCCESS__PLAYERCREATURE_DRAFTSCHEMATIC_FLOAT_:
		resp->insertSignedInt(calculateExperimentationSuccess((PlayerCreature*) inv->getObjectParameter(), (DraftSchematic*) inv->getObjectParameter(), inv->getFloatParameter()));
		break;
	case RPC_CALCULATEEXPERIMENTATIONVALUEMODIFIER__INT_INT_:
		resp->insertFloat(calculateExperimentationValueModifier(inv->getSignedIntParameter(), inv->getSignedIntParameter()));
		break;
	case RPC_GETWEIGHTEDVALUE__MANUFACTURESCHEMATIC_INT_:
		resp->insertFloat(getWeightedValue((ManufactureSchematic*) inv->getObjectParameter(), inv->getSignedIntParameter()));
		break;
	case RPC_GENERATESERIAL__:
		resp->insertAscii(generateSerial());
		break;
	default:
		return NULL;
	}

	return resp;
}

DraftSchematic* CraftingManagerAdapter::getSchematic(unsigned int schematicID) {
	return ((CraftingManagerImplementation*) impl)->getSchematic(schematicID);
}

void CraftingManagerAdapter::sendDraftSlotsTo(PlayerCreature* player, unsigned int schematicID) {
	((CraftingManagerImplementation*) impl)->sendDraftSlotsTo(player, schematicID);
}

void CraftingManagerAdapter::sendResourceWeightsTo(PlayerCreature* player, unsigned int schematicID) {
	((CraftingManagerImplementation*) impl)->sendResourceWeightsTo(player, schematicID);
}

int CraftingManagerAdapter::calculateAssemblySuccess(PlayerCreature* player, DraftSchematic* draftSchematic, float effectiveness) {
	return ((CraftingManagerImplementation*) impl)->calculateAssemblySuccess(player, draftSchematic, effectiveness);
}

float CraftingManagerAdapter::calculateAssemblyValueModifier(int assemblyResult) {
	return ((CraftingManagerImplementation*) impl)->calculateAssemblyValueModifier(assemblyResult);
}

float CraftingManagerAdapter::getAssemblyPercentage(float value) {
	return ((CraftingManagerImplementation*) impl)->getAssemblyPercentage(value);
}

int CraftingManagerAdapter::calculateExperimentationFailureRate(PlayerCreature* player, ManufactureSchematic* manufactureSchematic, int pointsUsed) {
	return ((CraftingManagerImplementation*) impl)->calculateExperimentationFailureRate(player, manufactureSchematic, pointsUsed);
}

int CraftingManagerAdapter::calculateExperimentationSuccess(PlayerCreature* player, DraftSchematic* draftSchematic, float effectiveness) {
	return ((CraftingManagerImplementation*) impl)->calculateExperimentationSuccess(player, draftSchematic, effectiveness);
}

float CraftingManagerAdapter::calculateExperimentationValueModifier(int experimentationResult, int pointsAttempted) {
	return ((CraftingManagerImplementation*) impl)->calculateExperimentationValueModifier(experimentationResult, pointsAttempted);
}

float CraftingManagerAdapter::getWeightedValue(ManufactureSchematic* manufactureSchematic, int type) {
	return ((CraftingManagerImplementation*) impl)->getWeightedValue(manufactureSchematic, type);
}

String CraftingManagerAdapter::generateSerial() {
	return ((CraftingManagerImplementation*) impl)->generateSerial();
}

/*
 *	CraftingManagerHelper
 */

CraftingManagerHelper* CraftingManagerHelper::staticInitializer = CraftingManagerHelper::instance();

CraftingManagerHelper::CraftingManagerHelper() {
	className = "CraftingManager";

	Core::getObjectBroker()->registerClass(className, this);
}

void CraftingManagerHelper::finalizeHelper() {
	CraftingManagerHelper::finalize();
}

DistributedObject* CraftingManagerHelper::instantiateObject() {
	return new CraftingManager(DummyConstructorParameter::instance());
}

DistributedObjectServant* CraftingManagerHelper::instantiateServant() {
	return new CraftingManagerImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* CraftingManagerHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new CraftingManagerAdapter((CraftingManagerImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

