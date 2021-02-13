/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.
 *
 * The version of the OpenAPI document: 1.0.30
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAICommon_Audit.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Audit::OAICommon_Audit(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Audit::OAICommon_Audit() {
    this->initializeModel();
}

OAICommon_Audit::~OAICommon_Audit() {}

void OAICommon_Audit::initializeModel() {

    m_fki_user_id_created_isSet = false;
    m_fki_user_id_created_isValid = false;

    m_fki_user_id_modified_isSet = false;
    m_fki_user_id_modified_isValid = false;

    m_fki_apikey_id_created_isSet = false;
    m_fki_apikey_id_created_isValid = false;

    m_fki_apikey_id_modified_isSet = false;
    m_fki_apikey_id_modified_isValid = false;

    m_dt_created_date_isSet = false;
    m_dt_created_date_isValid = false;

    m_dt_modified_date_isSet = false;
    m_dt_modified_date_isValid = false;
}

void OAICommon_Audit::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Audit::fromJsonObject(QJsonObject json) {

    m_fki_user_id_created_isValid = ::OpenAPI::fromJsonValue(fki_user_id_created, json[QString("fkiUserIDCreated")]);
    m_fki_user_id_created_isSet = !json[QString("fkiUserIDCreated")].isNull() && m_fki_user_id_created_isValid;

    m_fki_user_id_modified_isValid = ::OpenAPI::fromJsonValue(fki_user_id_modified, json[QString("fkiUserIDModified")]);
    m_fki_user_id_modified_isSet = !json[QString("fkiUserIDModified")].isNull() && m_fki_user_id_modified_isValid;

    m_fki_apikey_id_created_isValid = ::OpenAPI::fromJsonValue(fki_apikey_id_created, json[QString("fkiApikeyIDCreated")]);
    m_fki_apikey_id_created_isSet = !json[QString("fkiApikeyIDCreated")].isNull() && m_fki_apikey_id_created_isValid;

    m_fki_apikey_id_modified_isValid = ::OpenAPI::fromJsonValue(fki_apikey_id_modified, json[QString("fkiApikeyIDModified")]);
    m_fki_apikey_id_modified_isSet = !json[QString("fkiApikeyIDModified")].isNull() && m_fki_apikey_id_modified_isValid;

    m_dt_created_date_isValid = ::OpenAPI::fromJsonValue(dt_created_date, json[QString("dtCreatedDate")]);
    m_dt_created_date_isSet = !json[QString("dtCreatedDate")].isNull() && m_dt_created_date_isValid;

    m_dt_modified_date_isValid = ::OpenAPI::fromJsonValue(dt_modified_date, json[QString("dtModifiedDate")]);
    m_dt_modified_date_isSet = !json[QString("dtModifiedDate")].isNull() && m_dt_modified_date_isValid;
}

QString OAICommon_Audit::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Audit::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_user_id_created_isSet) {
        obj.insert(QString("fkiUserIDCreated"), ::OpenAPI::toJsonValue(fki_user_id_created));
    }
    if (m_fki_user_id_modified_isSet) {
        obj.insert(QString("fkiUserIDModified"), ::OpenAPI::toJsonValue(fki_user_id_modified));
    }
    if (m_fki_apikey_id_created_isSet) {
        obj.insert(QString("fkiApikeyIDCreated"), ::OpenAPI::toJsonValue(fki_apikey_id_created));
    }
    if (m_fki_apikey_id_modified_isSet) {
        obj.insert(QString("fkiApikeyIDModified"), ::OpenAPI::toJsonValue(fki_apikey_id_modified));
    }
    if (m_dt_created_date_isSet) {
        obj.insert(QString("dtCreatedDate"), ::OpenAPI::toJsonValue(dt_created_date));
    }
    if (m_dt_modified_date_isSet) {
        obj.insert(QString("dtModifiedDate"), ::OpenAPI::toJsonValue(dt_modified_date));
    }
    return obj;
}

