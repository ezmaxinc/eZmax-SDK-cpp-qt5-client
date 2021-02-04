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
 * OAIEzsignfoldersignerassociation_createObject_v1_Request.h
 *
 * Request for the /1/object/ezsignfoldersignerassociation/createObject API Request
 */

#ifndef OAIEzsignfoldersignerassociation_createObject_v1_Request_H
#define OAIEzsignfoldersignerassociation_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsignfoldersignerassociation_Request.h"
#include "OAIEzsignfoldersignerassociation_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfoldersignerassociation_createObject_v1_Request : public OAIObject {
public:
    OAIEzsignfoldersignerassociation_createObject_v1_Request();
    OAIEzsignfoldersignerassociation_createObject_v1_Request(QString json);
    ~OAIEzsignfoldersignerassociation_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignfoldersignerassociation_Request getObjEzsignfoldersignerassociation() const;
    void setObjEzsignfoldersignerassociation(const OAIEzsignfoldersignerassociation_Request &obj_ezsignfoldersignerassociation);
    bool is_obj_ezsignfoldersignerassociation_Set() const;
    bool is_obj_ezsignfoldersignerassociation_Valid() const;

    OAIEzsignfoldersignerassociation_RequestCompound getObjEzsignfoldersignerassociationCompound() const;
    void setObjEzsignfoldersignerassociationCompound(const OAIEzsignfoldersignerassociation_RequestCompound &obj_ezsignfoldersignerassociation_compound);
    bool is_obj_ezsignfoldersignerassociation_compound_Set() const;
    bool is_obj_ezsignfoldersignerassociation_compound_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignfoldersignerassociation_Request obj_ezsignfoldersignerassociation;
    bool m_obj_ezsignfoldersignerassociation_isSet;
    bool m_obj_ezsignfoldersignerassociation_isValid;

    OAIEzsignfoldersignerassociation_RequestCompound obj_ezsignfoldersignerassociation_compound;
    bool m_obj_ezsignfoldersignerassociation_compound_isSet;
    bool m_obj_ezsignfoldersignerassociation_compound_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldersignerassociation_createObject_v1_Request)

#endif // OAIEzsignfoldersignerassociation_createObject_v1_Request_H
