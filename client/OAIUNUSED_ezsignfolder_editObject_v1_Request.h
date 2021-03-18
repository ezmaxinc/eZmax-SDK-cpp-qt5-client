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
 * OAIUNUSED_ezsignfolder_editObject_v1_Request.h
 *
 * Request for the /1/object/ezsignfolder/editObject API Request
 */

#ifndef OAIUNUSED_ezsignfolder_editObject_v1_Request_H
#define OAIUNUSED_ezsignfolder_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignfolder_Request.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIUNUSED_ezsignfolder_editObject_v1_Request : public OAIObject {
public:
    OAIUNUSED_ezsignfolder_editObject_v1_Request();
    OAIUNUSED_ezsignfolder_editObject_v1_Request(QString json);
    ~OAIUNUSED_ezsignfolder_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignfolder_Request getObjEzsignfolder() const;
    void setObjEzsignfolder(const OAIEzsignfolder_Request &obj_ezsignfolder);
    bool is_obj_ezsignfolder_Set() const;
    bool is_obj_ezsignfolder_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignfolder_Request obj_ezsignfolder;
    bool m_obj_ezsignfolder_isSet;
    bool m_obj_ezsignfolder_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIUNUSED_ezsignfolder_editObject_v1_Request)

#endif // OAIUNUSED_ezsignfolder_editObject_v1_Request_H
