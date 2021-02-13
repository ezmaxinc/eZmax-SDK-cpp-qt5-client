/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign application.
 *
 * The version of the OpenAPI document: 1.0.30
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICommon_Response_objSQLQuery.h
 *
 * Definition of objSQLQuery Object
 */

#ifndef OAICommon_Response_objSQLQuery_H
#define OAICommon_Response_objSQLQuery_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICommon_Response_objSQLQuery : public OAIObject {
public:
    OAICommon_Response_objSQLQuery();
    OAICommon_Response_objSQLQuery(QString json);
    ~OAICommon_Response_objSQLQuery() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSQuery() const;
    void setSQuery(const QString &s_query);
    bool is_s_query_Set() const;
    bool is_s_query_Valid() const;

    float getFDuration() const;
    void setFDuration(const float &f_duration);
    bool is_f_duration_Set() const;
    bool is_f_duration_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_query;
    bool m_s_query_isSet;
    bool m_s_query_isValid;

    float f_duration;
    bool m_f_duration_isSet;
    bool m_f_duration_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICommon_Response_objSQLQuery)

#endif // OAICommon_Response_objSQLQuery_H