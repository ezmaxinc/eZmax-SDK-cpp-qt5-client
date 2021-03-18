/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.37
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIEzsigndocument_ResponseCompound.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIEzsigndocument_ResponseCompound::OAIEzsigndocument_ResponseCompound(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIEzsigndocument_ResponseCompound::OAIEzsigndocument_ResponseCompound() {
    this->initializeModel();
}

OAIEzsigndocument_ResponseCompound::~OAIEzsigndocument_ResponseCompound() {}

void OAIEzsigndocument_ResponseCompound::initializeModel() {

    m_fki_ezsignfolder_id_isSet = false;
    m_fki_ezsignfolder_id_isValid = false;

    m_dt_ezsigndocument_duedate_isSet = false;
    m_dt_ezsigndocument_duedate_isValid = false;

    m_fki_language_id_isSet = false;
    m_fki_language_id_isValid = false;

    m_s_ezsigndocument_name_isSet = false;
    m_s_ezsigndocument_name_isValid = false;

    m_pki_ezsigndocument_id_isSet = false;
    m_pki_ezsigndocument_id_isValid = false;

    m_e_ezsigndocument_step_isSet = false;
    m_e_ezsigndocument_step_isValid = false;

    m_dt_ezsigndocument_firstsend_isSet = false;
    m_dt_ezsigndocument_firstsend_isValid = false;

    m_dt_ezsigndocument_lastsend_isSet = false;
    m_dt_ezsigndocument_lastsend_isValid = false;

    m_i_ezsigndocument_order_isSet = false;
    m_i_ezsigndocument_order_isValid = false;

    m_i_ezsigndocument_pagetotal_isSet = false;
    m_i_ezsigndocument_pagetotal_isValid = false;

    m_i_ezsigndocument_signaturesigned_isSet = false;
    m_i_ezsigndocument_signaturesigned_isValid = false;

    m_i_ezsigndocument_signaturetotal_isSet = false;
    m_i_ezsigndocument_signaturetotal_isValid = false;

    m_s_ezsigndocument_md5initial_isSet = false;
    m_s_ezsigndocument_md5initial_isValid = false;

    m_s_ezsigndocument_md5signed_isSet = false;
    m_s_ezsigndocument_md5signed_isValid = false;

    m_obj_audit_isSet = false;
    m_obj_audit_isValid = false;
}

void OAIEzsigndocument_ResponseCompound::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIEzsigndocument_ResponseCompound::fromJsonObject(QJsonObject json) {

    m_fki_ezsignfolder_id_isValid = ::OpenAPI::fromJsonValue(fki_ezsignfolder_id, json[QString("fkiEzsignfolderID")]);
    m_fki_ezsignfolder_id_isSet = !json[QString("fkiEzsignfolderID")].isNull() && m_fki_ezsignfolder_id_isValid;

    m_dt_ezsigndocument_duedate_isValid = ::OpenAPI::fromJsonValue(dt_ezsigndocument_duedate, json[QString("dtEzsigndocumentDuedate")]);
    m_dt_ezsigndocument_duedate_isSet = !json[QString("dtEzsigndocumentDuedate")].isNull() && m_dt_ezsigndocument_duedate_isValid;

    m_fki_language_id_isValid = ::OpenAPI::fromJsonValue(fki_language_id, json[QString("fkiLanguageID")]);
    m_fki_language_id_isSet = !json[QString("fkiLanguageID")].isNull() && m_fki_language_id_isValid;

    m_s_ezsigndocument_name_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocument_name, json[QString("sEzsigndocumentName")]);
    m_s_ezsigndocument_name_isSet = !json[QString("sEzsigndocumentName")].isNull() && m_s_ezsigndocument_name_isValid;

    m_pki_ezsigndocument_id_isValid = ::OpenAPI::fromJsonValue(pki_ezsigndocument_id, json[QString("pkiEzsigndocumentID")]);
    m_pki_ezsigndocument_id_isSet = !json[QString("pkiEzsigndocumentID")].isNull() && m_pki_ezsigndocument_id_isValid;

    m_e_ezsigndocument_step_isValid = ::OpenAPI::fromJsonValue(e_ezsigndocument_step, json[QString("eEzsigndocumentStep")]);
    m_e_ezsigndocument_step_isSet = !json[QString("eEzsigndocumentStep")].isNull() && m_e_ezsigndocument_step_isValid;

    m_dt_ezsigndocument_firstsend_isValid = ::OpenAPI::fromJsonValue(dt_ezsigndocument_firstsend, json[QString("dtEzsigndocumentFirstsend")]);
    m_dt_ezsigndocument_firstsend_isSet = !json[QString("dtEzsigndocumentFirstsend")].isNull() && m_dt_ezsigndocument_firstsend_isValid;

    m_dt_ezsigndocument_lastsend_isValid = ::OpenAPI::fromJsonValue(dt_ezsigndocument_lastsend, json[QString("dtEzsigndocumentLastsend")]);
    m_dt_ezsigndocument_lastsend_isSet = !json[QString("dtEzsigndocumentLastsend")].isNull() && m_dt_ezsigndocument_lastsend_isValid;

    m_i_ezsigndocument_order_isValid = ::OpenAPI::fromJsonValue(i_ezsigndocument_order, json[QString("iEzsigndocumentOrder")]);
    m_i_ezsigndocument_order_isSet = !json[QString("iEzsigndocumentOrder")].isNull() && m_i_ezsigndocument_order_isValid;

    m_i_ezsigndocument_pagetotal_isValid = ::OpenAPI::fromJsonValue(i_ezsigndocument_pagetotal, json[QString("iEzsigndocumentPagetotal")]);
    m_i_ezsigndocument_pagetotal_isSet = !json[QString("iEzsigndocumentPagetotal")].isNull() && m_i_ezsigndocument_pagetotal_isValid;

    m_i_ezsigndocument_signaturesigned_isValid = ::OpenAPI::fromJsonValue(i_ezsigndocument_signaturesigned, json[QString("iEzsigndocumentSignaturesigned")]);
    m_i_ezsigndocument_signaturesigned_isSet = !json[QString("iEzsigndocumentSignaturesigned")].isNull() && m_i_ezsigndocument_signaturesigned_isValid;

    m_i_ezsigndocument_signaturetotal_isValid = ::OpenAPI::fromJsonValue(i_ezsigndocument_signaturetotal, json[QString("iEzsigndocumentSignaturetotal")]);
    m_i_ezsigndocument_signaturetotal_isSet = !json[QString("iEzsigndocumentSignaturetotal")].isNull() && m_i_ezsigndocument_signaturetotal_isValid;

    m_s_ezsigndocument_md5initial_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocument_md5initial, json[QString("sEzsigndocumentMD5initial")]);
    m_s_ezsigndocument_md5initial_isSet = !json[QString("sEzsigndocumentMD5initial")].isNull() && m_s_ezsigndocument_md5initial_isValid;

    m_s_ezsigndocument_md5signed_isValid = ::OpenAPI::fromJsonValue(s_ezsigndocument_md5signed, json[QString("sEzsigndocumentMD5signed")]);
    m_s_ezsigndocument_md5signed_isSet = !json[QString("sEzsigndocumentMD5signed")].isNull() && m_s_ezsigndocument_md5signed_isValid;

    m_obj_audit_isValid = ::OpenAPI::fromJsonValue(obj_audit, json[QString("objAudit")]);
    m_obj_audit_isSet = !json[QString("objAudit")].isNull() && m_obj_audit_isValid;
}

