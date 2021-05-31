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

#include "OAIEzsigndocument_applyEzsigntemplate_v1_Request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_applyEzsigntemplate_v1_Request::OAIEzsigndocument_applyEzsigntemplate_v1_Request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_applyEzsigntemplate_v1_Request::OAIEzsigndocument_applyEzsigntemplate_v1_Request() {
    this->initializeModel();
}

OAIEzsigndocument_applyEzsigntemplate_v1_Request::~OAIEzsigndocument_applyEzsigntemplate_v1_Request() {}

void OAIEzsigndocument_applyEzsigntemplate_v1_Request::initializeModel() {

    m_fki_ezsigntemplate_id_isSet = false;
    m_fki_ezsigntemplate_id_isValid = false;

    m_a_s_ezsigntemplatesigner_isSet = false;
    m_a_s_ezsigntemplatesigner_isValid = false;

    m_a_pki_ezsignfoldersignerassociation_id_isSet = false;
    m_a_pki_ezsignfoldersignerassociation_id_isValid = false;
}

void OAIEzsigndocument_applyEzsigntemplate_v1_Request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_applyEzsigntemplate_v1_Request::fromJsonObject(QJsonObject json) {

    m_fki_ezsigntemplate_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntemplate_id, json[QString("fkiEzsigntemplateID")]);
    m_fki_ezsigntemplate_id_isSet = !json[QString("fkiEzsigntemplateID")].isNull() && m_fki_ezsigntemplate_id_isValid;

    m_a_s_ezsigntemplatesigner_isValid = ::OpenAPI::fromJsonValue(a_s_ezsigntemplatesigner, json[QString("a_sEzsigntemplatesigner")]);
    m_a_s_ezsigntemplatesigner_isSet = !json[QString("a_sEzsigntemplatesigner")].isNull() && m_a_s_ezsigntemplatesigner_isValid;

    m_a_pki_ezsignfoldersignerassociation_id_isValid = ::OpenAPI::fromJsonValue(a_pki_ezsignfoldersignerassociation_id, json[QString("a_pkiEzsignfoldersignerassociationID")]);
    m_a_pki_ezsignfoldersignerassociation_id_isSet = !json[QString("a_pkiEzsignfoldersignerassociationID")].isNull() && m_a_pki_ezsignfoldersignerassociation_id_isValid;
}

QString OAIEzsigndocument_applyEzsigntemplate_v1_Request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_applyEzsigntemplate_v1_Request::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsigntemplate_id_isSet) {
        obj.insert(QString("fkiEzsigntemplateID"), ::OpenAPI::toJsonValue(fki_ezsigntemplate_id));
    }
    if (a_s_ezsigntemplatesigner.size() > 0) {
        obj.insert(QString("a_sEzsigntemplatesigner"), ::OpenAPI::toJsonValue(a_s_ezsigntemplatesigner));
    }
    if (a_pki_ezsignfoldersignerassociation_id.size() > 0) {
        obj.insert(QString("a_pkiEzsignfoldersignerassociationID"), ::OpenAPI::toJsonValue(a_pki_ezsignfoldersignerassociation_id));
    }
    return obj;
}

qint32 OAIEzsigndocument_applyEzsigntemplate_v1_Request::getFkiEzsigntemplateId() const {
    return fki_ezsigntemplate_id;
}
void OAIEzsigndocument_applyEzsigntemplate_v1_Request::setFkiEzsigntemplateId(const qint32 &fki_ezsigntemplate_id) {
    this->fki_ezsigntemplate_id = fki_ezsigntemplate_id;
    this->m_fki_ezsigntemplate_id_isSet = true;
}

bool OAIEzsigndocument_applyEzsigntemplate_v1_Request::is_fki_ezsigntemplate_id_Set() const{
    return m_fki_ezsigntemplate_id_isSet;
}

bool OAIEzsigndocument_applyEzsigntemplate_v1_Request::is_fki_ezsigntemplate_id_Valid() const{
    return m_fki_ezsigntemplate_id_isValid;
}

QList<QString> OAIEzsigndocument_applyEzsigntemplate_v1_Request::getASEzsigntemplatesigner() const {
    return a_s_ezsigntemplatesigner;
}
void OAIEzsigndocument_applyEzsigntemplate_v1_Request::setASEzsigntemplatesigner(const QList<QString> &a_s_ezsigntemplatesigner) {
    this->a_s_ezsigntemplatesigner = a_s_ezsigntemplatesigner;
    this->m_a_s_ezsigntemplatesigner_isSet = true;
}

bool OAIEzsigndocument_applyEzsigntemplate_v1_Request::is_a_s_ezsigntemplatesigner_Set() const{
    return m_a_s_ezsigntemplatesigner_isSet;
}

bool OAIEzsigndocument_applyEzsigntemplate_v1_Request::is_a_s_ezsigntemplatesigner_Valid() const{
    return m_a_s_ezsigntemplatesigner_isValid;
}

QList<qint32> OAIEzsigndocument_applyEzsigntemplate_v1_Request::getAPkiEzsignfoldersignerassociationId() const {
    return a_pki_ezsignfoldersignerassociation_id;
}
void OAIEzsigndocument_applyEzsigntemplate_v1_Request::setAPkiEzsignfoldersignerassociationId(const QList<qint32> &a_pki_ezsignfoldersignerassociation_id) {
    this->a_pki_ezsignfoldersignerassociation_id = a_pki_ezsignfoldersignerassociation_id;
    this->m_a_pki_ezsignfoldersignerassociation_id_isSet = true;
}

bool OAIEzsigndocument_applyEzsigntemplate_v1_Request::is_a_pki_ezsignfoldersignerassociation_id_Set() const{
    return m_a_pki_ezsignfoldersignerassociation_id_isSet;
}

bool OAIEzsigndocument_applyEzsigntemplate_v1_Request::is_a_pki_ezsignfoldersignerassociation_id_Valid() const{
    return m_a_pki_ezsignfoldersignerassociation_id_isValid;
}

bool OAIEzsigndocument_applyEzsigntemplate_v1_Request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsigntemplate_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (a_s_ezsigntemplatesigner.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (a_pki_ezsignfoldersignerassociation_id.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsigndocument_applyEzsigntemplate_v1_Request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsigntemplate_id_isValid && m_a_s_ezsigntemplatesigner_isValid && m_a_pki_ezsignfoldersignerassociation_id_isValid && true;
}

} // namespace OpenAPI