qint32 OAICommon_Audit::getFkiUserIdCreated() const {
    return fki_user_id_created;
}
void OAICommon_Audit::setFkiUserIdCreated(const qint32 &fki_user_id_created) {
    this->fki_user_id_created = fki_user_id_created;
    this->m_fki_user_id_created_isSet = true;
}

bool OAICommon_Audit::is_fki_user_id_created_Set() const{
    return m_fki_user_id_created_isSet;
}

bool OAICommon_Audit::is_fki_user_id_created_Valid() const{
    return m_fki_user_id_created_isValid;
}

qint32 OAICommon_Audit::getFkiUserIdModified() const {
    return fki_user_id_modified;
}
void OAICommon_Audit::setFkiUserIdModified(const qint32 &fki_user_id_modified) {
    this->fki_user_id_modified = fki_user_id_modified;
    this->m_fki_user_id_modified_isSet = true;
}

bool OAICommon_Audit::is_fki_user_id_modified_Set() const{
    return m_fki_user_id_modified_isSet;
}

bool OAICommon_Audit::is_fki_user_id_modified_Valid() const{
    return m_fki_user_id_modified_isValid;
}

qint32 OAICommon_Audit::getFkiApikeyIdCreated() const {
    return fki_apikey_id_created;
}
void OAICommon_Audit::setFkiApikeyIdCreated(const qint32 &fki_apikey_id_created) {
    this->fki_apikey_id_created = fki_apikey_id_created;
    this->m_fki_apikey_id_created_isSet = true;
}

bool OAICommon_Audit::is_fki_apikey_id_created_Set() const{
    return m_fki_apikey_id_created_isSet;
}

bool OAICommon_Audit::is_fki_apikey_id_created_Valid() const{
    return m_fki_apikey_id_created_isValid;
}

qint32 OAICommon_Audit::getFkiApikeyIdModified() const {
    return fki_apikey_id_modified;
}
void OAICommon_Audit::setFkiApikeyIdModified(const qint32 &fki_apikey_id_modified) {
    this->fki_apikey_id_modified = fki_apikey_id_modified;
    this->m_fki_apikey_id_modified_isSet = true;
}

bool OAICommon_Audit::is_fki_apikey_id_modified_Set() const{
    return m_fki_apikey_id_modified_isSet;
}

bool OAICommon_Audit::is_fki_apikey_id_modified_Valid() const{
    return m_fki_apikey_id_modified_isValid;
}

QString OAICommon_Audit::getDtCreatedDate() const {
    return dt_created_date;
}
void OAICommon_Audit::setDtCreatedDate(const QString &dt_created_date) {
    this->dt_created_date = dt_created_date;
    this->m_dt_created_date_isSet = true;
}

bool OAICommon_Audit::is_dt_created_date_Set() const{
    return m_dt_created_date_isSet;
}

bool OAICommon_Audit::is_dt_created_date_Valid() const{
    return m_dt_created_date_isValid;
}

QString OAICommon_Audit::getDtModifiedDate() const {
    return dt_modified_date;
}
void OAICommon_Audit::setDtModifiedDate(const QString &dt_modified_date) {
    this->dt_modified_date = dt_modified_date;
    this->m_dt_modified_date_isSet = true;
}

bool OAICommon_Audit::is_dt_modified_date_Set() const{
    return m_dt_modified_date_isSet;
}

bool OAICommon_Audit::is_dt_modified_date_Valid() const{
    return m_dt_modified_date_isValid;
}

bool OAICommon_Audit::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_user_id_created_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_user_id_modified_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_apikey_id_created_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_apikey_id_modified_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_created_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_modified_date_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Audit::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_user_id_created_isValid && m_fki_user_id_modified_isValid && m_dt_created_date_isValid && m_dt_modified_date_isValid && true;
}

} // namespace OpenAPI