/*
 *	server/zone/objects/tangible/tool/SurveyTool.cpp generated by engine3 IDL compiler 0.60
 */

#include "SurveyTool.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/packets/object/ObjectMenuResponse.h"

#include "server/zone/Zone.h"

#include "server/zone/objects/manufactureschematic/ManufactureSchematic.h"

/*
 *	SurveyToolStub
 */

enum {RPC_INITIALIZETRANSIENTMEMBERS__ = 6,RPC_SETRANGE__INT_,RPC_GETRANGE__,RPC_GETPOINTS__,RPC_CANSAMPLERADIOACTIVE__,RPC_TRYGAMBLE__,RPC_CLEARGAMBLE__,RPC_CONSENTRADIOACTIVESAMPLE__PLAYERCREATURE_,RPC_SENDRADIOACTIVEWARNING__PLAYERCREATURE_,RPC_SENDRANGESUI__PLAYERCREATURE_,RPC_SURVEYCNODEMINIGAMESUI__PLAYERCREATURE_,RPC_SURVEYCNODEMINIGAME__PLAYERCREATURE_INT_,RPC_CLEARRICHSAMPLELOCATION__,RPC_SETINUSE__BOOL_,RPC_ISINUSE__,RPC_SURVEYGNODEMINIGAMESUI__PLAYERCREATURE_,RPC_SURVEYGNODEMINIGAME__PLAYERCREATURE_INT_,RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_,RPC_SENDRESOURCELISTTO__PLAYERCREATURE_,RPC_SENDSURVEYTO__PLAYERCREATURE_STRING_,RPC_SENDSAMPLETO__PLAYERCREATURE_STRING_};

SurveyTool::SurveyTool() : ToolTangibleObject(DummyConstructorParameter::instance()) {
	SurveyToolImplementation* _implementation = new SurveyToolImplementation();
	_impl = _implementation;
	_impl->_setStub(this);
}

SurveyTool::SurveyTool(DummyConstructorParameter* param) : ToolTangibleObject(param) {
}

SurveyTool::~SurveyTool() {
}


void SurveyTool::initializeTransientMembers() {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_INITIALIZETRANSIENTMEMBERS__);

		method.executeWithVoidReturn();
	} else
		_implementation->initializeTransientMembers();
}

void SurveyTool::loadTemplateData(SharedObjectTemplate* templateData) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->loadTemplateData(templateData);
}

void SurveyTool::fillObjectMenuResponse(ObjectMenuResponse* menuResponse, PlayerCreature* player) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->fillObjectMenuResponse(menuResponse, player);
}

void SurveyTool::updateCraftingValues(ManufactureSchematic* schematic) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		_implementation->updateCraftingValues(schematic);
}

void SurveyTool::setRange(int r) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETRANGE__INT_);
		method.addSignedIntParameter(r);

		method.executeWithVoidReturn();
	} else
		_implementation->setRange(r);
}

int SurveyTool::getRange() {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETRANGE__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getRange();
}

int SurveyTool::getPoints() {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_GETPOINTS__);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->getPoints();
}

bool SurveyTool::canSampleRadioactive() {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CANSAMPLERADIOACTIVE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->canSampleRadioactive();
}

bool SurveyTool::tryGamble() {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_TRYGAMBLE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->tryGamble();
}

void SurveyTool::clearGamble() {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARGAMBLE__);

		method.executeWithVoidReturn();
	} else
		_implementation->clearGamble();
}

void SurveyTool::consentRadioactiveSample(PlayerCreature* player) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CONSENTRADIOACTIVESAMPLE__PLAYERCREATURE_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->consentRadioactiveSample(player);
}

void SurveyTool::sendRadioactiveWarning(PlayerCreature* player) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDRADIOACTIVEWARNING__PLAYERCREATURE_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendRadioactiveWarning(player);
}

void SurveyTool::sendRangeSui(PlayerCreature* player) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDRANGESUI__PLAYERCREATURE_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendRangeSui(player);
}

void SurveyTool::surveyCnodeMinigameSui(PlayerCreature* player) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SURVEYCNODEMINIGAMESUI__PLAYERCREATURE_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->surveyCnodeMinigameSui(player);
}

