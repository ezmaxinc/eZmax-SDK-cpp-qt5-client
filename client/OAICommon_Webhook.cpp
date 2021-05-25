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

#include "OAICommon_Webhook.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAICommon_Webhook::OAICommon_Webhook(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAICommon_Webhook::OAICommon_Webhook() {
    this->initializeModel();
}

OAICommon_Webhook::~OAICommon_Webhook() {}

void OAICommon_Webhook::initializeModel() {

    m_obj_webhook_isSet = false;
    m_obj_webhook_isValid = false;

    m_a_obj_attempt_isSet = false;
    m_a_obj_attempt_isValid = false;
}

void OAICommon_Webhook::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAICommon_Webhook::fromJsonObject(QJsonObject json) {

    m_obj_webhook_isValid = ::OpenAPI::fromJsonValue(obj_webhook, json[QString("objWebhook")]);
    m_obj_webhook_isSet = !json[QString("objWebhook")].isNull() && m_obj_webhook_isValid;

    m_a_obj_attempt_isValid = ::OpenAPI::fromJsonValue(a_obj_attempt, json[QString("a_objAttempt")]);
    m_a_obj_attempt_isSet = !json[QString("a_objAttempt")].isNull() && m_a_obj_attempt_isValid;
}

QString OAICommon_Webhook::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAICommon_Webhook::asJsonObject() const {
    QJsonObject obj;
    if (obj_webhook.isSet()) {
        obj.insert(QString("objWebhook"), ::OpenAPI::toJsonValue(obj_webhook));
    }
    if (a_obj_attempt.size() > 0) {
        obj.insert(QString("a_objAttempt"), ::OpenAPI::toJsonValue(a_obj_attempt));
    }
    return obj;
}

OAIWebhook_Response OAICommon_Webhook::getObjWebhook() const {
    return obj_webhook;
}
void OAICommon_Webhook::setObjWebhook(const OAIWebhook_Response &obj_webhook) {
    this->obj_webhook = obj_webhook;
    this->m_obj_webhook_isSet = true;
}

bool OAICommon_Webhook::is_obj_webhook_Set() const{
    return m_obj_webhook_isSet;
}

bool OAICommon_Webhook::is_obj_webhook_Valid() const{
    return m_obj_webhook_isValid;
}

QList<OAIAttempt_Response> OAICommon_Webhook::getAObjAttempt() const {
    return a_obj_attempt;
}
void OAICommon_Webhook::setAObjAttempt(const QList<OAIAttempt_Response> &a_obj_attempt) {
    this->a_obj_attempt = a_obj_attempt;
    this->m_a_obj_attempt_isSet = true;
}

bool OAICommon_Webhook::is_a_obj_attempt_Set() const{
    return m_a_obj_attempt_isSet;
}

bool OAICommon_Webhook::is_a_obj_attempt_Valid() const{
    return m_a_obj_attempt_isValid;
}

bool OAICommon_Webhook::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_webhook.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (a_obj_attempt.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAICommon_Webhook::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_obj_webhook_isValid && m_a_obj_attempt_isValid && true;
}

} // namespace OpenAPI
