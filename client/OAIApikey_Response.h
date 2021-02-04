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
 * OAIApikey_Response.h
 *
 * An Apikey Object
 */

#ifndef OAIApikey_Response_H
#define OAIApikey_Response_H

#include <QJsonObject>

#include "OAICommon_Audit.h"
#include "OAIMultilingual_ApikeyDescription.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIApikey_Response : public OAIObject {
public:
    OAIApikey_Response();
    OAIApikey_Response(QString json);
    ~OAIApikey_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIMultilingual_ApikeyDescription getObjApikeyDescription() const;
    void setObjApikeyDescription(const OAIMultilingual_ApikeyDescription &obj_apikey_description);
    bool is_obj_apikey_description_Set() const;
    bool is_obj_apikey_description_Valid() const;

    QString getSComputedToken() const;
    void setSComputedToken(const QString &s_computed_token);
    bool is_s_computed_token_Set() const;
    bool is_s_computed_token_Valid() const;

    qint32 getPkiApikeyId() const;
    void setPkiApikeyId(const qint32 &pki_apikey_id);
    bool is_pki_apikey_id_Set() const;
    bool is_pki_apikey_id_Valid() const;

    OAICommon_Audit getObjAudit() const;
    void setObjAudit(const OAICommon_Audit &obj_audit);
    bool is_obj_audit_Set() const;
    bool is_obj_audit_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIMultilingual_ApikeyDescription obj_apikey_description;
    bool m_obj_apikey_description_isSet;
    bool m_obj_apikey_description_isValid;

    QString s_computed_token;
    bool m_s_computed_token_isSet;
    bool m_s_computed_token_isValid;

    qint32 pki_apikey_id;
    bool m_pki_apikey_id_isSet;
    bool m_pki_apikey_id_isValid;

    OAICommon_Audit obj_audit;
    bool m_obj_audit_isSet;
    bool m_obj_audit_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIApikey_Response)

#endif // OAIApikey_Response_H