void SurveyTool::surveyCnodeMinigame(PlayerCreature* player, int value) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SURVEYCNODEMINIGAME__PLAYERCREATURE_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->surveyCnodeMinigame(player, value);
}

Coordinate* SurveyTool::getRichSampleLocation() {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		throw ObjectNotLocalException(this);

	} else
		return _implementation->getRichSampleLocation();
}

void SurveyTool::clearRichSampleLocation() {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_CLEARRICHSAMPLELOCATION__);

		method.executeWithVoidReturn();
	} else
		_implementation->clearRichSampleLocation();
}

void SurveyTool::setInUse(bool use) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SETINUSE__BOOL_);
		method.addBooleanParameter(use);

		method.executeWithVoidReturn();
	} else
		_implementation->setInUse(use);
}

bool SurveyTool::isInUse() {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_ISINUSE__);

		return method.executeWithBooleanReturn();
	} else
		return _implementation->isInUse();
}

void SurveyTool::surveyGnodeMinigameSui(PlayerCreature* player) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SURVEYGNODEMINIGAMESUI__PLAYERCREATURE_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->surveyGnodeMinigameSui(player);
}

void SurveyTool::surveyGnodeMinigame(PlayerCreature* player, int value) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SURVEYGNODEMINIGAME__PLAYERCREATURE_INT_);
		method.addObjectParameter(player);
		method.addSignedIntParameter(value);

		method.executeWithVoidReturn();
	} else
		_implementation->surveyGnodeMinigame(player, value);
}

int SurveyTool::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return _implementation->handleObjectMenuSelect(player, selectedID);
}

void SurveyTool::sendResourceListTo(PlayerCreature* player) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDRESOURCELISTTO__PLAYERCREATURE_);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		_implementation->sendResourceListTo(player);
}

void SurveyTool::sendSurveyTo(PlayerCreature* player, const String& resname) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDSURVEYTO__PLAYERCREATURE_STRING_);
		method.addObjectParameter(player);
		method.addAsciiParameter(resname);

		method.executeWithVoidReturn();
	} else
		_implementation->sendSurveyTo(player, resname);
}

void SurveyTool::sendSampleTo(PlayerCreature* player, const String& resname) {
	SurveyToolImplementation* _implementation = (SurveyToolImplementation*) _getImplementation();
	if (_implementation == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, RPC_SENDSAMPLETO__PLAYERCREATURE_STRING_);
		method.addObjectParameter(player);
		method.addAsciiParameter(resname);

		method.executeWithVoidReturn();
	} else
		_implementation->sendSampleTo(player, resname);
}

DistributedObjectServant* SurveyTool::_getImplementation() {

	_updated = true;
	return _impl;
}

void SurveyTool::_setImplementation(DistributedObjectServant* servant) {
	_impl = servant;
}

/*
 *	SurveyToolImplementation
 */

SurveyToolImplementation::SurveyToolImplementation(DummyConstructorParameter* param) : ToolTangibleObjectImplementation(param) {
	_initializeImplementation();
}


SurveyToolImplementation::~SurveyToolImplementation() {
}


void SurveyToolImplementation::finalize() {
}

void SurveyToolImplementation::_initializeImplementation() {
	_setClassHelper(SurveyToolHelper::instance());

	_this = NULL;

	_serializationHelperMethod();
}

void SurveyToolImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (SurveyTool*) stub;
	ToolTangibleObjectImplementation::_setStub(stub);
}

DistributedObjectStub* SurveyToolImplementation::_getStub() {
	return _this;
}

SurveyToolImplementation::operator const SurveyTool*() {
	return _this;
}

void SurveyToolImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void SurveyToolImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void SurveyToolImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void SurveyToolImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void SurveyToolImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void SurveyToolImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void SurveyToolImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void SurveyToolImplementation::_serializationHelperMethod() {
	ToolTangibleObjectImplementation::_serializationHelperMethod();

	_setClassName("SurveyTool");

}

