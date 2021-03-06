/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.46
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsignfolder_RequestCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_RequestCompound::OAIEzsignfolder_RequestCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_RequestCompound::OAIEzsignfolder_RequestCompound() {
    this->initializeModel();
}

OAIEzsignfolder_RequestCompound::~OAIEzsignfolder_RequestCompound() {}

void OAIEzsignfolder_RequestCompound::initializeModel() {

    m_a_ezsignfoldersignerassociation_isSet = false;
    m_a_ezsignfoldersignerassociation_isValid = false;

    m_fki_ezsignfoldertype_id_isSet = false;
    m_fki_ezsignfoldertype_id_isValid = false;

    m_fki_ezsigntsarequirement_id_isSet = false;
    m_fki_ezsigntsarequirement_id_isValid = false;

    m_s_ezsignfolder_description_isSet = false;
    m_s_ezsignfolder_description_isValid = false;

    m_t_ezsignfolder_note_isSet = false;
    m_t_ezsignfolder_note_isValid = false;

    m_e_ezsignfolder_sendreminderfrequency_isSet = false;
    m_e_ezsignfolder_sendreminderfrequency_isValid = false;
}

void OAIEzsignfolder_RequestCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_RequestCompound::fromJsonObject(QJsonObject json) {

    m_a_ezsignfoldersignerassociation_isValid = ::OpenAPI::fromJsonValue(a_ezsignfoldersignerassociation, json[QString("a_Ezsignfoldersignerassociation")]);
    m_a_ezsignfoldersignerassociation_isSet = !json[QString("a_Ezsignfoldersignerassociation")].isNull() && m_a_ezsignfoldersignerassociation_isValid;

    m_fki_ezsignfoldertype_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfoldertype_id, json[QString("fkiEzsignfoldertypeID")]);
    m_fki_ezsignfoldertype_id_isSet = !json[QString("fkiEzsignfoldertypeID")].isNull() && m_fki_ezsignfoldertype_id_isValid;

    m_fki_ezsigntsarequirement_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsigntsarequirement_id, json[QString("fkiEzsigntsarequirementID")]);
    m_fki_ezsigntsarequirement_id_isSet = !json[QString("fkiEzsigntsarequirementID")].isNull() && m_fki_ezsigntsarequirement_id_isValid;

    m_s_ezsignfolder_description_isValid = ::OpenAPI::fromJsonValue(s_ezsignfolder_description, json[QString("sEzsignfolderDescription")]);
    m_s_ezsignfolder_description_isSet = !json[QString("sEzsignfolderDescription")].isNull() && m_s_ezsignfolder_description_isValid;

    m_t_ezsignfolder_note_isValid = ::OpenAPI::fromJsonValue(t_ezsignfolder_note, json[QString("tEzsignfolderNote")]);
    m_t_ezsignfolder_note_isSet = !json[QString("tEzsignfolderNote")].isNull() && m_t_ezsignfolder_note_isValid;

    m_e_ezsignfolder_sendreminderfrequency_isValid = ::OpenAPI::fromJsonValue(e_ezsignfolder_sendreminderfrequency, json[QString("eEzsignfolderSendreminderfrequency")]);
    m_e_ezsignfolder_sendreminderfrequency_isSet = !json[QString("eEzsignfolderSendreminderfrequency")].isNull() && m_e_ezsignfolder_sendreminderfrequency_isValid;
}

QString OAIEzsignfolder_RequestCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_RequestCompound::asJsonObject() const {
    QJsonObject obj;
    if (a_ezsignfoldersignerassociation.size() > 0) {
        obj.insert(QString("a_Ezsignfoldersignerassociation"), ::OpenAPI::toJsonValue(a_ezsignfoldersignerassociation));
    }
    if (m_fki_ezsignfoldertype_id_isSet) {
        obj.insert(QString("fkiEzsignfoldertypeID"), ::OpenAPI::toJsonValue(fki_ezsignfoldertype_id));
    }
    if (m_fki_ezsigntsarequirement_id_isSet) {
        obj.insert(QString("fkiEzsigntsarequirementID"), ::OpenAPI::toJsonValue(fki_ezsigntsarequirement_id));
    }
    if (m_s_ezsignfolder_description_isSet) {
        obj.insert(QString("sEzsignfolderDescription"), ::OpenAPI::toJsonValue(s_ezsignfolder_description));
    }
    if (m_t_ezsignfolder_note_isSet) {
        obj.insert(QString("tEzsignfolderNote"), ::OpenAPI::toJsonValue(t_ezsignfolder_note));
    }
    if (e_ezsignfolder_sendreminderfrequency.isSet()) {
        obj.insert(QString("eEzsignfolderSendreminderfrequency"), ::OpenAPI::toJsonValue(e_ezsignfolder_sendreminderfrequency));
    }
    return obj;
}

