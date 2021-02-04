/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.  We provide SDKs for customers. They are generated using OpenAPI codegen, we encourage customers to use them as we also provide samples for them.  You can choose to build your own implementation manually or can use any compatible OpenAPI 3.0 generator like Swagger Codegen, OpenAPI codegen or any commercial generators.  If you need helping understanding how to use this API, don't waste too much time looking for it. Contact support-api@ezmax.ca, we're here to help. We are developpers so we know programmers don't like bad documentation. If you don't find what you need in the documentation, let us know, we'll improve it and put you rapidly up on track.
 *
 * The version of the OpenAPI document: 1.0.28
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIField_ePhoneType.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIField_ePhoneType::OAIField_ePhoneType(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIField_ePhoneType::OAIField_ePhoneType() {
    this->initializeModel();
}

OAIField_ePhoneType::~OAIField_ePhoneType() {}

void OAIField_ePhoneType::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIField_ePhoneType::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIField_ePhoneType::fromJson(QString jsonString) {
    
    if ( jsonString.compare("Local", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_ePhoneType::LOCAL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("International", Qt::CaseInsensitive) == 0) {
        m_value = eOAIField_ePhoneType::INTERNATIONAL;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIField_ePhoneType::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIField_ePhoneType::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIField_ePhoneType::LOCAL:
            val = "Local";
            break;
        case eOAIField_ePhoneType::INTERNATIONAL:
            val = "International";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIField_ePhoneType::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIField_ePhoneType::eOAIField_ePhoneType OAIField_ePhoneType::getValue() const {
    return m_value;
}

void OAIField_ePhoneType::setValue(const OAIField_ePhoneType::eOAIField_ePhoneType& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIField_ePhoneType::isSet() const {
    
    return m_value_isSet;
}

bool OAIField_ePhoneType::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
