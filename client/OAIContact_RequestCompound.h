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

/*
 * OAIContact_RequestCompound.h
 *
 * A Contact Object and children to create a complete structure
 */

#ifndef OAIContact_RequestCompound_H
#define OAIContact_RequestCompound_H

#include <QJsonObject>

#include "OAIContact_Request.h"
#include "OAIContact_RequestCompound_allOf.h"
#include "OAIContactinformations_RequestCompound.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIContact_RequestCompound : public OAIObject {
public:
    OAIContact_RequestCompound();
    OAIContact_RequestCompound(QString json);
    ~OAIContact_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIContactinformations_RequestCompound getObjContactinformations() const;
    void setObjContactinformations(const OAIContactinformations_RequestCompound &obj_contactinformations);
    bool is_obj_contactinformations_Set() const;
    bool is_obj_contactinformations_Valid() const;

    qint32 getFkiContacttitleId() const;
    void setFkiContacttitleId(const qint32 &fki_contacttitle_id);
    bool is_fki_contacttitle_id_Set() const;
    bool is_fki_contacttitle_id_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    QString getSContactFirstname() const;
    void setSContactFirstname(const QString &s_contact_firstname);
    bool is_s_contact_firstname_Set() const;
    bool is_s_contact_firstname_Valid() const;

    QString getSContactLastname() const;
    void setSContactLastname(const QString &s_contact_lastname);
    bool is_s_contact_lastname_Set() const;
    bool is_s_contact_lastname_Valid() const;

    QString getSContactCompany() const;
    void setSContactCompany(const QString &s_contact_company);
    bool is_s_contact_company_Set() const;
    bool is_s_contact_company_Valid() const;

    QString getDtContactBirthdate() const;
    void setDtContactBirthdate(const QString &dt_contact_birthdate);
    bool is_dt_contact_birthdate_Set() const;
    bool is_dt_contact_birthdate_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIContactinformations_RequestCompound obj_contactinformations;
    bool m_obj_contactinformations_isSet;
    bool m_obj_contactinformations_isValid;

    qint32 fki_contacttitle_id;
    bool m_fki_contacttitle_id_isSet;
    bool m_fki_contacttitle_id_isValid;

    qint32 fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString s_contact_firstname;
    bool m_s_contact_firstname_isSet;
    bool m_s_contact_firstname_isValid;

    QString s_contact_lastname;
    bool m_s_contact_lastname_isSet;
    bool m_s_contact_lastname_isValid;

    QString s_contact_company;
    bool m_s_contact_company_isSet;
    bool m_s_contact_company_isValid;

    QString dt_contact_birthdate;
    bool m_dt_contact_birthdate_isSet;
    bool m_dt_contact_birthdate_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIContact_RequestCompound)

#endif // OAIContact_RequestCompound_H
