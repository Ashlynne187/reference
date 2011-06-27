/*
 *	server/zone/objects/creature/aigroup/LairGroup.cpp generated by engine3 IDL compiler 0.60
 */

#include "LairGroup.h"

#include "server/zone/objects/tangible/lair/LairObject.h"

/*
 *	LairGroupStub
 */

enum {RPC_ISLAIRGROUP__ = 6};

LairGroup::LairGroup() : AiGroup(DummyConstructorParameter::instance()) {
	LairGroupImplementation* _implementation = new LairGroupImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

LairGroup::LairGroup(DummyConstructorParameter* param) : AiGroup(param) {
}

LairGroup::~LairGroup() {
}


bool LairGroup::isLairGroup() {
	LairGroupImplementation* _implementation = (LairGroupImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISLAIRGROUP__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isLairGroup();
}

DistributedObjectServant* LairGroup::_getImplementation() {

	_updated = true;
	return _impl;
}

void LairGroup::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	LairGroupImplementation
 */

LairGroupImplementation::LairGroupImplementation(DummyConstructorParameter* param) : AiGroupImplementation(param) {
	_initializeImplementation();
}


LairGroupImplementation::~LairGroupImplementation() {
}


void LairGroupImplementation::finalize() {
}

void LairGroupImplementation::_initializeImplementation() {
	_setClassHelper(LairGroupHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void LairGroupImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (LairGroup*) stub;
	AiGroupImplementation::_setStub(stub);
}

DistributedObjectStub* LairGroupImplementation::_getStub() {
	return _this;
}

LairGroupImplementation::operator const LairGroup*() {
	return _this;
}

void LairGroupImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void LairGroupImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void LairGroupImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void LairGroupImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void LairGroupImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void LairGroupImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void LairGroupImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void LairGroupImplementation::_serializationHelperMethod() {
	AiGroupImplementation::_serializationHelperMethod();

	_setClassName("LairGroup");

}

void LairGroupImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(LairGroupImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool LairGroupImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (AiGroupImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "lair") {
		TypeInfo<ManagedReference<LairObject* > >::parseFromBinaryStream(&lair, stream);
		return true;
	}


	return false;
}

void LairGroupImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = LairGroupImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int LairGroupImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "lair";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<ManagedReference<LairObject* > >::toBinaryStream(&lair, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 1 + AiGroupImplementation::writeObjectMembers(stream);
}

LairGroupImplementation::LairGroupImplementation() : AiGroupImplementation() {
	_initializeImplementation();
}

bool LairGroupImplementation::isLairGroup() {
	// server/zone/objects/creature/aigroup/LairGroup.idl():  		return true;
	return true;
}

/*
 *	LairGroupAdapter
 */

LairGroupAdapter::LairGroupAdapter(LairGroupImplementation* obj) : AiGroupAdapter(obj) {
}

Packet* LairGroupAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_ISLAIRGROUP__:
		resp->insertBoolean(isLairGroup());
		break;
	default:
		return NULL;
	}

	return resp;
}

bool LairGroupAdapter::isLairGroup() {
	return ((LairGroupImplementation*) impl)->isLairGroup();
}

/*
 *	LairGroupHelper
 */

LairGroupHelper* LairGroupHelper::staticInitializer = LairGroupHelper::instance();

LairGroupHelper::LairGroupHelper() {
	className = "LairGroup";

	Core::getObjectBroker()->registerClass(className, this);
}

void LairGroupHelper::finalizeHelper() {
	LairGroupHelper::finalize();
}

DistributedObject* LairGroupHelper::instantiateObject() {
	return new LairGroup(DummyConstructorParameter::instance());
}

DistributedObjectServant* LairGroupHelper::instantiateServant() {
	return new LairGroupImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* LairGroupHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new LairGroupAdapter((LairGroupImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

