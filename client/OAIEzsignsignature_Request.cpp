/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.32
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignsignature_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignsignature_Request::OAIEzsignsignature_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignsignature_Request::OAIEzsignsignature_Request() {
    this->initializeModel();
}

OAIEzsignsignature_Request::~OAIEzsignsignature_Request() {}

void OAIEzsignsignature_Request::initializeModel() {

    m_fki_ezsignfoldersignerassociation_id_isSet = false;
    m_fki_ezsignfoldersignerassociation_id_isValid = false;

    m_i_ezsignpage_pagenumber_isSet = false;
    m_i_ezsignpage_pagenumber_isValid = false;

    m_i_ezsignsignature_x_isSet = false;
    m_i_ezsignsignature_x_isValid = false;

    m_i_ezsignsignature_y_isSet = false;
    m_i_ezsignsignature_y_isValid = false;

    m_i_ezsignsignature_step_isSet = false;
    m_i_ezsignsignature_step_isValid = false;

    m_e_ezsignsignature_type_isSet = false;
    m_e_ezsignsignature_type_isValid = false;

    m_fki_ezsigndocument_id_isSet = false;
    m_fki_ezsigndocument_id_isValid = false;
}

void OAIEzsignsignature_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignsignature_Request::fromJsonObject(QJsonObject json) {

    m_fki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldersignerassociation_id, json[QString("fkiEzsignfoldersignerassociationID")]);
    m_fki_ezsignfoldersignerassociation_id_isSet = !json[QString("fkiEzsignfoldersignerassociationID")].isNull() && m_fki_ezsignfoldersignerassociation_id_isValid;

    m_i_ezsignpage_pagenumber_isValid = ::OpenAPI::fromJsonValue(i_ezsignpage_pagenumber, json[QString("iEzsignpagePagenumber")]);
    m_i_ezsignpage_pagenumber_isSet = !json[QString("iEzsignpagePagenumber")].isNull() && m_i_ezsignpage_pagenumber_isValid;

    m_i_ezsignsignature_x_isValid = ::OpenAPI::fromJsonValue(i_ezsignsignature_x, json[QString("iEzsignsignatureX")]);
    m_i_ezsignsignature_x_isSet = !json[QString("iEzsignsignatureX")].isNull() && m_i_ezsignsignature_x_isValid;

    m_i_ezsignsignature_y_isValid = ::OpenAPI::fromJsonValue(i_ezsignsignature_y, json[QString("iEzsignsignatureY")]);
    m_i_ezsignsignature_y_isSet = !json[QString("iEzsignsignatureY")].isNull() && m_i_ezsignsignature_y_isValid;

    m_i_ezsignsignature_step_isValid = ::OpenAPI::fromJsonValue(i_ezsignsignature_step, json[QString("iEzsignsignatureStep")]);
    m_i_ezsignsignature_step_isSet = !json[QString("iEzsignsignatureStep")].isNull() && m_i_ezsignsignature_step_isValid;

    m_e_ezsignsignature_type_isValid = ::OpenAPI::fromJsonValue(e_ezsignsignature_type, json[QString("eEzsignsignatureType")]);
    m_e_ezsignsignature_type_isSet = !json[QString("eEzsignsignatureType")].isNull() && m_e_ezsignsignature_type_isValid;

    m_fki_ezsigndocument_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigndocument_id, json[QString("fkiEzsigndocumentID")]);
    m_fki_ezsigndocument_id_isSet = !json[QString("fkiEzsigndocumentID")].isNull() && m_fki_ezsigndocument_id_isValid;
}

QString OAIEzsignsignature_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignsignature_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsignfoldersignerassociation_id_isSet) {
        obj.insert(QString("fkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(fki_ezsignfoldersignerassociation_id));
    }
    if (m_i_ezsignpage_pagenumber_isSet) {
        obj.insert(QString("iEzsignpagePagenumber"), ::OpenAPI::toJsonValue(i_ezsignpage_pagenumber));
    }
    if (m_i_ezsignsignature_x_isSet) {
        obj.insert(QString("iEzsignsignatureX"), ::OpenAPI::toJsonValue(i_ezsignsignature_x));
    }
    if (m_i_ezsignsignature_y_isSet) {
        obj.insert(QString("iEzsignsignatureY"), ::OpenAPI::toJsonValue(i_ezsignsignature_y));
    }
    if (m_i_ezsignsignature_step_isSet) {
        obj.insert(QString("iEzsignsignatureStep"), ::OpenAPI::toJsonValue(i_ezsignsignature_step));
    }
    if (m_e_ezsignsignature_type_isSet) {
        obj.insert(QString("eEzsignsignatureType"), ::OpenAPI::toJsonValue(e_ezsignsignature_type));
    }
    if (m_fki_ezsigndocument_id_isSet) {
        obj.insert(QString("fkiEzsigndocumentID"), ::OpenAPI::toJsonValue(fki_ezsigndocument_id));
    }
    return obj;
}

qint32 OAIEzsignsignature_Request::getFkiEzsignfoldersignerassociationId() const {
    return fki_ezsignfoldersignerassociation_id;
}
void OAIEzsignsignature_Request::setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id) {
    this->fki_ezsignfoldersignerassociation_id = fki_ezsignfoldersignerassociation_id;
    this->m_fki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAIEzsignsignature_Request::is_fki_ezsignfoldersignerassociation_id_Set() const{
    return m_fki_ezsignfoldersignerassociation_id_isSet;
}

bool OAIEzsignsignature_Request::is_fki_ezsignfoldersignerassociation_id_Valid() const{
    return m_fki_ezsignfoldersignerassociation_id_isValid;
}

qint32 OAIEzsignsignature_Request::getIEzsignpagePagenumber() const {
    return i_ezsignpage_pagenumber;
}
void OAIEzsignsignature_Request::setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber) {
    this->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    this->m_i_ezsignpage_pagenumber_isSet = true;
}

