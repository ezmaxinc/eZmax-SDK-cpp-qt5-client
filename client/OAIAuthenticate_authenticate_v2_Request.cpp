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

#include "OAIAuthenticate_authenticate_v2_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIAuthenticate_authenticate_v2_Request::OAIAuthenticate_authenticate_v2_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIAuthenticate_authenticate_v2_Request::OAIAuthenticate_authenticate_v2_Request() {
    this->initializeModel();
}

OAIAuthenticate_authenticate_v2_Request::~OAIAuthenticate_authenticate_v2_Request() {}

void OAIAuthenticate_authenticate_v2_Request::initializeModel() {

    m_pks_customer_code_isSet = false;
    m_pks_customer_code_isValid = false;

    m_s_email_address_isSet = false;
    m_s_email_address_isValid = false;

    m_s_user_loginname_isSet = false;
    m_s_user_loginname_isValid = false;

    m_s_password_isSet = false;
    m_s_password_isValid = false;
}

void OAIAuthenticate_authenticate_v2_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIAuthenticate_authenticate_v2_Request::fromJsonObject(QJsonObject json) {

    m_pks_customer_code_isValid = ::OpenAPI::fromJsonValue(pks_customer_code, json[QString("pksCustomerCode")]);
    m_pks_customer_code_isSet = !json[QString("pksCustomerCode")].isNull() && m_pks_customer_code_isValid;

    m_s_email_address_isValid = ::OpenAPI::fromJsonValue(s_email_address, json[QString("sEmailAddress")]);
    m_s_email_address_isSet = !json[QString("sEmailAddress")].isNull() && m_s_email_address_isValid;

    m_s_user_loginname_isValid = ::OpenAPI::fromJsonValue(s_user_loginname, json[QString("sUserLoginname")]);
    m_s_user_loginname_isSet = !json[QString("sUserLoginname")].isNull() && m_s_user_loginname_isValid;

    m_s_password_isValid = ::OpenAPI::fromJsonValue(s_password, json[QString("sPassword")]);
    m_s_password_isSet = !json[QString("sPassword")].isNull() && m_s_password_isValid;
}

QString OAIAuthenticate_authenticate_v2_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIAuthenticate_authenticate_v2_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_pks_customer_code_isSet) {
        obj.insert(QString("pksCustomerCode"), ::OpenAPI::toJsonValue(pks_customer_code));
    }
    if (m_s_email_address_isSet) {
        obj.insert(QString("sEmailAddress"), ::OpenAPI::toJsonValue(s_email_address));
    }
    if (m_s_user_loginname_isSet) {
        obj.insert(QString("sUserLoginname"), ::OpenAPI::toJsonValue(s_user_loginname));
    }
    if (m_s_password_isSet) {
        obj.insert(QString("sPassword"), ::OpenAPI::toJsonValue(s_password));
    }
    return obj;
}

QString OAIAuthenticate_authenticate_v2_Request::getPksCustomerCode() const {
    return pks_customer_code;
}
void OAIAuthenticate_authenticate_v2_Request::setPksCustomerCode(const QString &pks_customer_code) {
    this->pks_customer_code = pks_customer_code;
    this->m_pks_customer_code_isSet = true;
}

bool OAIAuthenticate_authenticate_v2_Request::is_pks_customer_code_Set() const{
    return m_pks_customer_code_isSet;
}

bool OAIAuthenticate_authenticate_v2_Request::is_pks_customer_code_Valid() const{
    return m_pks_customer_code_isValid;
}

QString OAIAuthenticate_authenticate_v2_Request::getSEmailAddress() const {
    return s_email_address;
}
void OAIAuthenticate_authenticate_v2_Request::setSEmailAddress(const QString &s_email_address) {
    this->s_email_address = s_email_address;
    this->m_s_email_address_isSet = true;
}

bool OAIAuthenticate_authenticate_v2_Request::is_s_email_address_Set() const{
    return m_s_email_address_isSet;
}

bool OAIAuthenticate_authenticate_v2_Request::is_s_email_address_Valid() const{
    return m_s_email_address_isValid;
}

QString OAIAuthenticate_authenticate_v2_Request::getSUserLoginname() const {
    return s_user_loginname;
}
void OAIAuthenticate_authenticate_v2_Request::setSUserLoginname(const QString &s_user_loginname) {
    this->s_user_loginname = s_user_loginname;
    this->m_s_user_loginname_isSet = true;
}

bool OAIAuthenticate_authenticate_v2_Request::is_s_user_loginname_Set() const{
    return m_s_user_loginname_isSet;
}

bool OAIAuthenticate_authenticate_v2_Request::is_s_user_loginname_Valid() const{
    return m_s_user_loginname_isValid;
}

QString OAIAuthenticate_authenticate_v2_Request::getSPassword() const {
    return s_password;
}
void OAIAuthenticate_authenticate_v2_Request::setSPassword(const QString &s_password) {
    this->s_password = s_password;
    this->m_s_password_isSet = true;
}

bool OAIAuthenticate_authenticate_v2_Request::is_s_password_Set() const{
    return m_s_password_isSet;
}

bool OAIAuthenticate_authenticate_v2_Request::is_s_password_Valid() const{
    return m_s_password_isValid;
}

bool OAIAuthenticate_authenticate_v2_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_pks_customer_code_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_email_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_user_loginname_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_password_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIAuthenticate_authenticate_v2_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_pks_customer_code_isValid && m_s_password_isValid && true;
}

} // namespace OpenAPI
