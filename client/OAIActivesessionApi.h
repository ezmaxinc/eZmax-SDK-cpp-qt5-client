/**
 * eZmax API Definition
 * TODO Api description
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIActivesessionApi_H
#define OAI_OAIActivesessionApi_H

#include "OAIHttpRequest.h"

#include <QString>

#include <QObject>
#include <QNetworkAccessManager>

namespace OpenAPI {

class OAIActivesessionApi : public QObject {
    Q_OBJECT

public:
    OAIActivesessionApi(const QString &scheme = "https", const QString &host = "prod.api.appcluster01.ca-central-1.ezmax.com", int port = 0, const QString &basePath = "/rest", const int timeOut = 0);
    ~OAIActivesessionApi();

    void setScheme(const QString &scheme);
    void setHost(const QString &host);
    void setPort(int port);
    void setBasePath(const QString &basePath);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();

    void getCurrent();

private:
    QString _scheme, _host;
    int _port;
    QString _basePath;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> defaultHeaders;
    bool isResponseCompressionEnabled;
    bool isRequestCompressionEnabled;

    void getCurrentCallback(OAIHttpRequestWorker *worker);

signals:

    void getCurrentSignal();

    void getCurrentSignalFull(OAIHttpRequestWorker *worker);

    void getCurrentSignalE(QNetworkReply::NetworkError error_type, QString error_str);

    void getCurrentSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);

    void abortRequestsSignal(); 
};

} // namespace OpenAPI
#endif