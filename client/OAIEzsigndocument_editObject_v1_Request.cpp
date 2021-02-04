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

#include "OAIEzsigndocument_editObject_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_editObject_v1_Request::OAIEzsigndocument_editObject_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_editObject_v1_Request::OAIEzsigndocument_editObject_v1_Request() {
    this->initializeModel();
}

OAIEzsigndocument_editObject_v1_Request::~OAIEzsigndocument_editObject_v1_Request() {}

void OAIEzsigndocument_editObject_v1_Request::initializeModel() {

    m_obj_ezsigndocument_isSet = false;
    m_obj_ezsigndocument_isValid = false;
}

void OAIEzsigndocument_editObject_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_editObject_v1_Request::fromJsonObject(QJsonObject json) {

    m_obj_ezsigndocument_isValid = ::OpenAPI::fromJsonValue(obj_ezsigndocument, json[QString("objEzsigndocument")]);
    m_obj_ezsigndocument_isSet = !json[QString("objEzsigndocument")].isNull() && m_obj_ezsigndocument_isValid;
}

QString OAIEzsigndocument_editObject_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_editObject_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (obj_ezsigndocument.isSet()) {
        obj.insert(QString("objEzsigndocument"), ::OpenAPI::toJsonValue(obj_ezsigndocument));
    }
    return obj;
}

OAIEzsigndocument_Request OAIEzsigndocument_editObject_v1_Request::getObjEzsigndocument() const {
    return obj_ezsigndocument;
}
void OAIEzsigndocument_editObject_v1_Request::setObjEzsigndocument(const OAIEzsigndocument_Request &obj_ezsigndocument) {
    this->obj_ezsigndocument = obj_ezsigndocument;
    this->m_obj_ezsigndocument_isSet = true;
}

bool OAIEzsigndocument_editObject_v1_Request::is_obj_ezsigndocument_Set() const{
    return m_obj_ezsigndocument_isSet;
}

bool OAIEzsigndocument_editObject_v1_Request::is_obj_ezsigndocument_Valid() const{
    return m_obj_ezsigndocument_isValid;
}

bool OAIEzsigndocument_editObject_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (obj_ezsigndocument.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_editObject_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return true;
}

} // namespace OpenAPI
