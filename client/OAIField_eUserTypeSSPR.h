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

/*
 * OAIField_eUserTypeSSPR.h
 *
 * The user type of the User for SSPR
 */

#ifndef OAIField_eUserTypeSSPR_H
#define OAIField_eUserTypeSSPR_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eUserTypeSSPR : public OAIEnum {
public:
    OAIField_eUserTypeSSPR();
    OAIField_eUserTypeSSPR(QString json);
    ~OAIField_eUserTypeSSPR() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eUserTypeSSPR {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        EZSIGNUSER, 
        NATIVE
    };
    OAIField_eUserTypeSSPR::eOAIField_eUserTypeSSPR getValue() const;
    void setValue(const OAIField_eUserTypeSSPR::eOAIField_eUserTypeSSPR& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eUserTypeSSPR m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eUserTypeSSPR)

#endif // OAIField_eUserTypeSSPR_H
