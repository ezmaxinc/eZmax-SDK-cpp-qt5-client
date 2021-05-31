/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.44
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIMultilingual_ApikeyDescription.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIMultilingual_ApikeyDescription::OAIMultilingual_ApikeyDescription(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMultilingual_ApikeyDescription::OAIMultilingual_ApikeyDescription() {
    this->initializeModel();
}

OAIMultilingual_ApikeyDescription::~OAIMultilingual_ApikeyDescription() {}

void OAIMultilingual_ApikeyDescription::initializeModel() {

    m_s_apikey_description1_isSet = false;
    m_s_apikey_description1_isValid = false;

    m_s_apikey_description2_isSet = false;
    m_s_apikey_description2_isValid = false;
}

void OAIMultilingual_ApikeyDescription::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMultilingual_ApikeyDescription::fromJsonObject(QJsonObject json) {

    m_s_apikey_description1_isValid = ::OpenAPI::fromJsonValue(s_apikey_description1, json[QString("sApikeyDescription1")]);
    m_s_apikey_description1_isSet = !json[QString("sApikeyDescription1")].isNull() && m_s_apikey_description1_isValid;

    m_s_apikey_description2_isValid = ::OpenAPI::fromJsonValue(s_apikey_description2, json[QString("sApikeyDescription2")]);
    m_s_apikey_description2_isSet = !json[QString("sApikeyDescription2")].isNull() && m_s_apikey_description2_isValid;
}

QString OAIMultilingual_ApikeyDescription::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMultilingual_ApikeyDescription::asJsonObject() const {
    QJsonObject obj;
    if (m_s_apikey_description1_isSet) {
        obj.insert(QString("sApikeyDescription1"), ::OpenAPI::toJsonValue(s_apikey_description1));
    }
    if (m_s_apikey_description2_isSet) {
        obj.insert(QString("sApikeyDescription2"), ::OpenAPI::toJsonValue(s_apikey_description2));
    }
    return obj;
}

QString OAIMultilingual_ApikeyDescription::getSApikeyDescription1() const {
    return s_apikey_description1;
}
void OAIMultilingual_ApikeyDescription::setSApikeyDescription1(const QString &s_apikey_description1) {
    this->s_apikey_description1 = s_apikey_description1;
    this->m_s_apikey_description1_isSet = true;
}

bool OAIMultilingual_ApikeyDescription::is_s_apikey_description1_Set() const{
    return m_s_apikey_description1_isSet;
}

bool OAIMultilingual_ApikeyDescription::is_s_apikey_description1_Valid() const{
    return m_s_apikey_description1_isValid;
}

QString OAIMultilingual_ApikeyDescription::getSApikeyDescription2() const {
    return s_apikey_description2;
}
void OAIMultilingual_ApikeyDescription::setSApikeyDescription2(const QString &s_apikey_description2) {
    this->s_apikey_description2 = s_apikey_description2;
    this->m_s_apikey_description2_isSet = true;
}

bool OAIMultilingual_ApikeyDescription::is_s_apikey_description2_Set() const{
    return m_s_apikey_description2_isSet;
}

bool OAIMultilingual_ApikeyDescription::is_s_apikey_description2_Valid() const{
    return m_s_apikey_description2_isValid;
}

bool OAIMultilingual_ApikeyDescription::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_apikey_description1_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_apikey_description2_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMultilingual_ApikeyDescription::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
