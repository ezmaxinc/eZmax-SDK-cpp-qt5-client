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
 * OAIEzsigndocument_RequestCompound.h
 *
 * An Ezsigndocument Object and children to create a complete structure
 */

#ifndef OAIEzsigndocument_RequestCompound_H
#define OAIEzsigndocument_RequestCompound_H

#include <QJsonObject>

#include "OAIEzsigndocument_Request.h"
#include <QByteArray>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigndocument_RequestCompound : public OAIObject {
public:
    OAIEzsigndocument_RequestCompound();
    OAIEzsigndocument_RequestCompound(QString json);
    ~OAIEzsigndocument_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getEEzsigndocumentSource() const;
    void setEEzsigndocumentSource(const QString &e_ezsigndocument_source);
    bool is_e_ezsigndocument_source_Set() const;
    bool is_e_ezsigndocument_source_Valid() const;

    QString getEEzsigndocumentFormat() const;
    void setEEzsigndocumentFormat(const QString &e_ezsigndocument_format);
    bool is_e_ezsigndocument_format_Set() const;
    bool is_e_ezsigndocument_format_Valid() const;

    QByteArray getSEzsigndocumentBase64() const;
    void setSEzsigndocumentBase64(const QByteArray &s_ezsigndocument_base64);
    bool is_s_ezsigndocument_base64_Set() const;
    bool is_s_ezsigndocument_base64_Valid() const;

    qint32 getFkiEzsignfolderId() const;
    void setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id);
    bool is_fki_ezsignfolder_id_Set() const;
    bool is_fki_ezsignfolder_id_Valid() const;

    QString getDtEzsigndocumentDuedate() const;
    void setDtEzsigndocumentDuedate(const QString &dt_ezsigndocument_duedate);
    bool is_dt_ezsigndocument_duedate_Set() const;
    bool is_dt_ezsigndocument_duedate_Valid() const;

    qint32 getFkiLanguageId() const;
    void setFkiLanguageId(const qint32 &fki_language_id);
    bool is_fki_language_id_Set() const;
    bool is_fki_language_id_Valid() const;

    QString getSEzsigndocumentName() const;
    void setSEzsigndocumentName(const QString &s_ezsigndocument_name);
    bool is_s_ezsigndocument_name_Set() const;
    bool is_s_ezsigndocument_name_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString e_ezsigndocument_source;
    bool m_e_ezsigndocument_source_isSet;
    bool m_e_ezsigndocument_source_isValid;

    QString e_ezsigndocument_format;
    bool m_e_ezsigndocument_format_isSet;
    bool m_e_ezsigndocument_format_isValid;

    QByteArray s_ezsigndocument_base64;
    bool m_s_ezsigndocument_base64_isSet;
    bool m_s_ezsigndocument_base64_isValid;

    qint32 fki_ezsignfolder_id;
    bool m_fki_ezsignfolder_id_isSet;
    bool m_fki_ezsignfolder_id_isValid;

    QString dt_ezsigndocument_duedate;
    bool m_dt_ezsigndocument_duedate_isSet;
    bool m_dt_ezsigndocument_duedate_isValid;

    qint32 fki_language_id;
    bool m_fki_language_id_isSet;
    bool m_fki_language_id_isValid;

    QString s_ezsigndocument_name;
    bool m_s_ezsigndocument_name_isSet;
    bool m_s_ezsigndocument_name_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigndocument_RequestCompound)

#endif // OAIEzsigndocument_RequestCompound_H