void SurveyToolImplementation::readObject(ObjectInputStream* stream) {
	uint16 _varCount = stream->readShort();
	for (int i = 0; i < _varCount; ++i) {
		String _name;
		_name.parseFromBinaryStream(stream);

		uint16 _varSize = stream->readShort();

		int _currentOffset = stream->getOffset();

		if(SurveyToolImplementation::readObjectMember(stream, _name)) {
		}

		stream->setOffset(_currentOffset + _varSize);
	}

	initializeTransientMembers();
}

bool SurveyToolImplementation::readObjectMember(ObjectInputStream* stream, const String& _name) {
	if (ToolTangibleObjectImplementation::readObjectMember(stream, _name))
		return true;

	if (_name == "range") {
		TypeInfo<int >::parseFromBinaryStream(&range, stream);
		return true;
	}

	if (_name == "points") {
		TypeInfo<int >::parseFromBinaryStream(&points, stream);
		return true;
	}

	if (_name == "type") {
		TypeInfo<int >::parseFromBinaryStream(&type, stream);
		return true;
	}

	if (_name == "surveyType") {
		TypeInfo<String >::parseFromBinaryStream(&surveyType, stream);
		return true;
	}

	if (_name == "surveyAnimation") {
		TypeInfo<String >::parseFromBinaryStream(&surveyAnimation, stream);
		return true;
	}

	if (_name == "sampleAnimation") {
		TypeInfo<String >::parseFromBinaryStream(&sampleAnimation, stream);
		return true;
	}

	if (_name == "lastResourceSampleName") {
		TypeInfo<String >::parseFromBinaryStream(&lastResourceSampleName, stream);
		return true;
	}

	if (_name == "lastResourceSurveyName") {
		TypeInfo<String >::parseFromBinaryStream(&lastResourceSurveyName, stream);
		return true;
	}

	if (_name == "radioactiveOk") {
		TypeInfo<bool >::parseFromBinaryStream(&radioactiveOk, stream);
		return true;
	}

	if (_name == "doGamble") {
		TypeInfo<bool >::parseFromBinaryStream(&doGamble, stream);
		return true;
	}

	if (_name == "inUse") {
		TypeInfo<bool >::parseFromBinaryStream(&inUse, stream);
		return true;
	}


	return false;
}

void SurveyToolImplementation::writeObject(ObjectOutputStream* stream) {
	int _currentOffset = stream->getOffset();
	stream->writeShort(0);
	int _varCount = SurveyToolImplementation::writeObjectMembers(stream);
	stream->writeShort(_currentOffset, _varCount);
}

int SurveyToolImplementation::writeObjectMembers(ObjectOutputStream* stream) {
	String _name;
	int _offset;
	uint16 _totalSize;
	_name = "range";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&range, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "points";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&points, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "type";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<int >::toBinaryStream(&type, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "surveyType";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&surveyType, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "surveyAnimation";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&surveyAnimation, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "sampleAnimation";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&sampleAnimation, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "lastResourceSampleName";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&lastResourceSampleName, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "lastResourceSurveyName";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<String >::toBinaryStream(&lastResourceSurveyName, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "radioactiveOk";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&radioactiveOk, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "doGamble";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&doGamble, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);

	_name = "inUse";
	_name.toBinaryStream(stream);
	_offset = stream->getOffset();
	stream->writeShort(0);
	TypeInfo<bool >::toBinaryStream(&inUse, stream);
	_totalSize = (uint16) (stream->getOffset() - (_offset + 2));
	stream->writeShort(_offset, _totalSize);


	return 11 + ToolTangibleObjectImplementation::writeObjectMembers(stream);
}

SurveyToolImplementation::SurveyToolImplementation() {
	_initializeImplementation();
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		Logger.setLoggingName("SurveyTool");
	Logger::setLoggingName("SurveyTool");
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		radioactiveOk = false;
	radioactiveOk = false;
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		range = 0;
	range = 0;
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		doGamble = false;
	doGamble = false;
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		points = 0;
	points = 0;
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		points = 0;
	points = 0;
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		richSampleLocation = null;
	richSampleLocation = NULL;
}

void SurveyToolImplementation::initializeTransientMembers() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		super.initializeTransientMembers();
	ToolTangibleObjectImplementation::initializeTransientMembers();
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		richSampleLocation = null;
	richSampleLocation = NULL;
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		doGamble = false;
	doGamble = false;
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		inUse = false;
	inUse = false;
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		Logger.setLoggingName("SurveyTool");
	Logger::setLoggingName("SurveyTool");
}

