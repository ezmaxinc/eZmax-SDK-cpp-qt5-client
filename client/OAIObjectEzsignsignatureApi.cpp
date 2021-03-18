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

#include "OAIObjectEzsignsignatureApi.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIObjectEzsignsignatureApi::OAIObjectEzsignsignatureApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      isResponseCompressionEnabled(false),
      isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIObjectEzsignsignatureApi::~OAIObjectEzsignsignatureApi() {
}

void OAIObjectEzsignsignatureApi::initializeServerConfigs(){
    //Default server
    QList<OAIServerConfiguration> defaultConf = QList<OAIServerConfiguration>();
    //varying endpoint server
    QList<OAIServerConfiguration> serverConf = QList<OAIServerConfiguration>();
    defaultConf.append(OAIServerConfiguration(
    QUrl("https://{sInfrastructureenvironmenttypeDescription}.api.appcluster01.{sInfrastructureregionCode}.ezmax.com/rest"),
    "The server endpoint where to send your region specific API requests.",
    QMap<QString, OAIServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", OAIServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"stg"},{"qa"},{"dev"} })},
    
    {"sInfrastructureregionCode", OAIServerVariable("The region where your services are hosted.","ca-central-1",
    QSet<QString>{ {"ca-central-1"},{"local"} })}, }));
    
    defaultConf.append(OAIServerConfiguration(
    QUrl("https://{sInfrastructureenvironmenttypeDescription}.api.global.ezmax.com/"),
    "The server endpoint where to send your global API requests.",
    QMap<QString, OAIServerVariable>{ 
    {"sInfrastructureenvironmenttypeDescription", OAIServerVariable("The environment on on which to call the API. Should always be "prod" unless instructed otherwise by support.","prod",
    QSet<QString>{ {"prod"},{"stg"},{"qa"},{"dev"} })}, }));
    
    _serverConfigs.insert("ezsignsignatureCreateObjectV1", defaultConf);
    _serverIndices.insert("ezsignsignatureCreateObjectV1", 0);
    _serverConfigs.insert("ezsignsignatureDeleteObjectV1", defaultConf);
    _serverIndices.insert("ezsignsignatureDeleteObjectV1", 0);
    _serverConfigs.insert("ezsignsignatureGetChildrenV1", defaultConf);
    _serverIndices.insert("ezsignsignatureGetChildrenV1", 0);
    _serverConfigs.insert("ezsignsignatureGetObjectV1", defaultConf);
    _serverIndices.insert("ezsignsignatureGetObjectV1", 0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIObjectEzsignsignatureApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value){
    auto it = _serverConfigs.find(operation);
    if(it != _serverConfigs.end() && serverIndex < it.value().size() ){
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIObjectEzsignsignatureApi::setServerIndex(const QString &operation, int serverIndex){
    if(_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size() )
        _serverIndices[operation] = serverIndex;
}

void OAIObjectEzsignsignatureApi::setApiKey(const QString &apiKeyName, const QString &apiKey){
    _apiKeys.insert(apiKeyName,apiKey);
}

void OAIObjectEzsignsignatureApi::setBearerToken(const QString &token){
    _bearerToken = token;
}

void OAIObjectEzsignsignatureApi::setUsername(const QString &username) {
    _username = username;
}

void OAIObjectEzsignsignatureApi::setPassword(const QString &password) {
    _password = password;
}


void OAIObjectEzsignsignatureApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIObjectEzsignsignatureApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIObjectEzsignsignatureApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
    _manager = manager;
}

/**
    * Appends a new ServerConfiguration to the config map for a specific operation.
    * @param operation The id to the target operation.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    * returns the index of the new server config on success and -1 if the operation is not found
    */
int OAIObjectEzsignsignatureApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables){
    if(_serverConfigs.contains(operation)){
        _serverConfigs[operation].append(OAIServerConfiguration(
                    url,
                    description,
                    variables));
        return _serverConfigs[operation].size()-1;
    }else{
        return -1;
    }
}

