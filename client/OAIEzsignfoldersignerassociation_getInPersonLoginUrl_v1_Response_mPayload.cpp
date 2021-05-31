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

#include "OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::~OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload() {}

void OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::initializeModel() {

    m_s_login_url_isSet = false;
    m_s_login_url_isValid = false;
}

void OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

    m_s_login_url_isValid = ::OpenAPI::fromJsonValue(s_login_url, json[QString("sLoginUrl")]);
    m_s_login_url_isSet = !json[QString("sLoginUrl")].isNull() && m_s_login_url_isValid;
}

QString OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
    if (m_s_login_url_isSet) {
        obj.insert(QString("sLoginUrl"), ::OpenAPI::toJsonValue(s_login_url));
    }
    return obj;
}

QString OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::getSLoginUrl() const {
    return s_login_url;
}
void OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::setSLoginUrl(const QString &s_login_url) {
    this->s_login_url = s_login_url;
    this->m_s_login_url_isSet = true;
}

bool OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::is_s_login_url_Set() const{
    return m_s_login_url_isSet;
}

bool OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::is_s_login_url_Valid() const{
    return m_s_login_url_isValid;
}

bool OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_s_login_url_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_s_login_url_isValid && true;
}

} // namespace OpenAPI
