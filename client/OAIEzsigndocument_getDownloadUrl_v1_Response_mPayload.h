/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.0.45
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload.h
 *
 * Payload for the /1/object/ezsigndocument/{pkiEzsigndocument}/getDownloadUrl API Request
 */

#ifndef OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload_H
#define OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload();
    OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload(QString json);
    ~OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSDownloadUrl() const;
    void setSDownloadUrl(const QString &s_download_url);
    bool is_s_download_url_Set() const;
    bool is_s_download_url_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_download_url;
    bool m_s_download_url_isSet;
    bool m_s_download_url_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload)

#endif // OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload_H
