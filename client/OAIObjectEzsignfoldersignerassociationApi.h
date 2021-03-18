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

#ifndef OAI_OAIObjectEzsignfoldersignerassociationApi_H
#define OAI_OAIObjectEzsignfoldersignerassociationApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsignfoldersignerassociation_createObject_v1_Request.h"
#include "OAIEzsignfoldersignerassociation_createObject_v1_Response.h"
#include "OAIEzsignfoldersignerassociation_deleteObject_v1_Response.h"
#include "OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response.h"
#include "OAIEzsignfoldersignerassociation_getObject_v1_Response.h"
#include <QList>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsignfoldersignerassociationApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsignfoldersignerassociationApi(const int timeOut = 0);
    ~OAIObjectEzsignfoldersignerassociationApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(QString style);
    QString getParamStyleSuffix(QString style);
    QString getParamStyleDelimiter(QString style, QString name, bool isExplode);

    /**
    * @param[in]  oai_ezsignfoldersignerassociation_create_object_v1_request QList<OAIEzsignfoldersignerassociation_createObject_v1_Request> [required]
    */
    void ezsignfoldersignerassociationCreateObjectV1(const QList<OAIEzsignfoldersignerassociation_createObject_v1_Request> &oai_ezsignfoldersignerassociation_create_object_v1_request);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    */
    void ezsignfoldersignerassociationDeleteObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    */
    void ezsignfoldersignerassociationGetChildrenV1(const qint32 &pki_ezsignfoldersignerassociation_id);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    */
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1(const qint32 &pki_ezsignfoldersignerassociation_id);

    /**
    * @param[in]  pki_ezsignfoldersignerassociation_id qint32 [required]
    */
    void ezsignfoldersignerassociationGetObjectV1(const qint32 &pki_ezsignfoldersignerassociation_id);


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> defaultHeaders;
    bool isResponseCompressionEnabled;
    bool isRequestCompressionEnabled;

    void ezsignfoldersignerassociationCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationGetChildrenV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1Callback(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationGetObjectV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsignfoldersignerassociationCreateObjectV1Signal(OAIEzsignfoldersignerassociation_createObject_v1_Response summary);
    void ezsignfoldersignerassociationDeleteObjectV1Signal(OAIEzsignfoldersignerassociation_deleteObject_v1_Response summary);
    void ezsignfoldersignerassociationGetChildrenV1Signal();
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1Signal(OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response summary);
    void ezsignfoldersignerassociationGetObjectV1Signal(OAIEzsignfoldersignerassociation_getObject_v1_Response summary);

    void ezsignfoldersignerassociationCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_createObject_v1_Response summary);
    void ezsignfoldersignerassociationDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_deleteObject_v1_Response summary);
    void ezsignfoldersignerassociationGetChildrenV1SignalFull(OAIHttpRequestWorker *worker);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response summary);
    void ezsignfoldersignerassociationGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsignfoldersignerassociation_getObject_v1_Response summary);

    void ezsignfoldersignerassociationCreateObjectV1SignalE(OAIEzsignfoldersignerassociation_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationDeleteObjectV1SignalE(OAIEzsignfoldersignerassociation_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetChildrenV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalE(OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetObjectV1SignalE(OAIEzsignfoldersignerassociation_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsignfoldersignerassociationCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetChildrenV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetInPersonLoginUrlV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsignfoldersignerassociationGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();
};

} // namespace OpenAPI
#endif
