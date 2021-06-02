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
 * OAIField_eEzsignfolderStep.h
 *
 * The signature step of the Ezsignfolder.
 */

#ifndef OAIField_eEzsignfolderStep_H
#define OAIField_eEzsignfolderStep_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIField_eEzsignfolderStep : public OAIEnum {
public:
    OAIField_eEzsignfolderStep();
    OAIField_eEzsignfolderStep(QString json);
    ~OAIField_eEzsignfolderStep() override;

    QString asJson() const override;
    QJsonValue asJsonValue() const override;
    void fromJsonValue(QJsonValue json) override;
    void fromJson(QString jsonString) override;

    enum class eOAIField_eEzsignfolderStep {
        INVALID_VALUE_OPENAPI_GENERATED = 0,
        UNSENT, 
        SENT, 
        PARTIALLYSIGNED, 
        EXPIRED, 
        SIGNED, 
        COMPLETED, 
        ARCHIVED
    };
    OAIField_eEzsignfolderStep::eOAIField_eEzsignfolderStep getValue() const;
    void setValue(const OAIField_eEzsignfolderStep::eOAIField_eEzsignfolderStep& value);
    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    eOAIField_eEzsignfolderStep m_value;
    bool m_value_isSet;
    bool m_value_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIField_eEzsignfolderStep)

#endif // OAIField_eEzsignfolderStep_H
