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
 * OAIAuthenticate_authenticate_v2_Response_mPayload.h
 *
 * Payload for the /2/module/authenticate/authenticate API Request
 */

#ifndef OAIAuthenticate_authenticate_v2_Response_mPayload_H
#define OAIAuthenticate_authenticate_v2_Response_mPayload_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIAuthenticate_authenticate_v2_Response_mPayload : public OAIObject {
public:
    OAIAuthenticate_authenticate_v2_Response_mPayload();
    OAIAuthenticate_authenticate_v2_Response_mPayload(QString json);
    ~OAIAuthenticate_authenticate_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSAuthorization() const;
    void setSAuthorization(const QString &s_authorization);
    bool is_s_authorization_Set() const;
    bool is_s_authorization_Valid() const;

    QString getSSecret() const;
    void setSSecret(const QString &s_secret);
    bool is_s_secret_Set() const;
    bool is_s_secret_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_authorization;
    bool m_s_authorization_isSet;
    bool m_s_authorization_isValid;

    QString s_secret;
    bool m_s_secret_isSet;
    bool m_s_secret_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIAuthenticate_authenticate_v2_Response_mPayload)

#endif // OAIAuthenticate_authenticate_v2_Response_mPayload_H
