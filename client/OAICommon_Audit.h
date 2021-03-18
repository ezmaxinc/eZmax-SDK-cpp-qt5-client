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

/*
 * OAICommon_Audit.h
 *
 * Gives informations about the user that created the object and the last user to have modified it.  If the object was never modified after creation, both Created and Modified informations will be the same.  Apikey details will only be provided if the changes were made by an API key.  
 */

#ifndef OAICommon_Audit_H
#define OAICommon_Audit_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICommon_Audit : public OAIObject {
public:
    OAICommon_Audit();
    OAICommon_Audit(QString json);
    ~OAICommon_Audit() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiUserIdCreated() const;
    void setFkiUserIdCreated(const qint32 &fki_user_id_created);
    bool is_fki_user_id_created_Set() const;
    bool is_fki_user_id_created_Valid() const;

    qint32 getFkiUserIdModified() const;
    void setFkiUserIdModified(const qint32 &fki_user_id_modified);
    bool is_fki_user_id_modified_Set() const;
    bool is_fki_user_id_modified_Valid() const;

    qint32 getFkiApikeyIdCreated() const;
    void setFkiApikeyIdCreated(const qint32 &fki_apikey_id_created);
    bool is_fki_apikey_id_created_Set() const;
    bool is_fki_apikey_id_created_Valid() const;

    qint32 getFkiApikeyIdModified() const;
    void setFkiApikeyIdModified(const qint32 &fki_apikey_id_modified);
    bool is_fki_apikey_id_modified_Set() const;
    bool is_fki_apikey_id_modified_Valid() const;

    QString getDtCreatedDate() const;
    void setDtCreatedDate(const QString &dt_created_date);
    bool is_dt_created_date_Set() const;
    bool is_dt_created_date_Valid() const;

    QString getDtModifiedDate() const;
    void setDtModifiedDate(const QString &dt_modified_date);
    bool is_dt_modified_date_Set() const;
    bool is_dt_modified_date_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 fki_user_id_created;
    bool m_fki_user_id_created_isSet;
    bool m_fki_user_id_created_isValid;

    qint32 fki_user_id_modified;
    bool m_fki_user_id_modified_isSet;
    bool m_fki_user_id_modified_isValid;

    qint32 fki_apikey_id_created;
    bool m_fki_apikey_id_created_isSet;
    bool m_fki_apikey_id_created_isValid;

    qint32 fki_apikey_id_modified;
    bool m_fki_apikey_id_modified_isSet;
    bool m_fki_apikey_id_modified_isValid;

    QString dt_created_date;
    bool m_dt_created_date_isSet;
    bool m_dt_created_date_isValid;

    QString dt_modified_date;
    bool m_dt_modified_date_isSet;
    bool m_dt_modified_date_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Audit)

#endif // OAICommon_Audit_H
