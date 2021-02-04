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

/*
 * OAIContact_Request.h
 *
 * A Contact Object
 */

#ifndef OAIContact_Request_H
#define OAIContact_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIContact_Request : public OAIObject {
public:
    OAIContact_Request();
    OAIContact_Request(QString json);
    ~OAIContact_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

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

Q_DECLARE_METATYPE(OpenAPI::OAIContact_Request)

#endif // OAIContact_Request_H