QList<OAIEzsignfoldersignerassociation_Request> OAIEzsignfolder_RequestCompound::getAEzsignfoldersignerassociation() const {
    return a_ezsignfoldersignerassociation;
}
void OAIEzsignfolder_RequestCompound::setAEzsignfoldersignerassociation(const QList<OAIEzsignfoldersignerassociation_Request> &a_ezsignfoldersignerassociation) {
    this->a_ezsignfoldersignerassociation = a_ezsignfoldersignerassociation;
    this->m_a_ezsignfoldersignerassociation_isSet = true;
}

bool OAIEzsignfolder_RequestCompound::is_a_ezsignfoldersignerassociation_Set() const{
    return m_a_ezsignfoldersignerassociation_isSet;
}

bool OAIEzsignfolder_RequestCompound::is_a_ezsignfoldersignerassociation_Valid() const{
    return m_a_ezsignfoldersignerassociation_isValid;
}

qint32 OAIEzsignfolder_RequestCompound::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsignfolder_RequestCompound::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsignfolder_RequestCompound::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsignfolder_RequestCompound::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 OAIEzsignfolder_RequestCompound::getFkiEzsigntsarequirementId() const {
    return fki_ezsigntsarequirement_id;
}
void OAIEzsignfolder_RequestCompound::setFkiEzsigntsarequirementId(const qint32 &fki_ezsigntsarequirement_id) {
    this->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    this->m_fki_ezsigntsarequirement_id_isSet = true;
}

bool OAIEzsignfolder_RequestCompound::is_fki_ezsigntsarequirement_id_Set() const{
    return m_fki_ezsigntsarequirement_id_isSet;
}

bool OAIEzsignfolder_RequestCompound::is_fki_ezsigntsarequirement_id_Valid() const{
    return m_fki_ezsigntsarequirement_id_isValid;
}

QString OAIEzsignfolder_RequestCompound::getSEzsignfolderDescription() const {
    return s_ezsignfolder_description;
}
void OAIEzsignfolder_RequestCompound::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    this->s_ezsignfolder_description = s_ezsignfolder_description;
    this->m_s_ezsignfolder_description_isSet = true;
}

bool OAIEzsignfolder_RequestCompound::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool OAIEzsignfolder_RequestCompound::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

QString OAIEzsignfolder_RequestCompound::getTEzsignfolderNote() const {
    return t_ezsignfolder_note;
}
void OAIEzsignfolder_RequestCompound::setTEzsignfolderNote(const QString &t_ezsignfolder_note) {
    this->t_ezsignfolder_note = t_ezsignfolder_note;
    this->m_t_ezsignfolder_note_isSet = true;
}

bool OAIEzsignfolder_RequestCompound::is_t_ezsignfolder_note_Set() const{
    return m_t_ezsignfolder_note_isSet;
}

bool OAIEzsignfolder_RequestCompound::is_t_ezsignfolder_note_Valid() const{
    return m_t_ezsignfolder_note_isValid;
}

OAIField_eEzsignfolderSendreminderfrequency OAIEzsignfolder_RequestCompound::getEEzsignfolderSendreminderfrequency() const {
    return e_ezsignfolder_sendreminderfrequency;
}
void OAIEzsignfolder_RequestCompound::setEEzsignfolderSendreminderfrequency(const OAIField_eEzsignfolderSendreminderfrequency &e_ezsignfolder_sendreminderfrequency) {
    this->e_ezsignfolder_sendreminderfrequency = e_ezsignfolder_sendreminderfrequency;
    this->m_e_ezsignfolder_sendreminderfrequency_isSet = true;
}

bool OAIEzsignfolder_RequestCompound::is_e_ezsignfolder_sendreminderfrequency_Set() const{
    return m_e_ezsignfolder_sendreminderfrequency_isSet;
}

bool OAIEzsignfolder_RequestCompound::is_e_ezsignfolder_sendreminderfrequency_Valid() const{
    return m_e_ezsignfolder_sendreminderfrequency_isValid;
}

bool OAIEzsignfolder_RequestCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (a_ezsignfoldersignerassociation.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsignfoldertype_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_ezsigntsarequirement_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsignfolder_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_t_ezsignfolder_note_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsignfolder_sendreminderfrequency.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_RequestCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_a_ezsignfoldersignerassociation_isValid && m_fki_ezsignfoldertype_id_isValid && m_fki_ezsigntsarequirement_id_isValid && m_s_ezsignfolder_description_isValid && m_t_ezsignfolder_note_isValid && m_e_ezsignfolder_sendreminderfrequency_isValid && true;
}

} // namespace OpenAPI