void SurveyToolImplementation::updateCraftingValues(ManufactureSchematic* schematic) {
}

int SurveyToolImplementation::getRange() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		return range;
	return range;
}

int SurveyToolImplementation::getPoints() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		return points;
	return points;
}

bool SurveyToolImplementation::canSampleRadioactive() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		return radioactiveOk;
	return radioactiveOk;
}

bool SurveyToolImplementation::tryGamble() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		return doGamble == true;
	return doGamble == true;
}

void SurveyToolImplementation::clearGamble() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		doGamble = false;
	doGamble = false;
}

Coordinate* SurveyToolImplementation::getRichSampleLocation() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		return richSampleLocation;
	return richSampleLocation;
}

void SurveyToolImplementation::clearRichSampleLocation() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		richSampleLocation = null;
	richSampleLocation = NULL;
}

void SurveyToolImplementation::setInUse(bool use) {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		inUse = use;
	inUse = use;
}

bool SurveyToolImplementation::isInUse() {
	// server/zone/objects/tangible/tool/SurveyTool.idl():  		return inUse;
	return inUse;
}

/*
 *	SurveyToolAdapter
 */

SurveyToolAdapter::SurveyToolAdapter(SurveyToolImplementation* obj) : ToolTangibleObjectAdapter(obj) {
}

