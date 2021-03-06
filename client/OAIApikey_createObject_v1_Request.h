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

/*
 * OAIApikey_createObject_v1_Request.h
 *
 * Request for the /1/object/apikey/createObject API Request
 */

#ifndef OAIApikey_createObject_v1_Request_H
#define OAIApikey_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIApikey_Request.h"
#include "OAIApikey_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIApikey_createObject_v1_Request : public OAIObject {
public:
    OAIApikey_createObject_v1_Request();
    OAIApikey_createObject_v1_Request(QString json);
    ~OAIApikey_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIApikey_Request getObjApikey() const;
    void setObjApikey(const OAIApikey_Request &obj_apikey);
    bool is_obj_apikey_Set() const;
    bool is_obj_apikey_Valid() const;

    OAIApikey_RequestCompound getObjApikeyCompound() const;
    void setObjApikeyCompound(const OAIApikey_RequestCompound &obj_apikey_compound);
    bool is_obj_apikey_compound_Set() const;
    bool is_obj_apikey_compound_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIApikey_Request obj_apikey;
    bool m_obj_apikey_isSet;
    bool m_obj_apikey_isValid;

    OAIApikey_RequestCompound obj_apikey_compound;
    bool m_obj_apikey_compound_isSet;
    bool m_obj_apikey_compound_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIApikey_createObject_v1_Request)

#endif // OAIApikey_createObject_v1_Request_H
