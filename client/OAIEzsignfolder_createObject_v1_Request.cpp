/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.37
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfolder_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_createObject_v1_Request::OAIEzsignfolder_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_createObject_v1_Request::OAIEzsignfolder_createObject_v1_Request() {
    this->initializeModel();
}

OAIEzsignfolder_createObject_v1_Request::~OAIEzsignfolder_createObject_v1_Request() {}

void OAIEzsignfolder_createObject_v1_Request::initializeModel() {

    m_obj_ezsignfolder_isSet = false;
    m_obj_ezsignfolder_isValid = false;

    m_obj_ezsignfolder_compound_isSet = false;
    m_obj_ezsignfolder_compound_isValid = false;
}

void OAIEzsignfolder_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsignfolder_isValid = ::OpenAPI::fromJsonValue(obj_ezsignfolder, json[QString("objEzsignfolder")]);
    m_obj_ezsignfolder_isSet = !json[QString("objEzsignfolder")].isNull() && m_obj_ezsignfolder_isValid;

    m_obj_ezsignfolder_compound_isValid = ::OpenAPI::fromJsonValue(obj_ezsignfolder_compound, json[QString("objEzsignfolderCompound")]);
    m_obj_ezsignfolder_compound_isSet = !json[QString("objEzsignfolderCompound")].isNull() && m_obj_ezsignfolder_compound_isValid;
}

QString OAIEzsignfolder_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsignfolder.isSet()) {
        obj.insert(QString("objEzsignfolder"), ::OpenAPI::toJsonValue(obj_ezsignfolder));
    }
    if (obj_ezsignfolder_compound.isSet()) {
        obj.insert(QString("objEzsignfolderCompound"), ::OpenAPI::toJsonValue(obj_ezsignfolder_compound));
    }
    return obj;
}

OAIEzsignfolder_Request OAIEzsignfolder_createObject_v1_Request::getObjEzsignfolder() const {
    return obj_ezsignfolder;
}
void OAIEzsignfolder_createObject_v1_Request::setObjEzsignfolder(const OAIEzsignfolder_Request &obj_ezsignfolder) {
    this->obj_ezsignfolder = obj_ezsignfolder;
    this->m_obj_ezsignfolder_isSet = true;
}

bool OAIEzsignfolder_createObject_v1_Request::is_obj_ezsignfolder_Set() const{
    return m_obj_ezsignfolder_isSet;
}

bool OAIEzsignfolder_createObject_v1_Request::is_obj_ezsignfolder_Valid() const{
    return m_obj_ezsignfolder_isValid;
}

OAIEzsignfolder_RequestCompound OAIEzsignfolder_createObject_v1_Request::getObjEzsignfolderCompound() const {
    return obj_ezsignfolder_compound;
}
void OAIEzsignfolder_createObject_v1_Request::setObjEzsignfolderCompound(const OAIEzsignfolder_RequestCompound &obj_ezsignfolder_compound) {
    this->obj_ezsignfolder_compound = obj_ezsignfolder_compound;
    this->m_obj_ezsignfolder_compound_isSet = true;
}

bool OAIEzsignfolder_createObject_v1_Request::is_obj_ezsignfolder_compound_Set() const{
    return m_obj_ezsignfolder_compound_isSet;
}

bool OAIEzsignfolder_createObject_v1_Request::is_obj_ezsignfolder_compound_Valid() const{
    return m_obj_ezsignfolder_compound_isValid;
}

bool OAIEzsignfolder_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsignfolder.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_ezsignfolder_compound.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
