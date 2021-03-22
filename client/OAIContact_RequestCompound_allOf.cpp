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

#include "OAIContact_RequestCompound_allOf.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIContact_RequestCompound_allOf::OAIContact_RequestCompound_allOf(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIContact_RequestCompound_allOf::OAIContact_RequestCompound_allOf() {
    this->initializeModel();
}

OAIContact_RequestCompound_allOf::~OAIContact_RequestCompound_allOf() {}

void OAIContact_RequestCompound_allOf::initializeModel() {

    m_obj_contactinformations_isSet = false;
    m_obj_contactinformations_isValid = false;
}

void OAIContact_RequestCompound_allOf::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIContact_RequestCompound_allOf::fromJsonObject(QJsonObject json) {

    m_obj_contactinformations_isValid = ::OpenAPI::fromJsonValue(obj_contactinformations, json[QString("objContactinformations")]);
    m_obj_contactinformations_isSet = !json[QString("objContactinformations")].isNull() && m_obj_contactinformations_isValid;
}

QString OAIContact_RequestCompound_allOf::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIContact_RequestCompound_allOf::asJsonObject() const {
    QJsonObject obj;
    if (obj_contactinformations.isSet()) {
        obj.insert(QString("objContactinformations"), ::OpenAPI::toJsonValue(obj_contactinformations));
    }
    return obj;
}

OAIContactinformations_RequestCompound OAIContact_RequestCompound_allOf::getObjContactinformations() const {
    return obj_contactinformations;
}
void OAIContact_RequestCompound_allOf::setObjContactinformations(const OAIContactinformations_RequestCompound &obj_contactinformations) {
    this->obj_contactinformations = obj_contactinformations;
    this->m_obj_contactinformations_isSet = true;
}

bool OAIContact_RequestCompound_allOf::is_obj_contactinformations_Set() const{
    return m_obj_contactinformations_isSet;
}

bool OAIContact_RequestCompound_allOf::is_obj_contactinformations_Valid() const{
    return m_obj_contactinformations_isValid;
}

bool OAIContact_RequestCompound_allOf::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_contactinformations.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIContact_RequestCompound_allOf::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_contactinformations_isValid && true;
}

} // namespace OpenAPI
