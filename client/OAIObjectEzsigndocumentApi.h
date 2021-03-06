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

#ifndef OAI_OAIObjectEzsigndocumentApi_H
#define OAI_OAIObjectEzsigndocumentApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"

#include "OAICommon_Response_Error.h"
#include "OAIEzsigndocument_applyEzsigntemplate_v1_Request.h"
#include "OAIEzsigndocument_applyEzsigntemplate_v1_Response.h"
#include "OAIEzsigndocument_createObject_v1_Request.h"
#include "OAIEzsigndocument_createObject_v1_Response.h"
#include "OAIEzsigndocument_deleteObject_v1_Response.h"
#include "OAIEzsigndocument_getDownloadUrl_v1_Response.h"
#include "OAIEzsigndocument_getObject_v1_Response.h"
#include <QList>
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectEzsigndocumentApi : public QObject {
    Q_OBJECT

public:
    OAIObjectEzsigndocumentApi(const int timeOut = 0);
    ~OAIObjectEzsigndocumentApi();

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
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    * @param[in]  oai_ezsigndocument_apply_ezsigntemplate_v1_request OAIEzsigndocument_applyEzsigntemplate_v1_Request [required]
    */
    void ezsigndocumentApplyEzsigntemplateV1(const qint32 &pki_ezsigndocument_id, const OAIEzsigndocument_applyEzsigntemplate_v1_Request &oai_ezsigndocument_apply_ezsigntemplate_v1_request);

    /**
    * @param[in]  oai_ezsigndocument_create_object_v1_request QList<OAIEzsigndocument_createObject_v1_Request> [required]
    */
    void ezsigndocumentCreateObjectV1(const QList<OAIEzsigndocument_createObject_v1_Request> &oai_ezsigndocument_create_object_v1_request);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    */
    void ezsigndocumentDeleteObjectV1(const qint32 &pki_ezsigndocument_id);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    */
    void ezsigndocumentGetChildrenV1(const qint32 &pki_ezsigndocument_id);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    * @param[in]  e_document_type QString [required]
    */
    void ezsigndocumentGetDownloadUrlV1(const qint32 &pki_ezsigndocument_id, const QString &e_document_type);

    /**
    * @param[in]  pki_ezsigndocument_id qint32 [required]
    */
    void ezsigndocumentGetObjectV1(const qint32 &pki_ezsigndocument_id);


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

    void ezsigndocumentApplyEzsigntemplateV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentCreateObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentDeleteObjectV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentGetChildrenV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentGetDownloadUrlV1Callback(OAIHttpRequestWorker *worker);
    void ezsigndocumentGetObjectV1Callback(OAIHttpRequestWorker *worker);

signals:

    void ezsigndocumentApplyEzsigntemplateV1Signal(OAIEzsigndocument_applyEzsigntemplate_v1_Response summary);
    void ezsigndocumentCreateObjectV1Signal(OAIEzsigndocument_createObject_v1_Response summary);
    void ezsigndocumentDeleteObjectV1Signal(OAIEzsigndocument_deleteObject_v1_Response summary);
    void ezsigndocumentGetChildrenV1Signal();
    void ezsigndocumentGetDownloadUrlV1Signal(OAIEzsigndocument_getDownloadUrl_v1_Response summary);
    void ezsigndocumentGetObjectV1Signal(OAIEzsigndocument_getObject_v1_Response summary);

    void ezsigndocumentApplyEzsigntemplateV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_applyEzsigntemplate_v1_Response summary);
    void ezsigndocumentCreateObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_createObject_v1_Response summary);
    void ezsigndocumentDeleteObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_deleteObject_v1_Response summary);
    void ezsigndocumentGetChildrenV1SignalFull(OAIHttpRequestWorker *worker);
    void ezsigndocumentGetDownloadUrlV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_getDownloadUrl_v1_Response summary);
    void ezsigndocumentGetObjectV1SignalFull(OAIHttpRequestWorker *worker, OAIEzsigndocument_getObject_v1_Response summary);

    void ezsigndocumentApplyEzsigntemplateV1SignalE(OAIEzsigndocument_applyEzsigntemplate_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentCreateObjectV1SignalE(OAIEzsigndocument_createObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentDeleteObjectV1SignalE(OAIEzsigndocument_deleteObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetChildrenV1SignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetDownloadUrlV1SignalE(OAIEzsigndocument_getDownloadUrl_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetObjectV1SignalE(OAIEzsigndocument_getObject_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void ezsigndocumentApplyEzsigntemplateV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentCreateObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentDeleteObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetChildrenV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetDownloadUrlV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void ezsigndocumentGetObjectV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();
};

} // namespace OpenAPI
#endif
