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

#include "OAIContactinformations_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIContactinformations_Request::OAIContactinformations_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIContactinformations_Request::OAIContactinformations_Request() {
    this->initializeModel();
}

OAIContactinformations_Request::~OAIContactinformations_Request() {}

void OAIContactinformations_Request::initializeModel() {

    m_i_address_default_isSet = false;
    m_i_address_default_isValid = false;

    m_i_phone_default_isSet = false;
    m_i_phone_default_isValid = false;

    m_i_email_default_isSet = false;
    m_i_email_default_isValid = false;

    m_i_website_default_isSet = false;
    m_i_website_default_isValid = false;
}

void OAIContactinformations_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIContactinformations_Request::fromJsonObject(QJsonObject json) {

    m_i_address_default_isValid = ::OpenAPI::fromJsonValue(i_address_default, json[QString("iAddressDefault")]);
    m_i_address_default_isSet = !json[QString("iAddressDefault")].isNull() && m_i_address_default_isValid;

    m_i_phone_default_isValid = ::OpenAPI::fromJsonValue(i_phone_default, json[QString("iPhoneDefault")]);
    m_i_phone_default_isSet = !json[QString("iPhoneDefault")].isNull() && m_i_phone_default_isValid;

    m_i_email_default_isValid = ::OpenAPI::fromJsonValue(i_email_default, json[QString("iEmailDefault")]);
    m_i_email_default_isSet = !json[QString("iEmailDefault")].isNull() && m_i_email_default_isValid;

    m_i_website_default_isValid = ::OpenAPI::fromJsonValue(i_website_default, json[QString("iWebsiteDefault")]);
    m_i_website_default_isSet = !json[QString("iWebsiteDefault")].isNull() && m_i_website_default_isValid;
}

QString OAIContactinformations_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIContactinformations_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_i_address_default_isSet) {
        obj.insert(QString("iAddressDefault"), ::OpenAPI::toJsonValue(i_address_default));
    }
    if (m_i_phone_default_isSet) {
        obj.insert(QString("iPhoneDefault"), ::OpenAPI::toJsonValue(i_phone_default));
    }
    if (m_i_email_default_isSet) {
        obj.insert(QString("iEmailDefault"), ::OpenAPI::toJsonValue(i_email_default));
    }
    if (m_i_website_default_isSet) {
        obj.insert(QString("iWebsiteDefault"), ::OpenAPI::toJsonValue(i_website_default));
    }
    return obj;
}

qint32 OAIContactinformations_Request::getIAddressDefault() const {
    return i_address_default;
}
void OAIContactinformations_Request::setIAddressDefault(const qint32 &i_address_default) {
    this->i_address_default = i_address_default;
    this->m_i_address_default_isSet = true;
}

bool OAIContactinformations_Request::is_i_address_default_Set() const{
    return m_i_address_default_isSet;
}

bool OAIContactinformations_Request::is_i_address_default_Valid() const{
    return m_i_address_default_isValid;
}

qint32 OAIContactinformations_Request::getIPhoneDefault() const {
    return i_phone_default;
}
void OAIContactinformations_Request::setIPhoneDefault(const qint32 &i_phone_default) {
    this->i_phone_default = i_phone_default;
    this->m_i_phone_default_isSet = true;
}

bool OAIContactinformations_Request::is_i_phone_default_Set() const{
    return m_i_phone_default_isSet;
}

bool OAIContactinformations_Request::is_i_phone_default_Valid() const{
    return m_i_phone_default_isValid;
}

qint32 OAIContactinformations_Request::getIEmailDefault() const {
    return i_email_default;
}
void OAIContactinformations_Request::setIEmailDefault(const qint32 &i_email_default) {
    this->i_email_default = i_email_default;
    this->m_i_email_default_isSet = true;
}

bool OAIContactinformations_Request::is_i_email_default_Set() const{
    return m_i_email_default_isSet;
}

bool OAIContactinformations_Request::is_i_email_default_Valid() const{
    return m_i_email_default_isValid;
}

qint32 OAIContactinformations_Request::getIWebsiteDefault() const {
    return i_website_default;
}
void OAIContactinformations_Request::setIWebsiteDefault(const qint32 &i_website_default) {
    this->i_website_default = i_website_default;
    this->m_i_website_default_isSet = true;
}

bool OAIContactinformations_Request::is_i_website_default_Set() const{
    return m_i_website_default_isSet;
}

bool OAIContactinformations_Request::is_i_website_default_Valid() const{
    return m_i_website_default_isValid;
}

bool OAIContactinformations_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_i_address_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_phone_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_email_default_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_website_default_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIContactinformations_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_i_address_default_isValid && m_i_phone_default_isValid && m_i_email_default_isValid && m_i_website_default_isValid && true;
}

} // namespace OpenAPI