QString OAIEzsigndocument_ResponseCompound::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIEzsigndocument_ResponseCompound::asJsonObject() const {
    QJsonObject obj;
    if (m_fki_ezsignfolder_id_isSet) {
        obj.insert(QString("fkiEzsignfolderID"), ::OpenAPI::toJsonValue(fki_ezsignfolder_id));
    }
    if (m_dt_ezsigndocument_duedate_isSet) {
        obj.insert(QString("dtEzsigndocumentDuedate"), ::OpenAPI::toJsonValue(dt_ezsigndocument_duedate));
    }
    if (m_fki_language_id_isSet) {
        obj.insert(QString("fkiLanguageID"), ::OpenAPI::toJsonValue(fki_language_id));
    }
    if (m_s_ezsigndocument_name_isSet) {
        obj.insert(QString("sEzsigndocumentName"), ::OpenAPI::toJsonValue(s_ezsigndocument_name));
    }
    if (m_pki_ezsigndocument_id_isSet) {
        obj.insert(QString("pkiEzsigndocumentID"), ::OpenAPI::toJsonValue(pki_ezsigndocument_id));
    }
    if (e_ezsigndocument_step.isSet()) {
        obj.insert(QString("eEzsigndocumentStep"), ::OpenAPI::toJsonValue(e_ezsigndocument_step));
    }
    if (m_dt_ezsigndocument_firstsend_isSet) {
        obj.insert(QString("dtEzsigndocumentFirstsend"), ::OpenAPI::toJsonValue(dt_ezsigndocument_firstsend));
    }
    if (m_dt_ezsigndocument_lastsend_isSet) {
        obj.insert(QString("dtEzsigndocumentLastsend"), ::OpenAPI::toJsonValue(dt_ezsigndocument_lastsend));
    }
    if (m_i_ezsigndocument_order_isSet) {
        obj.insert(QString("iEzsigndocumentOrder"), ::OpenAPI::toJsonValue(i_ezsigndocument_order));
    }
    if (m_i_ezsigndocument_pagetotal_isSet) {
        obj.insert(QString("iEzsigndocumentPagetotal"), ::OpenAPI::toJsonValue(i_ezsigndocument_pagetotal));
    }
    if (m_i_ezsigndocument_signaturesigned_isSet) {
        obj.insert(QString("iEzsigndocumentSignaturesigned"), ::OpenAPI::toJsonValue(i_ezsigndocument_signaturesigned));
    }
    if (m_i_ezsigndocument_signaturetotal_isSet) {
        obj.insert(QString("iEzsigndocumentSignaturetotal"), ::OpenAPI::toJsonValue(i_ezsigndocument_signaturetotal));
    }
    if (m_s_ezsigndocument_md5initial_isSet) {
        obj.insert(QString("sEzsigndocumentMD5initial"), ::OpenAPI::toJsonValue(s_ezsigndocument_md5initial));
    }
    if (m_s_ezsigndocument_md5signed_isSet) {
        obj.insert(QString("sEzsigndocumentMD5signed"), ::OpenAPI::toJsonValue(s_ezsigndocument_md5signed));
    }
    if (obj_audit.isSet()) {
        obj.insert(QString("objAudit"), ::OpenAPI::toJsonValue(obj_audit));
    }
    return obj;
}

