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

#ifndef OAI_OAIObjectActivesessionApi_H
#define OAI_OAIObjectActivesessionApi_H

#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"

#include "OAIActivesession_getCurrent_v1_Response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList> 
#include <QList>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIObjectActivesessionApi : public QObject {
    Q_OBJECT

public:
    OAIObjectActivesessionApi(const QString &scheme = "https", const QString &host = "prod.api.appcluster01.ca-central-1.ezmax.com", int port = 0, const QString &basePath = "/rest", const int timeOut = 0);
    ~OAIObjectActivesessionApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setScheme(const QString &scheme);
    void setHost(const QString &host);
    void setPort(int port);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setBasePath(const QString &basePath);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();

    void activesessionGetCurrentV1();

private:
    QString _scheme, _host;
    int _port;
    QString _basePath;
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

    void activesessionGetCurrentV1Callback(OAIHttpRequestWorker *worker);

signals:

    void activesessionGetCurrentV1Signal(OAIActivesession_getCurrent_v1_Response summary);

    void activesessionGetCurrentV1SignalFull(OAIHttpRequestWorker *worker, OAIActivesession_getCurrent_v1_Response summary);

    void activesessionGetCurrentV1SignalE(OAIActivesession_getCurrent_v1_Response summary, QNetworkReply::NetworkError error_type, QString error_str);

    void activesessionGetCurrentV1SignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal(); 
};

} // namespace OpenAPI
#endif
