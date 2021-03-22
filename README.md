# 

eZmax API Definition

- API version: 1.0.38

This API expose all the functionnalities for the eZmax and eZsign applications.

  For more information, please visit [https://www.ezmax.ca/en/contact](https://www.ezmax.ca/en/contact)

*Automatically generated by the [OpenAPI Generator](https://openapi-generator.tech)*

## Licence

MIT License

for more information visit [MIT License](https://opensource.org/licenses/MIT)

## Requirements

Building the API client library requires:

1. Java 1.7+
2. Maven/Gradle

## Installation

To install the API client library to your local Maven repository, simply execute:

```shell
mvn clean install
```

To deploy it to a remote Maven repository instead, configure the settings of the repository and execute:

```shell
mvn clean deploy
```

Refer to the [OSSRH Guide](http://central.sonatype.org/pages/ossrh-guide.html) for more information.

### Generate manually

At first generate the JAR by executing:

```shell
mvn clean package
```

Use the Jar file to generate the Qt5 Client:

```shell
java -jar target/openapi-generator-cli.jar generate -i <yourOpenApiFile> -g cpp-qt5-client -o <outputDir>
```

## Getting Started

Please follow the [installation](#installation) instruction and execute the following Java code:

example.h:

```c++

#include <iostream>
#include "../client/OAIGlobalCustomerApi.h"

using namespace test_namespace;

class Example : public QObject {
    Q_OBJECT
    QString create();
    QString create();
public slots:
   void exampleFunction1();
};

```
example.cpp:

```c++

#include "../client/OAIGlobalCustomerApi.h"
#include "example.h"
#include <QTimer>
#include <QEventLoop> 

QString Example::create(){
    QString obj;
QString Example::create(){
    QString obj;
 return obj;
}

void Example::exampleFunction1(){
     OAIGlobalCustomerApi apiInstance;
     
      // Configure API key authorization: Authorization
      apiInstance.setApiKey("YOUR API KEY NAME","YOUR API KEY");
        
      QEventLoop loop;
      connect(&apiInstance, &OAIGlobalCustomerApi::globalCustomerGetEndpointV1Signal, [&]() {
          loop.quit();
      });
      connect(&apiInstance, &OAIGlobalCustomerApi::globalCustomerGetEndpointV1SignalE, [&](QNetworkReply::NetworkError, QString error_str) {
          qDebug() << "Error happened while issuing request : " << error_str;
          loop.quit();
      });

      QString pks_customer_code = create(); // QString | The customer code assigned to your account
        
      QEventLoop loop;
      connect(&apiInstance, &OAIGlobalCustomerApi::globalCustomerGetEndpointV1Signal, [&]() {
          loop.quit();
      });
      connect(&apiInstance, &OAIGlobalCustomerApi::globalCustomerGetEndpointV1SignalE, [&](QNetworkReply::NetworkError, QString error_str) {
          qDebug() << "Error happened while issuing request : " << error_str;
          loop.quit();
      });

      QString s_infrastructureproduct_code = create(); // QString | The infrastructure product Code  If undefined, \"appcluster01\" is assumed
      apiInstance.globalCustomerGetEndpointV1(pks_customer_codes_infrastructureproduct_code);
      QTimer::singleShot(5000, &loop, &QEventLoop::quit);
      loop.exec();
  }

```

## Documentation for API Endpoints

All URIs are relative to *https://prod.api.appcluster01.ca-central-1.ezmax.com/rest*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*OAIGlobalCustomerApi* | [**globalCustomerGetEndpointV1**](OAIGlobalCustomerApi.md#globalCustomerGetEndpointV1) | **GET** /1/customer/{pksCustomerCode}/endpoint | Get customer endpoint
*OAIModuleSsprApi* | [**ssprResetPasswordRequestV1**](OAIModuleSsprApi.md#ssprResetPasswordRequestV1) | **POST** /1/module/sspr/resetPasswordRequest | Reset Password Request
*OAIModuleSsprApi* | [**ssprResetPasswordV1**](OAIModuleSsprApi.md#ssprResetPasswordV1) | **POST** /1/module/sspr/resetPassword | Reset Password
*OAIModuleSsprApi* | [**ssprSendUsernamesV1**](OAIModuleSsprApi.md#ssprSendUsernamesV1) | **POST** /1/module/sspr/sendUsernames | Send username(s)
*OAIModuleSsprApi* | [**ssprUnlockAccountRequestV1**](OAIModuleSsprApi.md#ssprUnlockAccountRequestV1) | **POST** /1/module/sspr/unlockAccountRequest | Unlock Account Request
*OAIModuleSsprApi* | [**ssprUnlockAccountV1**](OAIModuleSsprApi.md#ssprUnlockAccountV1) | **POST** /1/module/sspr/unlockAccount | Unlock Account
*OAIModuleSsprApi* | [**ssprValidateTokenV1**](OAIModuleSsprApi.md#ssprValidateTokenV1) | **POST** /1/module/sspr/validateToken | Validate Token
*OAIModuleUserApi* | [**userCreateEzsignuserV1**](OAIModuleUserApi.md#userCreateEzsignuserV1) | **POST** /1/module/user/createezsignuser | Create a new User of type Ezsignuser
*OAIObjectActivesessionApi* | [**activesessionGetCurrentV1**](OAIObjectActivesessionApi.md#activesessionGetCurrentV1) | **GET** /1/object/activesession/getCurrent | Get Current Activesession
*OAIObjectApikeyApi* | [**apikeyCreateObjectV1**](OAIObjectApikeyApi.md#apikeyCreateObjectV1) | **POST** /1/object/apikey | Create a new Apikey
*OAIObjectEzsigndocumentApi* | [**ezsigndocumentApplyEzsigntemplateV1**](OAIObjectEzsigndocumentApi.md#ezsigndocumentApplyEzsigntemplateV1) | **POST** /1/object/ezsigndocument/{pkiEzsigndocumentID}/applyezsigntemplate | Apply an Ezsign Template to the Ezsigndocument.
*OAIObjectEzsigndocumentApi* | [**ezsigndocumentCreateObjectV1**](OAIObjectEzsigndocumentApi.md#ezsigndocumentCreateObjectV1) | **POST** /1/object/ezsigndocument | Create a new Ezsigndocument
*OAIObjectEzsigndocumentApi* | [**ezsigndocumentDeleteObjectV1**](OAIObjectEzsigndocumentApi.md#ezsigndocumentDeleteObjectV1) | **DELETE** /1/object/ezsigndocument/{pkiEzsigndocumentID} | Delete an existing Ezsigndocument
*OAIObjectEzsigndocumentApi* | [**ezsigndocumentGetChildrenV1**](OAIObjectEzsigndocumentApi.md#ezsigndocumentGetChildrenV1) | **GET** /1/object/ezsigndocument/{pkiEzsigndocumentID}/getChildren | Retrieve an existing Ezsigndocument&#39;s children IDs
*OAIObjectEzsigndocumentApi* | [**ezsigndocumentGetDownloadUrlV1**](OAIObjectEzsigndocumentApi.md#ezsigndocumentGetDownloadUrlV1) | **GET** /1/object/ezsigndocument/{pkiEzsigndocumentID}/getDownloadUrl/{eDocumentType} | Retrieve a URL to download documents.
*OAIObjectEzsigndocumentApi* | [**ezsigndocumentGetObjectV1**](OAIObjectEzsigndocumentApi.md#ezsigndocumentGetObjectV1) | **GET** /1/object/ezsigndocument/{pkiEzsigndocumentID} | Retrieve an existing Ezsigndocument
*OAIObjectEzsignfolderApi* | [**ezsignfolderCreateObjectV1**](OAIObjectEzsignfolderApi.md#ezsignfolderCreateObjectV1) | **POST** /1/object/ezsignfolder | Create a new Ezsignfolder
*OAIObjectEzsignfolderApi* | [**ezsignfolderDeleteObjectV1**](OAIObjectEzsignfolderApi.md#ezsignfolderDeleteObjectV1) | **DELETE** /1/object/ezsignfolder/{pkiEzsignfolderID} | Delete an existing Ezsignfolder
*OAIObjectEzsignfolderApi* | [**ezsignfolderGetChildrenV1**](OAIObjectEzsignfolderApi.md#ezsignfolderGetChildrenV1) | **GET** /1/object/ezsignfolder/{pkiEzsignfolderID}/getChildren | Retrieve an existing Ezsignfolder&#39;s children IDs
*OAIObjectEzsignfolderApi* | [**ezsignfolderGetObjectV1**](OAIObjectEzsignfolderApi.md#ezsignfolderGetObjectV1) | **GET** /1/object/ezsignfolder/{pkiEzsignfolderID} | Retrieve an existing Ezsignfolder
*OAIObjectEzsignfolderApi* | [**ezsignfolderSendV1**](OAIObjectEzsignfolderApi.md#ezsignfolderSendV1) | **POST** /1/object/ezsignfolder/{pkiEzsignfolderID}/send | Send the Ezsignfolder to the signatories for signature
*OAIObjectEzsignfoldersignerassociationApi* | [**ezsignfoldersignerassociationCreateObjectV1**](OAIObjectEzsignfoldersignerassociationApi.md#ezsignfoldersignerassociationCreateObjectV1) | **POST** /1/object/ezsignfoldersignerassociation | Create a new Ezsignfoldersignerassociation
*OAIObjectEzsignfoldersignerassociationApi* | [**ezsignfoldersignerassociationDeleteObjectV1**](OAIObjectEzsignfoldersignerassociationApi.md#ezsignfoldersignerassociationDeleteObjectV1) | **DELETE** /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID} | Delete an existing Ezsignfoldersignerassociation
*OAIObjectEzsignfoldersignerassociationApi* | [**ezsignfoldersignerassociationGetChildrenV1**](OAIObjectEzsignfoldersignerassociationApi.md#ezsignfoldersignerassociationGetChildrenV1) | **GET** /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/getChildren | Retrieve an existing Ezsignfoldersignerassociation&#39;s children IDs
*OAIObjectEzsignfoldersignerassociationApi* | [**ezsignfoldersignerassociationGetInPersonLoginUrlV1**](OAIObjectEzsignfoldersignerassociationApi.md#ezsignfoldersignerassociationGetInPersonLoginUrlV1) | **GET** /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID}/getInPersonLoginUrl | Retrieve a Login Url to allow In-Person signing
*OAIObjectEzsignfoldersignerassociationApi* | [**ezsignfoldersignerassociationGetObjectV1**](OAIObjectEzsignfoldersignerassociationApi.md#ezsignfoldersignerassociationGetObjectV1) | **GET** /1/object/ezsignfoldersignerassociation/{pkiEzsignfoldersignerassociationID} | Retrieve an existing Ezsignfoldersignerassociation
*OAIObjectEzsignsignatureApi* | [**ezsignsignatureCreateObjectV1**](OAIObjectEzsignsignatureApi.md#ezsignsignatureCreateObjectV1) | **POST** /1/object/ezsignsignature | Create a new Ezsignsignature
*OAIObjectEzsignsignatureApi* | [**ezsignsignatureDeleteObjectV1**](OAIObjectEzsignsignatureApi.md#ezsignsignatureDeleteObjectV1) | **DELETE** /1/object/ezsignsignature/{pkiEzsignsignatureID} | Delete an existing Ezsignsignature
*OAIObjectEzsignsignatureApi* | [**ezsignsignatureGetChildrenV1**](OAIObjectEzsignsignatureApi.md#ezsignsignatureGetChildrenV1) | **GET** /1/object/ezsignsignature/{pkiEzsignsignatureID}/getChildren | Retrieve an existing Ezsignsignature&#39;s children IDs
*OAIObjectEzsignsignatureApi* | [**ezsignsignatureGetObjectV1**](OAIObjectEzsignsignatureApi.md#ezsignsignatureGetObjectV1) | **GET** /1/object/ezsignsignature/{pkiEzsignsignatureID} | Retrieve an existing Ezsignsignature
*OAIObjectFranchisebrokerApi* | [**franchisebrokerGetAutocompleteV1**](OAIObjectFranchisebrokerApi.md#franchisebrokerGetAutocompleteV1) | **GET** /1/object/franchisebroker/getAutocomplete/{sSelector} | Retrieve Franchisebrokers and IDs
*OAIObjectFranchiseofficeApi* | [**franchiseofficeGetAutocompleteV1**](OAIObjectFranchiseofficeApi.md#franchiseofficeGetAutocompleteV1) | **GET** /1/object/franchiseoffice/getAutocomplete/{sSelector} | Retrieve Franchiseoffices and IDs
*OAIObjectFranchisereferalincomeApi* | [**franchisereferalincomeCreateObjectV1**](OAIObjectFranchisereferalincomeApi.md#franchisereferalincomeCreateObjectV1) | **POST** /1/object/franchisereferalincome | Create a new Franchisereferalincome
*OAIObjectPeriodApi* | [**periodGetAutocompleteV1**](OAIObjectPeriodApi.md#periodGetAutocompleteV1) | **GET** /1/object/period/getAutocomplete/{sSelector} | Retrieve Periods and IDs


## Documentation for Models

 - [OAIActivesession_getCurrent_v1_Response](OAIActivesession_getCurrent_v1_Response.md)
 - [OAIActivesession_getCurrent_v1_Response_mPayload](OAIActivesession_getCurrent_v1_Response_mPayload.md)
 - [OAIAddress_Request](OAIAddress_Request.md)
 - [OAIApikey_Request](OAIApikey_Request.md)
 - [OAIApikey_RequestCompound](OAIApikey_RequestCompound.md)
 - [OAIApikey_Response](OAIApikey_Response.md)
 - [OAIApikey_createObject_v1_Request](OAIApikey_createObject_v1_Request.md)
 - [OAIApikey_createObject_v1_Response](OAIApikey_createObject_v1_Response.md)
 - [OAIApikey_createObject_v1_Response_mPayload](OAIApikey_createObject_v1_Response_mPayload.md)
 - [OAIAttempt_Response](OAIAttempt_Response.md)
 - [OAICommon_Audit](OAICommon_Audit.md)
 - [OAICommon_Response](OAICommon_Response.md)
 - [OAICommon_Response_Error](OAICommon_Response_Error.md)
 - [OAICommon_Response_objDebug](OAICommon_Response_objDebug.md)
 - [OAICommon_Response_objDebugPayload](OAICommon_Response_objDebugPayload.md)
 - [OAICommon_Response_objSQLQuery](OAICommon_Response_objSQLQuery.md)
 - [OAICommon_Webhook](OAICommon_Webhook.md)
 - [OAICommon_getAutocomplete_v1_Response](OAICommon_getAutocomplete_v1_Response.md)
 - [OAICommon_getAutocomplete_v1_Response_mPayload](OAICommon_getAutocomplete_v1_Response_mPayload.md)
 - [OAIContact_Request](OAIContact_Request.md)
 - [OAIContact_RequestCompound](OAIContact_RequestCompound.md)
 - [OAIContact_RequestCompound_allOf](OAIContact_RequestCompound_allOf.md)
 - [OAIContactinformations_Request](OAIContactinformations_Request.md)
 - [OAIContactinformations_RequestCompound](OAIContactinformations_RequestCompound.md)
 - [OAIEmail_Request](OAIEmail_Request.md)
 - [OAIEzsigndocument_Request](OAIEzsigndocument_Request.md)
 - [OAIEzsigndocument_RequestCompound](OAIEzsigndocument_RequestCompound.md)
 - [OAIEzsigndocument_Response](OAIEzsigndocument_Response.md)
 - [OAIEzsigndocument_ResponseCompound](OAIEzsigndocument_ResponseCompound.md)
 - [OAIEzsigndocument_Response_allOf](OAIEzsigndocument_Response_allOf.md)
 - [OAIEzsigndocument_applyEzsigntemplate_v1_Request](OAIEzsigndocument_applyEzsigntemplate_v1_Request.md)
 - [OAIEzsigndocument_applyEzsigntemplate_v1_Response](OAIEzsigndocument_applyEzsigntemplate_v1_Response.md)
 - [OAIEzsigndocument_createObject_v1_Request](OAIEzsigndocument_createObject_v1_Request.md)
 - [OAIEzsigndocument_createObject_v1_Response](OAIEzsigndocument_createObject_v1_Response.md)
 - [OAIEzsigndocument_createObject_v1_Response_mPayload](OAIEzsigndocument_createObject_v1_Response_mPayload.md)
 - [OAIEzsigndocument_deleteObject_v1_Response](OAIEzsigndocument_deleteObject_v1_Response.md)
 - [OAIEzsigndocument_getDownloadUrl_v1_Response](OAIEzsigndocument_getDownloadUrl_v1_Response.md)
 - [OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload](OAIEzsigndocument_getDownloadUrl_v1_Response_mPayload.md)
 - [OAIEzsigndocument_getObject_v1_Response](OAIEzsigndocument_getObject_v1_Response.md)
 - [OAIEzsigndocument_getObject_v1_Response_mPayload](OAIEzsigndocument_getObject_v1_Response_mPayload.md)
 - [OAIEzsignfolder_Request](OAIEzsignfolder_Request.md)
 - [OAIEzsignfolder_RequestCompound](OAIEzsignfolder_RequestCompound.md)
 - [OAIEzsignfolder_Response](OAIEzsignfolder_Response.md)
 - [OAIEzsignfolder_ResponseCompound](OAIEzsignfolder_ResponseCompound.md)
 - [OAIEzsignfolder_Response_allOf](OAIEzsignfolder_Response_allOf.md)
 - [OAIEzsignfolder_createObject_v1_Request](OAIEzsignfolder_createObject_v1_Request.md)
 - [OAIEzsignfolder_createObject_v1_Response](OAIEzsignfolder_createObject_v1_Response.md)
 - [OAIEzsignfolder_createObject_v1_Response_mPayload](OAIEzsignfolder_createObject_v1_Response_mPayload.md)
 - [OAIEzsignfolder_deleteObject_v1_Response](OAIEzsignfolder_deleteObject_v1_Response.md)
 - [OAIEzsignfolder_getObject_v1_Response](OAIEzsignfolder_getObject_v1_Response.md)
 - [OAIEzsignfolder_getObject_v1_Response_mPayload](OAIEzsignfolder_getObject_v1_Response_mPayload.md)
 - [OAIEzsignfolder_send_v1_Request](OAIEzsignfolder_send_v1_Request.md)
 - [OAIEzsignfolder_send_v1_Response](OAIEzsignfolder_send_v1_Response.md)
 - [OAIEzsignfoldersignerassociation_Request](OAIEzsignfoldersignerassociation_Request.md)
 - [OAIEzsignfoldersignerassociation_RequestCompound](OAIEzsignfoldersignerassociation_RequestCompound.md)
 - [OAIEzsignfoldersignerassociation_createObject_v1_Request](OAIEzsignfoldersignerassociation_createObject_v1_Request.md)
 - [OAIEzsignfoldersignerassociation_createObject_v1_Response](OAIEzsignfoldersignerassociation_createObject_v1_Response.md)
 - [OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload](OAIEzsignfoldersignerassociation_createObject_v1_Response_mPayload.md)
 - [OAIEzsignfoldersignerassociation_deleteObject_v1_Response](OAIEzsignfoldersignerassociation_deleteObject_v1_Response.md)
 - [OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response](OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response.md)
 - [OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload](OAIEzsignfoldersignerassociation_getInPersonLoginUrl_v1_Response_mPayload.md)
 - [OAIEzsignfoldersignerassociation_getObject_v1_Response](OAIEzsignfoldersignerassociation_getObject_v1_Response.md)
 - [OAIEzsignsignature_Request](OAIEzsignsignature_Request.md)
 - [OAIEzsignsignature_RequestCompound](OAIEzsignsignature_RequestCompound.md)
 - [OAIEzsignsignature_createObject_v1_Request](OAIEzsignsignature_createObject_v1_Request.md)
 - [OAIEzsignsignature_createObject_v1_Response](OAIEzsignsignature_createObject_v1_Response.md)
 - [OAIEzsignsignature_createObject_v1_Response_mPayload](OAIEzsignsignature_createObject_v1_Response_mPayload.md)
 - [OAIEzsignsignature_deleteObject_v1_Response](OAIEzsignsignature_deleteObject_v1_Response.md)
 - [OAIEzsignsignature_getObject_v1_Response](OAIEzsignsignature_getObject_v1_Response.md)
 - [OAIEzsignsigner_Request](OAIEzsignsigner_Request.md)
 - [OAIEzsignsigner_RequestCompound](OAIEzsignsigner_RequestCompound.md)
 - [OAIEzsignsigner_RequestCompound_Contact](OAIEzsignsigner_RequestCompound_Contact.md)
 - [OAIField_eEzsigndocumentStep](OAIField_eEzsigndocumentStep.md)
 - [OAIField_eEzsignfolderSendreminderfrequency](OAIField_eEzsignfolderSendreminderfrequency.md)
 - [OAIField_eEzsignfolderStep](OAIField_eEzsignfolderStep.md)
 - [OAIField_ePhoneType](OAIField_ePhoneType.md)
 - [OAIField_eUserType](OAIField_eUserType.md)
 - [OAIField_eUserTypeSSPR](OAIField_eUserTypeSSPR.md)
 - [OAIFranchisereferalincome_Request](OAIFranchisereferalincome_Request.md)
 - [OAIFranchisereferalincome_RequestCompound](OAIFranchisereferalincome_RequestCompound.md)
 - [OAIFranchisereferalincome_createObject_v1_Request](OAIFranchisereferalincome_createObject_v1_Request.md)
 - [OAIFranchisereferalincome_createObject_v1_Response](OAIFranchisereferalincome_createObject_v1_Response.md)
 - [OAIFranchisereferalincome_createObject_v1_Response_mPayload](OAIFranchisereferalincome_createObject_v1_Response_mPayload.md)
 - [OAIGlobal_customer_getEndpoint_v1_Response](OAIGlobal_customer_getEndpoint_v1_Response.md)
 - [OAIMultilingual_ApikeyDescription](OAIMultilingual_ApikeyDescription.md)
 - [OAIPhone_Request](OAIPhone_Request.md)
 - [OAISspr_resetPasswordRequest_v1_Request](OAISspr_resetPasswordRequest_v1_Request.md)
 - [OAISspr_resetPassword_v1_Request](OAISspr_resetPassword_v1_Request.md)
 - [OAISspr_sendUsernames_v1_Request](OAISspr_sendUsernames_v1_Request.md)
 - [OAISspr_unlockAccountRequest_v1_Request](OAISspr_unlockAccountRequest_v1_Request.md)
 - [OAISspr_unlockAccount_v1_Request](OAISspr_unlockAccount_v1_Request.md)
 - [OAISspr_validateToken_v1_Request](OAISspr_validateToken_v1_Request.md)
 - [OAIUNUSED_ezsigndocument_editObject_v1_Request](OAIUNUSED_ezsigndocument_editObject_v1_Request.md)
 - [OAIUNUSED_ezsigndocument_editObject_v1_Response](OAIUNUSED_ezsigndocument_editObject_v1_Response.md)
 - [OAIUNUSED_ezsignfolder_editObject_v1_Request](OAIUNUSED_ezsignfolder_editObject_v1_Request.md)
 - [OAIUNUSED_ezsignfolder_editObject_v1_Response](OAIUNUSED_ezsignfolder_editObject_v1_Response.md)
 - [OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request](OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Request.md)
 - [OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Response](OAIUNUSED_ezsignfoldersignerassociation_editObject_v1_Response.md)
 - [OAIUNUSED_ezsignsignature_editObject_v1_Request](OAIUNUSED_ezsignsignature_editObject_v1_Request.md)
 - [OAIUNUSED_ezsignsignature_editObject_v1_Response](OAIUNUSED_ezsignsignature_editObject_v1_Response.md)
 - [OAIUser_Response](OAIUser_Response.md)
 - [OAIUser_Response_allOf](OAIUser_Response_allOf.md)
 - [OAIUser_createEzsignuser_v1_Request](OAIUser_createEzsignuser_v1_Request.md)
 - [OAIUser_createEzsignuser_v1_Response](OAIUser_createEzsignuser_v1_Response.md)
 - [OAIUser_createEzsignuser_v1_Response_mPayload](OAIUser_createEzsignuser_v1_Response_mPayload.md)
 - [OAIWebhook_Ezsign_DocumentCompleted](OAIWebhook_Ezsign_DocumentCompleted.md)
 - [OAIWebhook_Ezsign_DocumentCompleted_allOf](OAIWebhook_Ezsign_DocumentCompleted_allOf.md)
 - [OAIWebhook_Ezsign_FolderCompleted](OAIWebhook_Ezsign_FolderCompleted.md)
 - [OAIWebhook_Ezsign_FolderCompleted_allOf](OAIWebhook_Ezsign_FolderCompleted_allOf.md)
 - [OAIWebhook_Response](OAIWebhook_Response.md)
 - [OAIWebhook_User_UserCreated](OAIWebhook_User_UserCreated.md)
 - [OAIWebhook_User_UserCreated_allOf](OAIWebhook_User_UserCreated_allOf.md)
 - [OAIWebsite_Request](OAIWebsite_Request.md)


## Documentation for Servers

Parameterized Servers are supported. Define a server in the API for each endpoint with arbitrary numbers of variables: 

```
servers:
- url: http://{server}:{port}/{basePath}
  description: Description of the Server
  variables:
    server:
        enum:
          - 'petstore'
          - 'qa-petstore'
          - 'dev-petstore'
        default: 'petstore'
    port:
      enum:
        - '3000'
        - '1000'
      default: '3000'
    basePath:
      default: v1
```
To change the default variable, use this function in each Api:
```
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
```
The parameter "serverIndex" will choose a server from the server list for each endpoint. There is always at least one server with index 0. The Paramter "operation" should be the desired endpoint operationid. 
Variable is the name of the variable you wish to change and the value is the new default Value.
The function will return -1 when the variable does not exists, -2 if value is not defined in the variable enum and -3 if the operation is not found.

If your endpoint has multiple server objects in the servers array, you can set the server that will be used with this function:
```
    void setServerIndex(const QString &operation, int serverIndex);
```
Parameter "operation" should be your operationid. "serverIndex" is the index you want to set as your default server. The function will check if there is a server with your index.
Here is an example of multiple servers in the servers array. The first server will have index 0 and the second will have index 1.
```
servers:
- url: http://{server}:8080/
  description: Description of the Server
  variables:
    server:
        enum:
          - 'petstore'
          - 'qa-petstore'
          - 'dev-petstore'
        default: 'petstore'
- url: https://localhost:8080/v1
```


## Documentation for Authorization

Authentication schemes defined for the API:
### Authorization


- **Type**: API key
- **API key parameter name**: Authorization
- **Location**: HTTP header


## Author

support-api@ezmax.ca