bool OAIEzsignsignature_Request::is_i_ezsignpage_pagenumber_Set() const{
    return m_i_ezsignpage_pagenumber_isSet;
}

bool OAIEzsignsignature_Request::is_i_ezsignpage_pagenumber_Valid() const{
    return m_i_ezsignpage_pagenumber_isValid;
}

qint32 OAIEzsignsignature_Request::getIEzsignsignatureX() const {
    return i_ezsignsignature_x;
}
void OAIEzsignsignature_Request::setIEzsignsignatureX(const qint32 &i_ezsignsignature_x) {
    this->i_ezsignsignature_x = i_ezsignsignature_x;
    this->m_i_ezsignsignature_x_isSet = true;
}

bool OAIEzsignsignature_Request::is_i_ezsignsignature_x_Set() const{
    return m_i_ezsignsignature_x_isSet;
}

bool OAIEzsignsignature_Request::is_i_ezsignsignature_x_Valid() const{
    return m_i_ezsignsignature_x_isValid;
}

qint32 OAIEzsignsignature_Request::getIEzsignsignatureY() const {
    return i_ezsignsignature_y;
}
void OAIEzsignsignature_Request::setIEzsignsignatureY(const qint32 &i_ezsignsignature_y) {
    this->i_ezsignsignature_y = i_ezsignsignature_y;
    this->m_i_ezsignsignature_y_isSet = true;
}

bool OAIEzsignsignature_Request::is_i_ezsignsignature_y_Set() const{
    return m_i_ezsignsignature_y_isSet;
}

bool OAIEzsignsignature_Request::is_i_ezsignsignature_y_Valid() const{
    return m_i_ezsignsignature_y_isValid;
}

qint32 OAIEzsignsignature_Request::getIEzsignsignatureStep() const {
    return i_ezsignsignature_step;
}
void OAIEzsignsignature_Request::setIEzsignsignatureStep(const qint32 &i_ezsignsignature_step) {
    this->i_ezsignsignature_step = i_ezsignsignature_step;
    this->m_i_ezsignsignature_step_isSet = true;
}

bool OAIEzsignsignature_Request::is_i_ezsignsignature_step_Set() const{
    return m_i_ezsignsignature_step_isSet;
}

bool OAIEzsignsignature_Request::is_i_ezsignsignature_step_Valid() const{
    return m_i_ezsignsignature_step_isValid;
}

QString OAIEzsignsignature_Request::getEEzsignsignatureType() const {
    return e_ezsignsignature_type;
}
void OAIEzsignsignature_Request::setEEzsignsignatureType(const QString &e_ezsignsignature_type) {
    this->e_ezsignsignature_type = e_ezsignsignature_type;
    this->m_e_ezsignsignature_type_isSet = true;
}

bool OAIEzsignsignature_Request::is_e_ezsignsignature_type_Set() const{
    return m_e_ezsignsignature_type_isSet;
}

bool OAIEzsignsignature_Request::is_e_ezsignsignature_type_Valid() const{
    return m_e_ezsignsignature_type_isValid;
}

qint32 OAIEzsignsignature_Request::getFkiEzsigndocumentId() const {
    return fki_ezsigndocument_id;
}
void OAIEzsignsignature_Request::setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id) {
    this->fki_ezsigndocument_id = fki_ezsigndocument_id;
    this->m_fki_ezsigndocument_id_isSet = true;
}

bool OAIEzsignsignature_Request::is_fki_ezsigndocument_id_Set() const{
    return m_fki_ezsigndocument_id_isSet;
}

bool OAIEzsignsignature_Request::is_fki_ezsigndocument_id_Valid() const{
    return m_fki_ezsigndocument_id_isValid;
}

bool OAIEzsignsignature_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsignfoldersignerassociation_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignpage_pagenumber_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_x_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_y_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsignsignature_step_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_e_ezsignsignature_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigndocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignsignature_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldersignerassociation_id_isValid && m_i_ezsignpage_pagenumber_isValid && m_i_ezsignsignature_x_isValid && m_i_ezsignsignature_y_isValid && m_i_ezsignsignature_step_isValid && m_e_ezsignsignature_type_isValid && m_fki_ezsigndocument_id_isValid && true;
}

} // namespace OpenAPI
