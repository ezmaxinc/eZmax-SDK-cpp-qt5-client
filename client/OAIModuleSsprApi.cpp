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

#include "OAIModuleSsprApi.h"
#include "OAIHelpers.h"
#include "OAIServerConfiguration.h"
#include <QJsonArray>
#include <QJsonDocument>

namespace OpenAPI {

OAIModuleSsprApi::OAIModuleSsprApi(const int timeOut)
    : _timeOut(timeOut),
      _manager(nullptr),
      isResponseCompressionEnabled(false),
      isRequestCompressionEnabled(false) {
    initializeServerConfigs();
}

OAIModuleSsprApi::~OAIModuleSsprApi() {
}

void OAIModuleSsprApi::initializeServerConfigs(){

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
    
    _serverConfigs.insert("ssprResetPasswordRequestV1",defaultConf);
    _serverIndices.insert("ssprResetPasswordRequestV1",0);
    _serverConfigs.insert("ssprResetPasswordV1",defaultConf);
    _serverIndices.insert("ssprResetPasswordV1",0);
    _serverConfigs.insert("ssprSendUsernamesV1",defaultConf);
    _serverIndices.insert("ssprSendUsernamesV1",0);
    _serverConfigs.insert("ssprUnlockAccountRequestV1",defaultConf);
    _serverIndices.insert("ssprUnlockAccountRequestV1",0);
    _serverConfigs.insert("ssprUnlockAccountV1",defaultConf);
    _serverIndices.insert("ssprUnlockAccountV1",0);
    _serverConfigs.insert("ssprValidateTokenV1",defaultConf);
    _serverIndices.insert("ssprValidateTokenV1",0);
}

/**
* returns 0 on success and -1, -2 or -3 on failure.
* -1 when the variable does not exist and -2 if the value is not defined in the enum and -3 if the operation or server index is not found
*/
int OAIModuleSsprApi::setDefaultServerValue(int serverIndex, const QString &operation, const QString &variable, const QString &value){
    auto it = _serverConfigs.find(operation);
    if(it != _serverConfigs.end() && serverIndex < it.value().size() ){
      return _serverConfigs[operation][serverIndex].setDefaultValue(variable,value);
    }
    return -3;
}
void OAIModuleSsprApi::setServerIndex(const QString &operation, int serverIndex){
    if(_serverIndices.contains(operation) && serverIndex < _serverConfigs.find(operation).value().size() )
        _serverIndices[operation] = serverIndex;
}

void OAIModuleSsprApi::setApiKey(const QString &apiKeyName, const QString &apiKey){
    _apiKeys.insert(apiKeyName,apiKey);
}

void OAIModuleSsprApi::setBearerToken(const QString &token){
    _bearerToken = token;
}

void OAIModuleSsprApi::setUsername(const QString &username) {
    _username = username;
}

void OAIModuleSsprApi::setPassword(const QString &password) {
    _password = password;
}


void OAIModuleSsprApi::setTimeOut(const int timeOut) {
    _timeOut = timeOut;
}

void OAIModuleSsprApi::setWorkingDirectory(const QString &path) {
    _workingDirectory = path;
}

void OAIModuleSsprApi::setNetworkAccessManager(QNetworkAccessManager* manager) {
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
int OAIModuleSsprApi::addServerConfiguration(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables){
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
void OAIModuleSsprApi::setNewServerForAllOperations(const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables){
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
void OAIModuleSsprApi::setNewServer(const QString &operation, const QUrl &url, const QString &description, const QMap<QString, OAIServerVariable> &variables){
    setServerIndex(operation, addServerConfiguration(operation, url, description, variables));
}

void OAIModuleSsprApi::addHeaders(const QString &key, const QString &value) {
    defaultHeaders.insert(key, value);
}

void OAIModuleSsprApi::enableRequestCompression() {
    isRequestCompressionEnabled = true;
}

void OAIModuleSsprApi::enableResponseCompression() {
    isResponseCompressionEnabled = true;
}

void OAIModuleSsprApi::abortRequests(){
    emit abortRequestsSignal();
}

QString OAIModuleSsprApi::getParamStylePrefix(QString style){
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

QString OAIModuleSsprApi::getParamStyleSuffix(QString style){
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

QString OAIModuleSsprApi::getParamStyleDelimiter(QString style, QString name, bool isExplode){

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

void OAIModuleSsprApi::ssprResetPasswordRequestV1(const OAISspr_resetPasswordRequest_v1_Request &oai_sspr_reset_password_request_v1_request) {
    QString fullPath = QString(_serverConfigs["ssprResetPasswordRequestV1"][_serverIndices.value("ssprResetPasswordRequestV1")].URL()+"/1/module/sspr/resetPasswordRequest/");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    QByteArray output = oai_sspr_reset_password_request_v1_request.asJson().toUtf8();
    input.request_body.append(output);
    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIModuleSsprApi::ssprResetPasswordRequestV1Callback);
    connect(this, &OAIModuleSsprApi::abortRequestsSignal, worker, &QObject::deleteLater);
    worker->execute(&input);
}

void OAIModuleSsprApi::ssprResetPasswordRequestV1Callback(OAIHttpRequestWorker *worker) {
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
        emit ssprResetPasswordRequestV1Signal();
        emit ssprResetPasswordRequestV1SignalFull(worker);
    } else {
        emit ssprResetPasswordRequestV1SignalE(error_type, error_str);
        emit ssprResetPasswordRequestV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIModuleSsprApi::ssprResetPasswordV1(const OAISspr_resetPassword_v1_Request &oai_sspr_reset_password_v1_request) {
    QString fullPath = QString(_serverConfigs["ssprResetPasswordV1"][_serverIndices.value("ssprResetPasswordV1")].URL()+"/1/module/sspr/resetPassword");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    QByteArray output = oai_sspr_reset_password_v1_request.asJson().toUtf8();
    input.request_body.append(output);
    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIModuleSsprApi::ssprResetPasswordV1Callback);
    connect(this, &OAIModuleSsprApi::abortRequestsSignal, worker, &QObject::deleteLater);
    worker->execute(&input);
}

void OAIModuleSsprApi::ssprResetPasswordV1Callback(OAIHttpRequestWorker *worker) {
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
        emit ssprResetPasswordV1Signal();
        emit ssprResetPasswordV1SignalFull(worker);
    } else {
        emit ssprResetPasswordV1SignalE(error_type, error_str);
        emit ssprResetPasswordV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIModuleSsprApi::ssprSendUsernamesV1(const OAISspr_sendUsernames_v1_Request &oai_sspr_send_usernames_v1_request) {
    QString fullPath = QString(_serverConfigs["ssprSendUsernamesV1"][_serverIndices.value("ssprSendUsernamesV1")].URL()+"/1/module/sspr/sendUsernames");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    QByteArray output = oai_sspr_send_usernames_v1_request.asJson().toUtf8();
    input.request_body.append(output);
    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIModuleSsprApi::ssprSendUsernamesV1Callback);
    connect(this, &OAIModuleSsprApi::abortRequestsSignal, worker, &QObject::deleteLater);
    worker->execute(&input);
}

void OAIModuleSsprApi::ssprSendUsernamesV1Callback(OAIHttpRequestWorker *worker) {
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
        emit ssprSendUsernamesV1Signal();
        emit ssprSendUsernamesV1SignalFull(worker);
    } else {
        emit ssprSendUsernamesV1SignalE(error_type, error_str);
        emit ssprSendUsernamesV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIModuleSsprApi::ssprUnlockAccountRequestV1(const OAISspr_unlockAccountRequest_v1_Request &oai_sspr_unlock_account_request_v1_request) {
    QString fullPath = QString(_serverConfigs["ssprUnlockAccountRequestV1"][_serverIndices.value("ssprUnlockAccountRequestV1")].URL()+"/1/module/sspr/unlockAccountRequest");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    QByteArray output = oai_sspr_unlock_account_request_v1_request.asJson().toUtf8();
    input.request_body.append(output);
    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIModuleSsprApi::ssprUnlockAccountRequestV1Callback);
    connect(this, &OAIModuleSsprApi::abortRequestsSignal, worker, &QObject::deleteLater);
    worker->execute(&input);
}

void OAIModuleSsprApi::ssprUnlockAccountRequestV1Callback(OAIHttpRequestWorker *worker) {
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
        emit ssprUnlockAccountRequestV1Signal();
        emit ssprUnlockAccountRequestV1SignalFull(worker);
    } else {
        emit ssprUnlockAccountRequestV1SignalE(error_type, error_str);
        emit ssprUnlockAccountRequestV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIModuleSsprApi::ssprUnlockAccountV1(const OAISspr_unlockAccount_v1_Request &oai_sspr_unlock_account_v1_request) {
    QString fullPath = QString(_serverConfigs["ssprUnlockAccountV1"][_serverIndices.value("ssprUnlockAccountV1")].URL()+"/1/module/sspr/unlockAccount");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    QByteArray output = oai_sspr_unlock_account_v1_request.asJson().toUtf8();
    input.request_body.append(output);
    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIModuleSsprApi::ssprUnlockAccountV1Callback);
    connect(this, &OAIModuleSsprApi::abortRequestsSignal, worker, &QObject::deleteLater);
    worker->execute(&input);
}

void OAIModuleSsprApi::ssprUnlockAccountV1Callback(OAIHttpRequestWorker *worker) {
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
        emit ssprUnlockAccountV1Signal();
        emit ssprUnlockAccountV1SignalFull(worker);
    } else {
        emit ssprUnlockAccountV1SignalE(error_type, error_str);
        emit ssprUnlockAccountV1SignalEFull(worker, error_type, error_str);
    }
}

void OAIModuleSsprApi::ssprValidateTokenV1(const OAISspr_validateToken_v1_Request &oai_sspr_validate_token_v1_request) {
    QString fullPath = QString(_serverConfigs["ssprValidateTokenV1"][_serverIndices.value("ssprValidateTokenV1")].URL()+"/1/module/sspr/validateToken");
    
    if(_apiKeys.contains("Authorization")){
        addHeaders("Authorization",_apiKeys.find("Authorization").value());
    }
    

    OAIHttpRequestWorker *worker = new OAIHttpRequestWorker(this, _manager);
    worker->setTimeOut(_timeOut);
    worker->setWorkingDirectory(_workingDirectory);
    OAIHttpRequestInput input(fullPath, "POST");


    QByteArray output = oai_sspr_validate_token_v1_request.asJson().toUtf8();
    input.request_body.append(output);
    foreach (QString key, this->defaultHeaders.keys()) { input.headers.insert(key, this->defaultHeaders.value(key)); }

    connect(worker, &OAIHttpRequestWorker::on_execution_finished, this, &OAIModuleSsprApi::ssprValidateTokenV1Callback);
    connect(this, &OAIModuleSsprApi::abortRequestsSignal, worker, &QObject::deleteLater);
    worker->execute(&input);
}

void OAIModuleSsprApi::ssprValidateTokenV1Callback(OAIHttpRequestWorker *worker) {
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
        emit ssprValidateTokenV1Signal();
        emit ssprValidateTokenV1SignalFull(worker);
    } else {
        emit ssprValidateTokenV1SignalE(error_type, error_str);
        emit ssprValidateTokenV1SignalEFull(worker, error_type, error_str);
    }
}

} // namespace OpenAPI