/**
    * Appends a new ServerConfiguration to the config map for a all operations and sets the index to that server.
    * @param url A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIObjectEzsignsignatureApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables){
    for(auto e : _serverIndices.keys()){
        setServerIndex(e, addServerConfiguration(e, url, description, variables));
    }
}

/**
    * Appends a new ServerConfiguration to the config map for an operations and sets the index to that server.
    * @param URL A string that contains the URL of the server
    * @param description A String that describes the server
    * @param variables A map between a variable name and its value. The value is used for substitution in the server's URL template.
    */
void OAIObjectEzsignsignatureApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables){
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIObjectEzsignsignatureApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAIObjectEzsignsignatureApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAIObjectEzsignsignatureApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAIObjectEzsignsignatureApi::abortRequests(){
    emit abortRequestsSignal();
}

QString OAIObjectEzsignsignatureApi::getParamStylePrefix(QString style){
    if(style == "matrix"){
        return ";";
    }else if(style == "label"){
        return ".";
    }else if(style == "form"){
        return "&";
    }else if(style == "simple"){
        return "";
    }else if(style == "spaceDelimited"){
        return "&";
    }else if(style == "pipeDelimited"){
        return "&";
    }else{
        return "none";
    }
}

QString OAIObjectEzsignsignatureApi::getParamStyleSuffix(QString style){
    if(style == "matrix"){
        return "=";
    }else if(style == "label"){
        return "";
    }else if(style == "form"){
        return "=";
    }else if(style == "simple"){
        return "";
    }else if(style == "spaceDelimited"){
        return "=";
    }else if(style == "pipeDelimited"){
        return "=";
    }else{
        return "none";
    }
}

QString OAIObjectEzsignsignatureApi::getParamStyleDelimiter(QString style, QString name, bool isExplode){

    if(style == "matrix"){
        return (isExplode) ? ";" + name + "=" : ",";

    }else if(style == "label"){
        return (isExplode) ? "." : ",";

    }else if(style == "form"){
        return (isExplode) ? "&" + name + "=" : ",";

    }else if(style == "simple"){
        return ",";
    }else if(style == "spaceDelimited"){
        return (isExplode) ? "&" + name + "=" : " ";

    }else if(style == "pipeDelimited"){
        return (isExplode) ? "&" + name + "=" : "|";

    }else if(style == "deepObject"){
        return (isExplode) ? "&" : "none";

    }else {
        return "none";
    }
}

void OAIObjectEzsignsignatureApi::ezsignsignatureCreateObjectV1(const QList<OAIEzsignsignature_createObject_v1_Request> &oai_ezsignsignature_create_object_v1_request) {
    QString fullPath = QString(_serverConfigs["ezsignsignatureCreateObjectV1"][_serverIndices.value("ezsignsignatureCreateObjectV1")].URL()+"/1/object/ezsignsignature");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");

    {
        QJsonDocument doc(::OpenAPI::toJsonValue(oai_ezsignsignature_create_object_v1_request).toArray());
        QByteArray bytes = doc.toJson();
        input.request_body.append(bytes);
    }
    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignatureApi::ezsignsignatureCreateObjectV1Callback);
    connect(this, &OAIObjectEzsignsignatureApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, [this](){
        if(findChildren<OAIHttpRequestWorker*>().count() == 0){
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignsignatureApi::ezsignsignatureCreateObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsignsignature_createObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignatureCreateObjectV1Signal(output);
        emit ezsignsignatureCreateObjectV1SignalFull(worker, output);
    } else {
        emit ezsignsignatureCreateObjectV1SignalE(output, error_type, error_str);
        emit ezsignsignatureCreateObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignsignatureApi::ezsignsignatureDeleteObjectV1(const qint32 &pki_ezsignsignature_id) {
    QString fullPath = QString(_serverConfigs["ezsignsignatureDeleteObjectV1"][_serverIndices.value("ezsignsignatureDeleteObjectV1")].URL()+"/1/object/ezsignsignature/{pkiEzsignsignatureID}");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignsignature_idPathParam("{");
        pki_ezsignsignature_idPathParam.append("pkiEzsignsignatureID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if(pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignsignatureID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignsignatureID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignsignature_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignsignature_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "DELETE");


    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignatureApi::ezsignsignatureDeleteObjectV1Callback);
    connect(this, &OAIObjectEzsignsignatureApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, [this](){
        if(findChildren<OAIHttpRequestWorker*>().count() == 0){
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignsignatureApi::ezsignsignatureDeleteObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsignsignature_deleteObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignatureDeleteObjectV1Signal(output);
        emit ezsignsignatureDeleteObjectV1SignalFull(worker, output);
    } else {
        emit ezsignsignatureDeleteObjectV1SignalE(output, error_type, error_str);
        emit ezsignsignatureDeleteObjectV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignsignatureApi::ezsignsignatureGetChildrenV1(const qint32 &pki_ezsignsignature_id) {
    QString fullPath = QString(_serverConfigs["ezsignsignatureGetChildrenV1"][_serverIndices.value("ezsignsignatureGetChildrenV1")].URL()+"/1/object/ezsignsignature/{pkiEzsignsignatureID}/getChildren");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignsignature_idPathParam("{");
        pki_ezsignsignature_idPathParam.append("pkiEzsignsignatureID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if(pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignsignatureID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignsignatureID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignsignature_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignsignature_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignatureApi::ezsignsignatureGetChildrenV1Callback);
    connect(this, &OAIObjectEzsignsignatureApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, [this](){
        if(findChildren<OAIHttpRequestWorker*>().count() == 0){
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignsignatureApi::ezsignsignatureGetChildrenV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignatureGetChildrenV1Signal();
        emit ezsignsignatureGetChildrenV1SignalFull(worker);
    } else {
        emit ezsignsignatureGetChildrenV1SignalE(error_type, error_str);
        emit ezsignsignatureGetChildrenV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIObjectEzsignsignatureApi::ezsignsignatureGetObjectV1(const qint32 &pki_ezsignsignature_id) {
    QString fullPath = QString(_serverConfigs["ezsignsignatureGetObjectV1"][_serverIndices.value("ezsignsignatureGetObjectV1")].URL()+"/1/object/ezsignsignature/{pkiEzsignsignatureID}");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    
    
    {
        QString pki_ezsignsignature_idPathParam("{");
        pki_ezsignsignature_idPathParam.append("pkiEzsignsignatureID").append("}");
        QString pathPrefix, pathSuffix, pathDelimiter;
        QString pathStyle = "simple";
        if(pathStyle == "")
            pathStyle = "simple";
        pathPrefix = getParamStylePrefix(pathStyle);
        pathSuffix = getParamStyleSuffix(pathStyle);
        pathDelimiter = getParamStyleDelimiter(pathStyle, "pkiEzsignsignatureID", false);
        QString paramString = (pathStyle == "matrix") ? pathPrefix+"pkiEzsignsignatureID"+pathSuffix : pathPrefix;
        fullPath.replace(pki_ezsignsignature_idPathParam, paramString+QUrl::toPercentEncoding(::OpenAPI::toStringValue(pki_ezsignsignature_id)));
    }
    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "GET");


    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIObjectEzsignsignatureApi::ezsignsignatureGetObjectV1Callback);
    connect(this, &OAIObjectEzsignsignatureApi::abortRequestsSignal, worker, &QObject::deleteLater);
    connect(worker, &QObject::destroyed, [this](){
        if(findChildren<OAIHttpRequestWorker*>().count() == 0){
            emit allPendingRequestsCompleted();
        }
    });

    worker->execute(&input);
}

void OAIObjectEzsignsignatureApi::ezsignsignatureGetObjectV1Callback(OAIHttpRequestWorker *worker) {
    QString msg;
    QString error_str = worker->error_str;
    QNetworkReply::NetworkError error_type = worker->error_type;

    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    } else {
        msg = "Error: " + worker->error_str;
        error_str = QString("%1, %2").arg(worker->error_str).arg(QString(worker->response));
    }
    OAIEzsignsignature_getObject_v1_Response output(QString(worker->response));
    worker->deleteLater();

    if (worker->error_type == QNetworkReply::NoError) {
        emit ezsignsignatureGetObjectV1Signal(output);
        emit ezsignsignatureGetObjectV1SignalFull(worker, output);
    } else {
        emit ezsignsignatureGetObjectV1SignalE(output, error_type, error_str);
        emit ezsignsignatureGetObjectV1SignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
