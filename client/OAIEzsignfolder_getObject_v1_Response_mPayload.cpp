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

#include "OAIEzsignfolder_getObject_v1_Response_mPayload.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsignfolder_getObject_v1_Response_mPayload::OAIEzsignfolder_getObject_v1_Response_mPayload(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsignfolder_getObject_v1_Response_mPayload::OAIEzsignfolder_getObject_v1_Response_mPayload() {
    this->initializeModel();
}

OAIEzsignfolder_getObject_v1_Response_mPayload::~OAIEzsignfolder_getObject_v1_Response_mPayload() {}

void OAIEzsignfolder_getObject_v1_Response_mPayload::initializeModel() {

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

    m_pki_ezsignfolder_id_isSet = false;
    m_pki_ezsignfolder_id_isValid = false;

    m_dt_ezsignfolder_sentdate_isSet = false;
    m_dt_ezsignfolder_sentdate_isValid = false;

    m_e_ezsignfolder_step_isSet = false;
    m_e_ezsignfolder_step_isValid = false;

    m_dt_ezsignfolder_close_isSet = false;
    m_dt_ezsignfolder_close_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void OAIEzsignfolder_getObject_v1_Response_mPayload::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsignfolder_getObject_v1_Response_mPayload::fromJsonObject(QJsonObject json) {

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

    m_pki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsignfolder_id, json[QString("pkiEzsignfolderID")]);
    m_pki_ezsignfolder_id_isSet = !json[QString("pkiEzsignfolderID")].isNull() && m_pki_ezsignfolder_id_isValid;

    m_dt_ezsignfolder_sentdate_isValid = ::OpenAPI::fromJsonValue(dt_ezsignfolder_sentdate, json[QString("dtEzsignfolderSentdate")]);
    m_dt_ezsignfolder_sentdate_isSet = !json[QString("dtEzsignfolderSentdate")].isNull() && m_dt_ezsignfolder_sentdate_isValid;

    m_e_ezsignfolder_step_isValid = ::OpenAPI::fromJsonValue(e_ezsignfolder_step, json[QString("eEzsignfolderStep")]);
    m_e_ezsignfolder_step_isSet = !json[QString("eEzsignfolderStep")].isNull() && m_e_ezsignfolder_step_isValid;

    m_dt_ezsignfolder_close_isValid = ::OpenAPI::fromJsonValue(dt_ezsignfolder_close, json[QString("dtEzsignfolderClose")]);
    m_dt_ezsignfolder_close_isSet = !json[QString("dtEzsignfolderClose")].isNull() && m_dt_ezsignfolder_close_isValid;

    m_obj_audit_isValid = ::OpenAPI::fromJsonValue(obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString OAIEzsignfolder_getObject_v1_Response_mPayload::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsignfolder_getObject_v1_Response_mPayload::asJsonObject() const {
    QJsonObject obj;
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
    if (m_pki_ezsignfolder_id_isSet) {
        obj.insert(QString("pkiEzsignfolderID"), ::OpenAPI::toJsonValue(pki_ezsignfolder_id));
    }
    if (m_dt_ezsignfolder_sentdate_isSet) {
        obj.insert(QString("dtEzsignfolderSentdate"), ::OpenAPI::toJsonValue(dt_ezsignfolder_sentdate));
    }
    if (e_ezsignfolder_step.isSet()) {
        obj.insert(QString("eEzsignfolderStep"), ::OpenAPI::toJsonValue(e_ezsignfolder_step));
    }
    if (m_dt_ezsignfolder_close_isSet) {
        obj.insert(QString("dtEzsignfolderClose"), ::OpenAPI::toJsonValue(dt_ezsignfolder_close));
    }
    if (obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::OpenAPI::toJsonValue(obj_audit));
    }
    return obj;
}

qint32 OAIEzsignfolder_getObject_v1_Response_mPayload::getFkiEzsignfoldertypeId() const {
    return fki_ezsignfoldertype_id;
}
void OAIEzsignfolder_getObject_v1_Response_mPayload::setFkiEzsignfoldertypeId(const qint32 &fki_ezsignfoldertype_id) {
    this->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    this->m_fki_ezsignfoldertype_id_isSet = true;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_fki_ezsignfoldertype_id_Set() const{
    return m_fki_ezsignfoldertype_id_isSet;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_fki_ezsignfoldertype_id_Valid() const{
    return m_fki_ezsignfoldertype_id_isValid;
}

qint32 OAIEzsignfolder_getObject_v1_Response_mPayload::getFkiEzsigntsarequirementId() const {
    return fki_ezsigntsarequirement_id;
}
void OAIEzsignfolder_getObject_v1_Response_mPayload::setFkiEzsigntsarequirementId(const qint32 &fki_ezsigntsarequirement_id) {
    this->fki_ezsigntsarequirement_id = fki_ezsigntsarequirement_id;
    this->m_fki_ezsigntsarequirement_id_isSet = true;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_fki_ezsigntsarequirement_id_Set() const{
    return m_fki_ezsigntsarequirement_id_isSet;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_fki_ezsigntsarequirement_id_Valid() const{
    return m_fki_ezsigntsarequirement_id_isValid;
}

QString OAIEzsignfolder_getObject_v1_Response_mPayload::getSEzsignfolderDescription() const {
    return s_ezsignfolder_description;
}
void OAIEzsignfolder_getObject_v1_Response_mPayload::setSEzsignfolderDescription(const QString &s_ezsignfolder_description) {
    this->s_ezsignfolder_description = s_ezsignfolder_description;
    this->m_s_ezsignfolder_description_isSet = true;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_s_ezsignfolder_description_Set() const{
    return m_s_ezsignfolder_description_isSet;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_s_ezsignfolder_description_Valid() const{
    return m_s_ezsignfolder_description_isValid;
}

QString OAIEzsignfolder_getObject_v1_Response_mPayload::getTEzsignfolderNote() const {
    return t_ezsignfolder_note;
}
void OAIEzsignfolder_getObject_v1_Response_mPayload::setTEzsignfolderNote(const QString &t_ezsignfolder_note) {
    this->t_ezsignfolder_note = t_ezsignfolder_note;
    this->m_t_ezsignfolder_note_isSet = true;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_t_ezsignfolder_note_Set() const{
    return m_t_ezsignfolder_note_isSet;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_t_ezsignfolder_note_Valid() const{
    return m_t_ezsignfolder_note_isValid;
}

OAIField_eEzsignfolderSendreminderfrequency OAIEzsignfolder_getObject_v1_Response_mPayload::getEEzsignfolderSendreminderfrequency() const {
    return e_ezsignfolder_sendreminderfrequency;
}
void OAIEzsignfolder_getObject_v1_Response_mPayload::setEEzsignfolderSendreminderfrequency(const OAIField_eEzsignfolderSendreminderfrequency &e_ezsignfolder_sendreminderfrequency) {
    this->e_ezsignfolder_sendreminderfrequency = e_ezsignfolder_sendreminderfrequency;
    this->m_e_ezsignfolder_sendreminderfrequency_isSet = true;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_e_ezsignfolder_sendreminderfrequency_Set() const{
    return m_e_ezsignfolder_sendreminderfrequency_isSet;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_e_ezsignfolder_sendreminderfrequency_Valid() const{
    return m_e_ezsignfolder_sendreminderfrequency_isValid;
}

qint32 OAIEzsignfolder_getObject_v1_Response_mPayload::getPkiEzsignfolderId() const {
    return pki_ezsignfolder_id;
}
void OAIEzsignfolder_getObject_v1_Response_mPayload::setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id) {
    this->pki_ezsignfolder_id = pki_ezsignfolder_id;
    this->m_pki_ezsignfolder_id_isSet = true;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_pki_ezsignfolder_id_Set() const{
    return m_pki_ezsignfolder_id_isSet;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_pki_ezsignfolder_id_Valid() const{
    return m_pki_ezsignfolder_id_isValid;
}

QString OAIEzsignfolder_getObject_v1_Response_mPayload::getDtEzsignfolderSentdate() const {
    return dt_ezsignfolder_sentdate;
}
void OAIEzsignfolder_getObject_v1_Response_mPayload::setDtEzsignfolderSentdate(const QString &dt_ezsignfolder_sentdate) {
    this->dt_ezsignfolder_sentdate = dt_ezsignfolder_sentdate;
    this->m_dt_ezsignfolder_sentdate_isSet = true;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_sentdate_Set() const{
    return m_dt_ezsignfolder_sentdate_isSet;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_sentdate_Valid() const{
    return m_dt_ezsignfolder_sentdate_isValid;
}

OAIField_eEzsignfolderStep OAIEzsignfolder_getObject_v1_Response_mPayload::getEEzsignfolderStep() const {
    return e_ezsignfolder_step;
}
void OAIEzsignfolder_getObject_v1_Response_mPayload::setEEzsignfolderStep(const OAIField_eEzsignfolderStep &e_ezsignfolder_step) {
    this->e_ezsignfolder_step = e_ezsignfolder_step;
    this->m_e_ezsignfolder_step_isSet = true;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_e_ezsignfolder_step_Set() const{
    return m_e_ezsignfolder_step_isSet;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_e_ezsignfolder_step_Valid() const{
    return m_e_ezsignfolder_step_isValid;
}

QString OAIEzsignfolder_getObject_v1_Response_mPayload::getDtEzsignfolderClose() const {
    return dt_ezsignfolder_close;
}
void OAIEzsignfolder_getObject_v1_Response_mPayload::setDtEzsignfolderClose(const QString &dt_ezsignfolder_close) {
    this->dt_ezsignfolder_close = dt_ezsignfolder_close;
    this->m_dt_ezsignfolder_close_isSet = true;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_close_Set() const{
    return m_dt_ezsignfolder_close_isSet;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_dt_ezsignfolder_close_Valid() const{
    return m_dt_ezsignfolder_close_isValid;
}

OAICommon_Audit OAIEzsignfolder_getObject_v1_Response_mPayload::getObjAudit() const {
    return obj_audit;
}
void OAIEzsignfolder_getObject_v1_Response_mPayload::setObjAudit(const OAICommon_Audit &obj_audit) {
    this->obj_audit = obj_audit;
    this->m_obj_audit_isSet = true;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::isSet() const {
    bool isObjectUpdated = false;
    do {
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

        if (m_pki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_sentdate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsignfolder_step.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsignfolder_close_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (obj_audit.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIEzsignfolder_getObject_v1_Response_mPayload::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfoldertype_id_isValid && m_fki_ezsigntsarequirement_id_isValid && m_s_ezsignfolder_description_isValid && m_t_ezsignfolder_note_isValid && m_e_ezsignfolder_sendreminderfrequency_isValid && m_pki_ezsignfolder_id_isValid && m_dt_ezsignfolder_sentdate_isValid && m_e_ezsignfolder_step_isValid && m_dt_ezsignfolder_close_isValid && m_obj_audit_isValid && true;
}

} // namespace OpenAPI
