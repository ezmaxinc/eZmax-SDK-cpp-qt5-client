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

#include "OAICommon_Response_objDebugPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Response_objDebugPayload::OAICommon_Response_objDebugPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Response_objDebugPayload::OAICommon_Response_objDebugPayload() {
    this->initializeModel();
}

OAICommon_Response_objDebugPayload::~OAICommon_Response_objDebugPayload() {}

void OAICommon_Response_objDebugPayload::initializeModel() {

    m_i_version_min_isSet = false;
    m_i_version_min_isValid = false;

    m_i_version_max_isSet = false;
    m_i_version_max_isValid = false;

    m_a_required_permissions_isSet = false;
    m_a_required_permissions_isValid = false;
}

void OAICommon_Response_objDebugPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Response_objDebugPayload::fromJsonObject(QJsonObject json) {

    m_i_version_min_isValid = ::OpenAPI::fromJsonValue(i_version_min, json[QString("iVersionMin")]);
    m_i_version_min_isSet = !json[QString("iVersionMin")].isNull() && m_i_version_min_isValid;

    m_i_version_max_isValid = ::OpenAPI::fromJsonValue(i_version_max, json[QString("iVersionMax")]);
    m_i_version_max_isSet = !json[QString("iVersionMax")].isNull() && m_i_version_max_isValid;

    m_a_required_permissions_isValid = ::OpenAPI::fromJsonValue(a_required_permissions, json[QString("a_RequiredPermissions")]);
    m_a_required_permissions_isSet = !json[QString("a_RequiredPermissions")].isNull() && m_a_required_permissions_isValid;
}

QString OAICommon_Response_objDebugPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Response_objDebugPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_i_version_min_isSet) {
        obj.insert(QString("iVersionMin"), ::OpenAPI::toJsonValue(i_version_min));
    }
    if (m_i_version_max_isSet) {
        obj.insert(QString("iVersionMax"), ::OpenAPI::toJsonValue(i_version_max));
    }
    if (a_required_permissions.size() > 0) {
        obj.insert(QString("a_RequiredPermissions"), ::OpenAPI::toJsonValue(a_required_permissions));
    }
    return obj;
}

qint32 OAICommon_Response_objDebugPayload::getIVersionMin() const {
    return i_version_min;
}
void OAICommon_Response_objDebugPayload::setIVersionMin(const qint32 &i_version_min) {
    this->i_version_min = i_version_min;
    this->m_i_version_min_isSet = true;
}

bool OAICommon_Response_objDebugPayload::is_i_version_min_Set() const{
    return m_i_version_min_isSet;
}

bool OAICommon_Response_objDebugPayload::is_i_version_min_Valid() const{
    return m_i_version_min_isValid;
}

qint32 OAICommon_Response_objDebugPayload::getIVersionMax() const {
    return i_version_max;
}
void OAICommon_Response_objDebugPayload::setIVersionMax(const qint32 &i_version_max) {
    this->i_version_max = i_version_max;
    this->m_i_version_max_isSet = true;
}

bool OAICommon_Response_objDebugPayload::is_i_version_max_Set() const{
    return m_i_version_max_isSet;
}

bool OAICommon_Response_objDebugPayload::is_i_version_max_Valid() const{
    return m_i_version_max_isValid;
}

QList<qint32> OAICommon_Response_objDebugPayload::getARequiredPermissions() const {
    return a_required_permissions;
}
void OAICommon_Response_objDebugPayload::setARequiredPermissions(const QList<qint32> &a_required_permissions) {
    this->a_required_permissions = a_required_permissions;
    this->m_a_required_permissions_isSet = true;
}

bool OAICommon_Response_objDebugPayload::is_a_required_permissions_Set() const{
    return m_a_required_permissions_isSet;
}

bool OAICommon_Response_objDebugPayload::is_a_required_permissions_Valid() const{
    return m_a_required_permissions_isValid;
}

bool OAICommon_Response_objDebugPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_i_version_min_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_version_max_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_required_permissions.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Response_objDebugPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_version_min_isValid && m_i_version_max_isValid && m_a_required_permissions_isValid && true;
}

} // namespace OpenAPI