qint32 OAIEzsigndocument_ResponseCompound::getFkiEzsignfolderId() const {
    return fki_ezsignfolder_id;
}
void OAIEzsigndocument_ResponseCompound::setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id) {
    this->fki_ezsignfolder_id = fki_ezsignfolder_id;
    this->m_fki_ezsignfolder_id_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_fki_ezsignfolder_id_Set() const{
    return m_fki_ezsignfolder_id_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_fki_ezsignfolder_id_Valid() const{
    return m_fki_ezsignfolder_id_isValid;
}

QString OAIEzsigndocument_ResponseCompound::getDtEzsigndocumentDuedate() const {
    return dt_ezsigndocument_duedate;
}
void OAIEzsigndocument_ResponseCompound::setDtEzsigndocumentDuedate(const QString &dt_ezsigndocument_duedate) {
    this->dt_ezsigndocument_duedate = dt_ezsigndocument_duedate;
    this->m_dt_ezsigndocument_duedate_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_dt_ezsigndocument_duedate_Set() const{
    return m_dt_ezsigndocument_duedate_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_dt_ezsigndocument_duedate_Valid() const{
    return m_dt_ezsigndocument_duedate_isValid;
}

qint32 OAIEzsigndocument_ResponseCompound::getFkiLanguageId() const {
    return fki_language_id;
}
void OAIEzsigndocument_ResponseCompound::setFkiLanguageId(const qint32 &fki_language_id) {
    this->fki_language_id = fki_language_id;
    this->m_fki_language_id_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_fki_language_id_Set() const{
    return m_fki_language_id_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_fki_language_id_Valid() const{
    return m_fki_language_id_isValid;
}

QString OAIEzsigndocument_ResponseCompound::getSEzsigndocumentName() const {
    return s_ezsigndocument_name;
}
void OAIEzsigndocument_ResponseCompound::setSEzsigndocumentName(const QString &s_ezsigndocument_name) {
    this->s_ezsigndocument_name = s_ezsigndocument_name;
    this->m_s_ezsigndocument_name_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_s_ezsigndocument_name_Set() const{
    return m_s_ezsigndocument_name_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_s_ezsigndocument_name_Valid() const{
    return m_s_ezsigndocument_name_isValid;
}

qint32 OAIEzsigndocument_ResponseCompound::getPkiEzsigndocumentId() const {
    return pki_ezsigndocument_id;
}
void OAIEzsigndocument_ResponseCompound::setPkiEzsigndocumentId(const qint32 &pki_ezsigndocument_id) {
    this->pki_ezsigndocument_id = pki_ezsigndocument_id;
    this->m_pki_ezsigndocument_id_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_pki_ezsigndocument_id_Set() const{
    return m_pki_ezsigndocument_id_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_pki_ezsigndocument_id_Valid() const{
    return m_pki_ezsigndocument_id_isValid;
}

OAIField_eEzsigndocumentStep OAIEzsigndocument_ResponseCompound::getEEzsigndocumentStep() const {
    return e_ezsigndocument_step;
}
void OAIEzsigndocument_ResponseCompound::setEEzsigndocumentStep(const OAIField_eEzsigndocumentStep &e_ezsigndocument_step) {
    this->e_ezsigndocument_step = e_ezsigndocument_step;
    this->m_e_ezsigndocument_step_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_e_ezsigndocument_step_Set() const{
    return m_e_ezsigndocument_step_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_e_ezsigndocument_step_Valid() const{
    return m_e_ezsigndocument_step_isValid;
}

QString OAIEzsigndocument_ResponseCompound::getDtEzsigndocumentFirstsend() const {
    return dt_ezsigndocument_firstsend;
}
void OAIEzsigndocument_ResponseCompound::setDtEzsigndocumentFirstsend(const QString &dt_ezsigndocument_firstsend) {
    this->dt_ezsigndocument_firstsend = dt_ezsigndocument_firstsend;
    this->m_dt_ezsigndocument_firstsend_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_dt_ezsigndocument_firstsend_Set() const{
    return m_dt_ezsigndocument_firstsend_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_dt_ezsigndocument_firstsend_Valid() const{
    return m_dt_ezsigndocument_firstsend_isValid;
}

QString OAIEzsigndocument_ResponseCompound::getDtEzsigndocumentLastsend() const {
    return dt_ezsigndocument_lastsend;
}
void OAIEzsigndocument_ResponseCompound::setDtEzsigndocumentLastsend(const QString &dt_ezsigndocument_lastsend) {
    this->dt_ezsigndocument_lastsend = dt_ezsigndocument_lastsend;
    this->m_dt_ezsigndocument_lastsend_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_dt_ezsigndocument_lastsend_Set() const{
    return m_dt_ezsigndocument_lastsend_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_dt_ezsigndocument_lastsend_Valid() const{
    return m_dt_ezsigndocument_lastsend_isValid;
}

qint32 OAIEzsigndocument_ResponseCompound::getIEzsigndocumentOrder() const {
    return i_ezsigndocument_order;
}
void OAIEzsigndocument_ResponseCompound::setIEzsigndocumentOrder(const qint32 &i_ezsigndocument_order) {
    this->i_ezsigndocument_order = i_ezsigndocument_order;
    this->m_i_ezsigndocument_order_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_i_ezsigndocument_order_Set() const{
    return m_i_ezsigndocument_order_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_i_ezsigndocument_order_Valid() const{
    return m_i_ezsigndocument_order_isValid;
}

qint32 OAIEzsigndocument_ResponseCompound::getIEzsigndocumentPagetotal() const {
    return i_ezsigndocument_pagetotal;
}
void OAIEzsigndocument_ResponseCompound::setIEzsigndocumentPagetotal(const qint32 &i_ezsigndocument_pagetotal) {
    this->i_ezsigndocument_pagetotal = i_ezsigndocument_pagetotal;
    this->m_i_ezsigndocument_pagetotal_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_i_ezsigndocument_pagetotal_Set() const{
    return m_i_ezsigndocument_pagetotal_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_i_ezsigndocument_pagetotal_Valid() const{
    return m_i_ezsigndocument_pagetotal_isValid;
}

qint32 OAIEzsigndocument_ResponseCompound::getIEzsigndocumentSignaturesigned() const {
    return i_ezsigndocument_signaturesigned;
}
void OAIEzsigndocument_ResponseCompound::setIEzsigndocumentSignaturesigned(const qint32 &i_ezsigndocument_signaturesigned) {
    this->i_ezsigndocument_signaturesigned = i_ezsigndocument_signaturesigned;
    this->m_i_ezsigndocument_signaturesigned_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_i_ezsigndocument_signaturesigned_Set() const{
    return m_i_ezsigndocument_signaturesigned_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_i_ezsigndocument_signaturesigned_Valid() const{
    return m_i_ezsigndocument_signaturesigned_isValid;
}

qint32 OAIEzsigndocument_ResponseCompound::getIEzsigndocumentSignaturetotal() const {
    return i_ezsigndocument_signaturetotal;
}
void OAIEzsigndocument_ResponseCompound::setIEzsigndocumentSignaturetotal(const qint32 &i_ezsigndocument_signaturetotal) {
    this->i_ezsigndocument_signaturetotal = i_ezsigndocument_signaturetotal;
    this->m_i_ezsigndocument_signaturetotal_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_i_ezsigndocument_signaturetotal_Set() const{
    return m_i_ezsigndocument_signaturetotal_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_i_ezsigndocument_signaturetotal_Valid() const{
    return m_i_ezsigndocument_signaturetotal_isValid;
}

QString OAIEzsigndocument_ResponseCompound::getSEzsigndocumentMd5initial() const {
    return s_ezsigndocument_md5initial;
}
void OAIEzsigndocument_ResponseCompound::setSEzsigndocumentMd5initial(const QString &s_ezsigndocument_md5initial) {
    this->s_ezsigndocument_md5initial = s_ezsigndocument_md5initial;
    this->m_s_ezsigndocument_md5initial_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_s_ezsigndocument_md5initial_Set() const{
    return m_s_ezsigndocument_md5initial_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_s_ezsigndocument_md5initial_Valid() const{
    return m_s_ezsigndocument_md5initial_isValid;
}

QString OAIEzsigndocument_ResponseCompound::getSEzsigndocumentMd5signed() const {
    return s_ezsigndocument_md5signed;
}
void OAIEzsigndocument_ResponseCompound::setSEzsigndocumentMd5signed(const QString &s_ezsigndocument_md5signed) {
    this->s_ezsigndocument_md5signed = s_ezsigndocument_md5signed;
    this->m_s_ezsigndocument_md5signed_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_s_ezsigndocument_md5signed_Set() const{
    return m_s_ezsigndocument_md5signed_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_s_ezsigndocument_md5signed_Valid() const{
    return m_s_ezsigndocument_md5signed_isValid;
}

OAICommon_Audit OAIEzsigndocument_ResponseCompound::getObjAudit() const {
    return obj_audit;
}
void OAIEzsigndocument_ResponseCompound::setObjAudit(const OAICommon_Audit &obj_audit) {
    this->obj_audit = obj_audit;
    this->m_obj_audit_isSet = true;
}

bool OAIEzsigndocument_ResponseCompound::is_obj_audit_Set() const{
    return m_obj_audit_isSet;
}

bool OAIEzsigndocument_ResponseCompound::is_obj_audit_Valid() const{
    return m_obj_audit_isValid;
}

bool OAIEzsigndocument_ResponseCompound::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_fki_ezsignfolder_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsigndocument_duedate_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_fki_language_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocument_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pki_ezsigndocument_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (e_ezsigndocument_step.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsigndocument_firstsend_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_dt_ezsigndocument_lastsend_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigndocument_order_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigndocument_pagetotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigndocument_signaturesigned_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_i_ezsigndocument_signaturetotal_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocument_md5initial_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_s_ezsigndocument_md5signed_isSet) {
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

bool OAIEzsigndocument_ResponseCompound::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_fki_ezsignfolder_id_isValid && m_dt_ezsigndocument_duedate_isValid && m_fki_language_id_isValid && m_s_ezsigndocument_name_isValid && m_pki_ezsigndocument_id_isValid && m_e_ezsigndocument_step_isValid && m_dt_ezsigndocument_firstsend_isValid && m_dt_ezsigndocument_lastsend_isValid && m_i_ezsigndocument_order_isValid && m_i_ezsigndocument_pagetotal_isValid && m_i_ezsigndocument_signaturesigned_isValid && m_i_ezsigndocument_signaturetotal_isValid && m_s_ezsigndocument_md5initial_isValid && m_s_ezsigndocument_md5signed_isValid && m_obj_audit_isValid && true;
}

} // namespace OpenAPI