Packet* SurveyToolAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case RPC_INITIALIZETRANSIENTMEMBERS__:
		initializeTransientMembers();
		break;
	case RPC_SETRANGE__INT_:
		setRange(inv->getSignedIntParameter());
		break;
	case RPC_GETRANGE__:
		resp->insertSignedInt(getRange());
		break;
	case RPC_GETPOINTS__:
		resp->insertSignedInt(getPoints());
		break;
	case RPC_CANSAMPLERADIOACTIVE__:
		resp->insertBoolean(canSampleRadioactive());
		break;
	case RPC_TRYGAMBLE__:
		resp->insertBoolean(tryGamble());
		break;
	case RPC_CLEARGAMBLE__:
		clearGamble();
		break;
	case RPC_CONSENTRADIOACTIVESAMPLE__PLAYERCREATURE_:
		consentRadioactiveSample((PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_SENDRADIOACTIVEWARNING__PLAYERCREATURE_:
		sendRadioactiveWarning((PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_SENDRANGESUI__PLAYERCREATURE_:
		sendRangeSui((PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_SURVEYCNODEMINIGAMESUI__PLAYERCREATURE_:
		surveyCnodeMinigameSui((PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_SURVEYCNODEMINIGAME__PLAYERCREATURE_INT_:
		surveyCnodeMinigame((PlayerCreature*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case RPC_CLEARRICHSAMPLELOCATION__:
		clearRichSampleLocation();
		break;
	case RPC_SETINUSE__BOOL_:
		setInUse(inv->getBooleanParameter());
		break;
	case RPC_ISINUSE__:
		resp->insertBoolean(isInUse());
		break;
	case RPC_SURVEYGNODEMINIGAMESUI__PLAYERCREATURE_:
		surveyGnodeMinigameSui((PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_SURVEYGNODEMINIGAME__PLAYERCREATURE_INT_:
		surveyGnodeMinigame((PlayerCreature*) inv->getObjectParameter(), inv->getSignedIntParameter());
		break;
	case RPC_HANDLEOBJECTMENUSELECT__PLAYERCREATURE_BYTE_:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case RPC_SENDRESOURCELISTTO__PLAYERCREATURE_:
		sendResourceListTo((PlayerCreature*) inv->getObjectParameter());
		break;
	case RPC_SENDSURVEYTO__PLAYERCREATURE_STRING_:
		sendSurveyTo((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendSurveyTo__PlayerCreature_String_));
		break;
	case RPC_SENDSAMPLETO__PLAYERCREATURE_STRING_:
		sendSampleTo((PlayerCreature*) inv->getObjectParameter(), inv->getAsciiParameter(_param1_sendSampleTo__PlayerCreature_String_));
		break;
	default:
		return NULL;
	}

	return resp;
}

void SurveyToolAdapter::initializeTransientMembers() {
	((SurveyToolImplementation*) impl)->initializeTransientMembers();
}

void SurveyToolAdapter::setRange(int r) {
	((SurveyToolImplementation*) impl)->setRange(r);
}

int SurveyToolAdapter::getRange() {
	return ((SurveyToolImplementation*) impl)->getRange();
}

int SurveyToolAdapter::getPoints() {
	return ((SurveyToolImplementation*) impl)->getPoints();
}

bool SurveyToolAdapter::canSampleRadioactive() {
	return ((SurveyToolImplementation*) impl)->canSampleRadioactive();
}

bool SurveyToolAdapter::tryGamble() {
	return ((SurveyToolImplementation*) impl)->tryGamble();
}

void SurveyToolAdapter::clearGamble() {
	((SurveyToolImplementation*) impl)->clearGamble();
}

void SurveyToolAdapter::consentRadioactiveSample(PlayerCreature* player) {
	((SurveyToolImplementation*) impl)->consentRadioactiveSample(player);
}

void SurveyToolAdapter::sendRadioactiveWarning(PlayerCreature* player) {
	((SurveyToolImplementation*) impl)->sendRadioactiveWarning(player);
}

void SurveyToolAdapter::sendRangeSui(PlayerCreature* player) {
	((SurveyToolImplementation*) impl)->sendRangeSui(player);
}

void SurveyToolAdapter::surveyCnodeMinigameSui(PlayerCreature* player) {
	((SurveyToolImplementation*) impl)->surveyCnodeMinigameSui(player);
}

void SurveyToolAdapter::surveyCnodeMinigame(PlayerCreature* player, int value) {
	((SurveyToolImplementation*) impl)->surveyCnodeMinigame(player, value);
}

void SurveyToolAdapter::clearRichSampleLocation() {
	((SurveyToolImplementation*) impl)->clearRichSampleLocation();
}

void SurveyToolAdapter::setInUse(bool use) {
	((SurveyToolImplementation*) impl)->setInUse(use);
}

bool SurveyToolAdapter::isInUse() {
	return ((SurveyToolImplementation*) impl)->isInUse();
}

void SurveyToolAdapter::surveyGnodeMinigameSui(PlayerCreature* player) {
	((SurveyToolImplementation*) impl)->surveyGnodeMinigameSui(player);
}

void SurveyToolAdapter::surveyGnodeMinigame(PlayerCreature* player, int value) {
	((SurveyToolImplementation*) impl)->surveyGnodeMinigame(player, value);
}

int SurveyToolAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((SurveyToolImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void SurveyToolAdapter::sendResourceListTo(PlayerCreature* player) {
	((SurveyToolImplementation*) impl)->sendResourceListTo(player);
}

void SurveyToolAdapter::sendSurveyTo(PlayerCreature* player, const String& resname) {
	((SurveyToolImplementation*) impl)->sendSurveyTo(player, resname);
}

void SurveyToolAdapter::sendSampleTo(PlayerCreature* player, const String& resname) {
	((SurveyToolImplementation*) impl)->sendSampleTo(player, resname);
}

/*
 *	SurveyToolHelper
 */

SurveyToolHelper* SurveyToolHelper::staticInitializer = SurveyToolHelper::instance();

SurveyToolHelper::SurveyToolHelper() {
	className = "SurveyTool";

	Core::getObjectBroker()->registerClass(className, this);
}

void SurveyToolHelper::finalizeHelper() {
	SurveyToolHelper::finalize();
}

DistributedObject* SurveyToolHelper::instantiateObject() {
	return new SurveyTool(DummyConstructorParameter::instance());
}

DistributedObjectServant* SurveyToolHelper::instantiateServant() {
	return new SurveyToolImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* SurveyToolHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new SurveyToolAdapter((SurveyToolImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

