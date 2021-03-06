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
 * OAIEzsignsigner_RequestCompound.h
 *
 * An Ezsignsigner Object and children to create a complete structure
 */

#ifndef OAIEzsignsigner_RequestCompound_H
#define OAIEzsignsigner_RequestCompound_H

#include <QJsonObject>

#include "OAIEzsignsigner_Request.h"
#include "OAIEzsignsigner_RequestCompound_Contact.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignsigner_RequestCompound : public OAIObject {
public:
    OAIEzsignsigner_RequestCompound();
    OAIEzsignsigner_RequestCompound(QString json);
    ~OAIEzsignsigner_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsignsigner_RequestCompound_Contact getObjContact() const;
    void setObjContact(const OAIEzsignsigner_RequestCompound_Contact &obj_contact);
    bool is_obj_contact_Set() const;
    bool is_obj_contact_Valid() const;

    qint32 getFkiTaxassignmentId() const;
    void setFkiTaxassignmentId(const qint32 &fki_taxassignment_id);
    bool is_fki_taxassignment_id_Set() const;
    bool is_fki_taxassignment_id_Valid() const;

    qint32 getFkiSecretquestionId() const;
    void setFkiSecretquestionId(const qint32 &fki_secretquestion_id);
    bool is_fki_secretquestion_id_Set() const;
    bool is_fki_secretquestion_id_Valid() const;

    QString getEEzsignsignerLogintype() const;
    void setEEzsignsignerLogintype(const QString &e_ezsignsigner_logintype);
    bool is_e_ezsignsigner_logintype_Set() const;
    bool is_e_ezsignsigner_logintype_Valid() const;

    QString getSEzsignsignerSecretanswer() const;
    void setSEzsignsignerSecretanswer(const QString &s_ezsignsigner_secretanswer);
    bool is_s_ezsignsigner_secretanswer_Set() const;
    bool is_s_ezsignsigner_secretanswer_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsignsigner_RequestCompound_Contact obj_contact;
    bool m_obj_contact_isSet;
    bool m_obj_contact_isValid;

    qint32 fki_taxassignment_id;
    bool m_fki_taxassignment_id_isSet;
    bool m_fki_taxassignment_id_isValid;

    qint32 fki_secretquestion_id;
    bool m_fki_secretquestion_id_isSet;
    bool m_fki_secretquestion_id_isValid;

    QString e_ezsignsigner_logintype;
    bool m_e_ezsignsigner_logintype_isSet;
    bool m_e_ezsignsigner_logintype_isValid;

    QString s_ezsignsigner_secretanswer;
    bool m_s_ezsignsigner_secretanswer_isSet;
    bool m_s_ezsignsigner_secretanswer_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsigner_RequestCompound)

#endif // OAIEzsignsigner_RequestCompound_H
