/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.43
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIApikey_Response.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIApikey_Response::OAIApikey_Response(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIApikey_Response::OAIApikey_Response() {
    this->initializeModel();
}

OAIApikey_Response::~OAIApikey_Response() {}

void OAIApikey_Response::initializeModel() {

    m_obj_apikey_description_isSet = false;
    m_obj_apikey_description_isValid = false;

    m_s_computed_token_isSet = false;
    m_s_computed_token_isValid = false;

    m_pki_apikey_id_isSet = false;
    m_pki_apikey_id_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void OAIApikey_Response::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIApikey_Response::fromJsonObject(QJsonObject json) {

    m_obj_apikey_description_isValid = ::OpenAPI::fromJsonValue(obj_apikey_description, json[QString("objApikeyDescription")]);
    m_obj_apikey_description_isSet = !json[QString("objApikeyDescription")].isNull() && m_obj_apikey_description_isValid;

    m_s_computed_token_isValid = ::OpenAPI::fromJsonValue(s_computed_token, json[QString("sComputedToken")]);
    m_s_computed_token_isSet = !json[QString("sComputedToken")].isNull() && m_s_computed_token_isValid;

    m_pki_apikey_id_isValid = ::OpenAPI::fromJsonValue(pki_apikey_id, json[QString("pkiApikeyID")]);
    m_pki_apikey_id_isSet = !json[QString("pkiApikeyID")].isNull() && m_pki_apikey_id_isValid;

    m_obj_audit_isValid = ::OpenAPI::fromJsonValue(obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString OAIApikey_Response::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIApikey_Response::asJsonObject() const {
    QJsonObject obj;
    if (obj_apikey_description.isSet()) {
        obj.insert(QString("objApikeyDescription"), ::OpenAPI::toJsonValue(obj_apikey_description));
    }
    if (m_s_computed_token_isSet) {
        obj.insert(QString("sComputedToken"), ::OpenAPI::toJsonValue(s_computed_token));
    }
    if (m_pki_apikey_id_isSet) {
        obj.insert(QString("pkiApikeyID"), ::OpenAPI::toJsonValue(pki_apikey_id));
    }
    if (obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::OpenAPI::toJsonValue(obj_audit));
    }
    return obj;
}

OAIMultilingual_ApikeyDescription OAIApikey_Response::getObjApikeyDescription() const {
    return obj_apikey_description;
}
void OAIApikey_Response::setObjApikeyDescription(const OAIMultilingual_ApikeyDescription &obj_apikey_description) {
    this->obj_apikey_description = obj_apikey_description;
    this->m_obj_apikey_description_isSet = true;
}

bool OAIApikey_Response::is_obj_apikey_description_Set() const{
    return m_obj_apikey_description_isSet;
}

bool OAIApikey_Response::is_obj_apikey_description_Valid() const{
    return m_obj_apikey_description_isValid;
}

QString OAIApikey_Response::getSComputedToken() const {
    return s_computed_token;
}
void OAIApikey_Response::setSComputedToken(const QString &s_computed_token) {
    this->s_computed_token = s_computed_token;
    this->m_s_computed_token_isSet = true;
}

bool OAIApikey_Response::is_s_computed_token_Set() const{
    return m_s_computed_token_isSet;
}

bool OAIApikey_Response::is_s_computed_token_Valid() const{
    return m_s_computed_token_isValid;
}

qint32 OAIApikey_Response::getPkiApikeyId() const {
    return pki_apikey_id;
}
void OAIApikey_Response::setPkiApikeyId(const qint32 &pki_apikey_id) {
    this->pki_apikey_id = pki_apikey_id;
    this->m_pki_apikey_id_isSet = true;
}

bool OAIApikey_Response::is_pki_apikey_id_Set() const{
    return m_pki_apikey_id_isSet;
}

bool OAIApikey_Response::is_pki_apikey_id_Valid() const{
    return m_pki_apikey_id_isValid;
}

OAICommon_Audit OAIApikey_Response::getObjAudit() const {
    return obj_audit;
}
void OAIApikey_Response::setObjAudit(const OAICommon_Audit &obj_audit) {
    this->obj_audit = obj_audit;
    this->m_obj_audit_isSet = true;
}

bool OAIApikey_Response::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAIApikey_Response::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool OAIApikey_Response::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_apikey_description.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_computed_token_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_apikey_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIApikey_Response::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_apikey_description_isValid && m_pki_apikey_id_isValid && m_obj_audit_isValid && true;
}

} // namespace OpenAPI
