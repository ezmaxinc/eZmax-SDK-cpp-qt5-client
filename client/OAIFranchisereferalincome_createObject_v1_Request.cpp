/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.38
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIFranchisereferalincome_createObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIFranchisereferalincome_createObject_v1_Request::OAIFranchisereferalincome_createObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIFranchisereferalincome_createObject_v1_Request::OAIFranchisereferalincome_createObject_v1_Request() {
    this->initializeModel();
}

OAIFranchisereferalincome_createObject_v1_Request::~OAIFranchisereferalincome_createObject_v1_Request() {}

void OAIFranchisereferalincome_createObject_v1_Request::initializeModel() {

    m_obj_franchisereferalincome_isSet = false;
    m_obj_franchisereferalincome_isValid = false;

    m_obj_franchisereferalincome_compound_isSet = false;
    m_obj_franchisereferalincome_compound_isValid = false;
}

void OAIFranchisereferalincome_createObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIFranchisereferalincome_createObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_franchisereferalincome_isValid = ::OpenAPI::fromJsonValue(obj_franchisereferalincome, json[QString("objFranchisereferalincome")]);
    m_obj_franchisereferalincome_isSet = !json[QString("objFranchisereferalincome")].isNull() && m_obj_franchisereferalincome_isValid;

    m_obj_franchisereferalincome_compound_isValid = ::OpenAPI::fromJsonValue(obj_franchisereferalincome_compound, json[QString("objFranchisereferalincomeCompound")]);
    m_obj_franchisereferalincome_compound_isSet = !json[QString("objFranchisereferalincomeCompound")].isNull() && m_obj_franchisereferalincome_compound_isValid;
}

QString OAIFranchisereferalincome_createObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIFranchisereferalincome_createObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_franchisereferalincome.isSet()) {
        obj.insert(QString("objFranchisereferalincome"), ::OpenAPI::toJsonValue(obj_franchisereferalincome));
    }
    if (obj_franchisereferalincome_compound.isSet()) {
        obj.insert(QString("objFranchisereferalincomeCompound"), ::OpenAPI::toJsonValue(obj_franchisereferalincome_compound));
    }
    return obj;
}

OAIFranchisereferalincome_Request OAIFranchisereferalincome_createObject_v1_Request::getObjFranchisereferalincome() const {
    return obj_franchisereferalincome;
}
void OAIFranchisereferalincome_createObject_v1_Request::setObjFranchisereferalincome(const OAIFranchisereferalincome_Request &obj_franchisereferalincome) {
    this->obj_franchisereferalincome = obj_franchisereferalincome;
    this->m_obj_franchisereferalincome_isSet = true;
}

bool OAIFranchisereferalincome_createObject_v1_Request::is_obj_franchisereferalincome_Set() const{
    return m_obj_franchisereferalincome_isSet;
}

bool OAIFranchisereferalincome_createObject_v1_Request::is_obj_franchisereferalincome_Valid() const{
    return m_obj_franchisereferalincome_isValid;
}

OAIFranchisereferalincome_RequestCompound OAIFranchisereferalincome_createObject_v1_Request::getObjFranchisereferalincomeCompound() const {
    return obj_franchisereferalincome_compound;
}
void OAIFranchisereferalincome_createObject_v1_Request::setObjFranchisereferalincomeCompound(const OAIFranchisereferalincome_RequestCompound &obj_franchisereferalincome_compound) {
    this->obj_franchisereferalincome_compound = obj_franchisereferalincome_compound;
    this->m_obj_franchisereferalincome_compound_isSet = true;
}

bool OAIFranchisereferalincome_createObject_v1_Request::is_obj_franchisereferalincome_compound_Set() const{
    return m_obj_franchisereferalincome_compound_isSet;
}

bool OAIFranchisereferalincome_createObject_v1_Request::is_obj_franchisereferalincome_compound_Valid() const{
    return m_obj_franchisereferalincome_compound_isValid;
}

bool OAIFranchisereferalincome_createObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_franchisereferalincome.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (obj_franchisereferalincome_compound.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIFranchisereferalincome_createObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
