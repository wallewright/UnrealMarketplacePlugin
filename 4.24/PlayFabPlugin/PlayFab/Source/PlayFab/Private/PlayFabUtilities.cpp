//////////////////////////////////////////////////////
// Copyright (C) Microsoft. 2018. All rights reserved.
//////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////
// Automatically generated cpp file for the UE4 PlayFab plugin.
// This cpp file contains the utilities functions that supports the plugin..
//
//////////////////////////////////////////////////////////////////////////////////////////////

#include "PlayFabUtilities.h"
#include "IPlayFab.h"
#include "PlayFabPrivate.h"

void UPlayFabUtilities::setPlayFabSettings(FString GameTitleId, FString PlayFabSecretApiKey, FString PhotonRealtimeAppId, FString PhotonTurnbasedAppId, FString PhotonChatAppId)
{
    // Set the settings
    IPlayFab::Get().setGameTitleId(GameTitleId);
    IPlayFab::Get().setDeveloperSecretKey(PlayFabSecretApiKey);
    IPlayFab::Get().setPhotonRealtimeAppId(PhotonRealtimeAppId);
    IPlayFab::Get().setPhotonTurnbasedAppId(PhotonTurnbasedAppId);
    IPlayFab::Get().setPhotonChatAppId(PhotonChatAppId);
}

FString UPlayFabUtilities::getPhotonAppId(bool Realtime, bool Chat, bool Turnbased)
{
    if (Realtime) { return IPlayFab::Get().getPhotonRealtimeAppId(); }
    else if (Chat) { return IPlayFab::Get().getPhotonChatAppId(); }
    else if (Turnbased) { return IPlayFab::Get().getPhotonTurnbasedAppId(); }
    else { return ""; }
}

FString UPlayFabUtilities::getErrorText(int32 code)
{
    // Variable to hold the return text
    FString returnText = "";

    // Switch on the code
    switch (code)
    {
    case 0: returnText = "Success"; break;
    case 500: returnText = "UnkownError"; break;
    case 1000: returnText = "InvalidParams"; break;
    case 1001: returnText = "AccountNotFound"; break;
    case 1002: returnText = "AccountBanned"; break;
    case 1003: returnText = "InvalidUsernameOrPassword"; break;
    case 1004: returnText = "InvalidTitleId"; break;
    case 1005: returnText = "InvalidEmailAddress"; break;
    case 1006: returnText = "EmailAddressNotAvailable"; break;
    case 1007: returnText = "InvalidUsername"; break;
    case 1008: returnText = "InvalidPassword"; break;
    case 1009: returnText = "UsernameNotAvailable"; break;
    case 1010: returnText = "InvalidSteamTicket"; break;
    case 1011: returnText = "AccountAlreadyLinked"; break;
    case 1012: returnText = "LinkedAccountAlreadyClaimed"; break;
    case 1013: returnText = "InvalidFacebookToken"; break;
    case 1014: returnText = "AccountNotLinked"; break;
    case 1015: returnText = "FailedByPaymentProvider"; break;
    case 1016: returnText = "CouponCodeNotFound"; break;
    case 1017: returnText = "InvalidContainerItem"; break;
    case 1018: returnText = "ContainerNotOwned"; break;
    case 1019: returnText = "KeyNotOwned"; break;
    case 1020: returnText = "InvalidItemIdInTable"; break;
    case 1021: returnText = "InvalidReceipt"; break;
    case 1022: returnText = "ReceiptAlreadyUsed"; break;
    case 1023: returnText = "ReceiptCancelled"; break;
    case 1024: returnText = "GameNotFound"; break;
    case 1025: returnText = "GameModeNotFound"; break;
    case 1026: returnText = "InvalidGoogleToken"; break;
    case 1027: returnText = "UserIsNotPartOfDeveloper"; break;
    case 1028: returnText = "InvalidTitleForDeveloper"; break;
    case 1029: returnText = "TitleNameConflicts"; break;
    case 1030: returnText = "UserisNotValid"; break;
    case 1031: returnText = "ValueAlreadyExists"; break;
    case 1032: returnText = "BuildNotFound"; break;
    case 1033: returnText = "PlayerNotInGame"; break;
    case 1034: returnText = "InvalidTicket"; break;
    case 1035: returnText = "InvalidDeveloper"; break;
    case 1036: returnText = "InvalidOrderInfo"; break;
    case 1037: returnText = "RegistrationIncomplete"; break;
    case 1038: returnText = "InvalidPlatform"; break;
    case 1039: returnText = "UnknownError"; break;
    case 1040: returnText = "SteamApplicationNotOwned"; break;
    case 1041: returnText = "WrongSteamAccount"; break;
    case 1042: returnText = "TitleNotActivated"; break;
    case 1043: returnText = "RegistrationSessionNotFound"; break;
    case 1044: returnText = "NoSuchMod"; break;
    case 1045: returnText = "FileNotFound"; break;
    case 1046: returnText = "DuplicateEmail"; break;
    case 1047: returnText = "ItemNotFound"; break;
    case 1048: returnText = "ItemNotOwned"; break;
    case 1049: returnText = "ItemNotRecycleable"; break;
    case 1050: returnText = "ItemNotAffordable"; break;
    case 1051: returnText = "InvalidVirtualCurrency"; break;
    case 1052: returnText = "WrongVirtualCurrency"; break;
    case 1053: returnText = "WrongPrice"; break;
    case 1054: returnText = "NonPositiveValue"; break;
    case 1055: returnText = "InvalidRegion"; break;
    case 1056: returnText = "RegionAtCapacity"; break;
    case 1057: returnText = "ServerFailedToStart"; break;
    case 1058: returnText = "NameNotAvailable"; break;
    case 1059: returnText = "InsufficientFunds"; break;
    case 1060: returnText = "InvalidDeviceID"; break;
    case 1061: returnText = "InvalidPushNotificationToken"; break;
    case 1062: returnText = "NoRemainingUses"; break;
    case 1063: returnText = "InvalidPaymentProvider"; break;
    case 1064: returnText = "PurchaseInitializationFailure"; break;
    case 1065: returnText = "DuplicateUsername"; break;
    case 1066: returnText = "InvalidBuyerInfo"; break;
    case 1067: returnText = "NoGameModeParamsSet"; break;
    case 1068: returnText = "BodyTooLarge"; break;
    case 1069: returnText = "ReservedWordInBody"; break;
    case 1070: returnText = "InvalidTypeInBody"; break;
    case 1071: returnText = "InvalidRequest"; break;
    case 1072: returnText = "ReservedEventName"; break;
    case 1073: returnText = "InvalidUserStatistics"; break;
    case 1074: returnText = "NotAuthenticated"; break;
    case 1075: returnText = "StreamAlreadyExists"; break;
    case 1076: returnText = "ErrorCreatingStream"; break;
    case 1077: returnText = "StreamNotFound"; break;
    case 1078: returnText = "InvalidAccount"; break;
    case 1080: returnText = "PurchaseDoesNotExist"; break;
    case 1081: returnText = "InvalidPurchaseTransactionStatus"; break;
    case 1082: returnText = "APINotEnabledForGameClientAccess"; break;
    case 1083: returnText = "NoPushNotificationARNForTitle"; break;
    case 1084: returnText = "BuildAlreadyExists"; break;
    case 1085: returnText = "BuildPackageDoesNotExist"; break;
    case 1087: returnText = "CustomAnalyticsEventsNotEnabledForTitle"; break;
    case 1088: returnText = "InvalidSharedGroupId"; break;
    case 1089: returnText = "NotAuthorized"; break;
    case 1090: returnText = "MissingTitleGoogleProperties"; break;
    case 1091: returnText = "InvalidItemProperties"; break;
    case 1092: returnText = "InvalidPSNAuthCode"; break;
    case 1093: returnText = "InvalidItemId"; break;
    case 1094: returnText = "PushNotEnabledForAccount"; break;
    case 1095: returnText = "PushServiceError"; break;
    case 1096: returnText = "ReceiptDoesNotContainInAppItems"; break;
    case 1097: returnText = "ReceiptContainsMultipleInAppItems"; break;
    case 1098: returnText = "InvalidBundleID"; break;
    case 1099: returnText = "JavascriptException"; break;
    case 1100: returnText = "InvalidSessionTicket"; break;
    case 1101: returnText = "UnableToConnectToDatabase"; break;
    case 1110: returnText = "InternalServerError"; break;
    case 1111: returnText = "InvalidReportDate"; break;
    case 1112: returnText = "ReportNotAvailable"; break;
    case 1113: returnText = "DatabaseThroughputExceeded"; break;
    case 1115: returnText = "InvalidGameTicket"; break;
    case 1116: returnText = "ExpiredGameTicket"; break;
    case 1117: returnText = "GameTicketDoesNotMatchLobby"; break;
    case 1118: returnText = "LinkedDeviceAlreadyClaimed"; break;
    case 1119: returnText = "DeviceAlreadyLinked"; break;
    case 1120: returnText = "DeviceNotLinked"; break;
    case 1121: returnText = "PartialFailure"; break;
    case 1122: returnText = "PublisherNotSet"; break;
    case 1123: returnText = "ServiceUnavailable"; break;
    case 1124: returnText = "VersionNotFound"; break;
    case 1125: returnText = "RevisionNotFound"; break;
    case 1126: returnText = "InvalidPublisherId"; break;
    case 1127: returnText = "DownstreamServiceUnavailable"; break;
    case 1128: returnText = "APINotIncludedInTitleUsageTier"; break;
    case 1129: returnText = "DAULimitExceeded"; break;
    case 1130: returnText = "APIRequestLimitExceeded"; break;
    case 1131: returnText = "InvalidAPIEndpoint"; break;
    case 1132: returnText = "BuildNotAvailable"; break;
    case 1133: returnText = "ConcurrentEditError"; break;
    case 1134: returnText = "ContentNotFound"; break;
    case 1135: returnText = "CharacterNotFound"; break;
    case 1136: returnText = "CloudScriptNotFound"; break;
    case 1137: returnText = "ContentQuotaExceeded"; break;
    case 1138: returnText = "InvalidCharacterStatistics"; break;
    case 1139: returnText = "PhotonNotEnabledForTitle"; break;
    case 1140: returnText = "PhotonApplicationNotFound"; break;
    case 1141: returnText = "PhotonApplicationNotAssociatedWithTitle"; break;
    case 1142: returnText = "InvalidEmailOrPassword"; break;
    case 1143: returnText = "FacebookAPIError"; break;
    case 1144: returnText = "InvalidContentType"; break;
    case 1145: returnText = "KeyLengthExceeded"; break;
    case 1146: returnText = "DataLengthExceeded"; break;
    case 1147: returnText = "TooManyKeys"; break;
    case 1148: returnText = "FreeTierCannotHaveVirtualCurrency"; break;
    case 1149: returnText = "MissingAmazonSharedKey"; break;
    case 1150: returnText = "AmazonValidationError"; break;
    case 1151: returnText = "InvalidPSNIssuerId"; break;
    case 1152: returnText = "PSNInaccessible"; break;
    case 1153: returnText = "ExpiredAuthToken"; break;
    case 1154: returnText = "FailedToGetEntitlements"; break;
    case 1155: returnText = "FailedToConsumeEntitlement"; break;
    case 1156: returnText = "TradeAcceptingUserNotAllowed"; break;
    case 1157: returnText = "TradeInventoryItemIsAssignedToCharacter"; break;
    case 1158: returnText = "TradeInventoryItemIsBundle"; break;
    case 1159: returnText = "TradeStatusNotValidForCancelling"; break;
    case 1160: returnText = "TradeStatusNotValidForAccepting"; break;
    case 1161: returnText = "TradeDoesNotExist"; break;
    case 1162: returnText = "TradeCancelled"; break;
    case 1163: returnText = "TradeAlreadyFilled"; break;
    case 1164: returnText = "TradeWaitForStatusTimeout"; break;
    case 1165: returnText = "TradeInventoryItemExpired"; break;
    case 1166: returnText = "TradeMissingOfferedAndAcceptedItems"; break;
    case 1167: returnText = "TradeAcceptedItemIsBundle"; break;
    case 1168: returnText = "TradeAcceptedItemIsStackable"; break;
    case 1169: returnText = "TradeInventoryItemInvalidStatus"; break;
    case 1170: returnText = "TradeAcceptedCatalogItemInvalid"; break;
    case 1171: returnText = "TradeAllowedUsersInvalid"; break;
    case 1172: returnText = "TradeInventoryItemDoesNotExist"; break;
    case 1173: returnText = "TradeInventoryItemIsConsumed"; break;
    case 1174: returnText = "TradeInventoryItemIsStackable"; break;
    case 1175: returnText = "TradeAcceptedItemsMismatch"; break;
    case 1176: returnText = "InvalidKongregateToken"; break;
    case 1177: returnText = "FeatureNotConfiguredForTitle"; break;
    case 1178: returnText = "NoMatchingCatalogItemForReceipt"; break;
    case 1179: returnText = "InvalidCurrencyCode"; break;
    case 1180: returnText = "NoRealMoneyPriceForCatalogItem"; break;
    case 1181: returnText = "TradeInventoryItemIsNotTradable"; break;
    case 1182: returnText = "TradeAcceptedCatalogItemIsNotTradable"; break;
    case 1183: returnText = "UsersAlreadyFriends"; break;
    case 1184: returnText = "LinkedIdentifierAlreadyClaimed"; break;
    case 1185: returnText = "CustomIdNotLinked"; break;
    case 1186: returnText = "TotalDataSizeExceeded"; break;
    case 1187: returnText = "DeleteKeyConflict"; break;
    case 1188: returnText = "InvalidXboxLiveToken"; break;
    case 1189: returnText = "ExpiredXboxLiveToken"; break;
    case 1190: returnText = "ResettableStatisticVersionRequired"; break;
    case 1191: returnText = "NotAuthorizedByTitle"; break;
    case 1192: returnText = "NoPartnerEnabled"; break;
    case 1193: returnText = "InvalidPartnerResponse"; break;
    case 1194: returnText = "APINotEnabledForGameServerAccess"; break;
    case 1195: returnText = "StatisticNotFound"; break;
    case 1196: returnText = "StatisticNameConflict"; break;
    case 1197: returnText = "StatisticVersionClosedForWrites"; break;
    case 1198: returnText = "StatisticVersionInvalid"; break;
    case 1199: returnText = "APIClientRequestRateLimitExceeded"; break;
    case 1200: returnText = "InvalidJSONContent"; break;
    case 1201: returnText = "InvalidDropTable"; break;
    case 1202: returnText = "StatisticVersionAlreadyIncrementedForScheduledInterval"; break;
    case 1203: returnText = "StatisticCountLimitExceeded"; break;
    case 1204: returnText = "StatisticVersionIncrementRateExceeded"; break;
    case 1205: returnText = "ContainerKeyInvalid"; break;
    case 1206: returnText = "CloudScriptExecutionTimeLimitExceeded"; break;
    case 1207: returnText = "NoWritePermissionsForEvent"; break;
    case 1208: returnText = "CloudScriptFunctionArgumentSizeExceeded"; break;
    case 1209: returnText = "CloudScriptAPIRequestCountExceeded"; break;
    case 1210: returnText = "CloudScriptAPIRequestError"; break;
    case 1211: returnText = "CloudScriptHTTPRequestError"; break;
    case 1212: returnText = "InsufficientGuildRole"; break;
    case 1213: returnText = "GuildNotFound"; break;
    case 1214: returnText = "OverLimit"; break;
    case 1215: returnText = "EventNotFound"; break;
    case 1216: returnText = "InvalidEventField"; break;
    case 1217: returnText = "InvalidEventName"; break;
    case 1218: returnText = "CatalogNotConfigured"; break;
    case 1219: returnText = "OperationNotSupportedForPlatform"; break;
    case 1220: returnText = "SegmentNotFound"; break;
    case 1221: returnText = "StoreNotFound"; break;
    case 1222: returnText = "InvalidStatisticName"; break;
    case 1223: returnText = "TitleNotQualifiedForLimit"; break;
    case 1224: returnText = "InvalidServiceLimitLevel"; break;
    case 1225: returnText = "ServiceLimitLevelInTransition"; break;
    case 1226: returnText = "CouponAlreadyRedeemed"; break;
    case 1227: returnText = "GameServerBuildSizeLimitExceeded"; break;
    case 1228: returnText = "GameServerBuildCountLimitExceeded"; break;
    case 1229: returnText = "VirtualCurrencyCountLimitExceeded"; break;
    case 1230: returnText = "VirtualCurrencyCodeExists"; break;
    case 1231: returnText = "TitleNewsItemCountLimitExceeded"; break;
    case 1232: returnText = "InvalidTwitchToken"; break;
    case 1233: returnText = "TwitchResponseError"; break;
    case 1234: returnText = "ProfaneDisplayName"; break;
    case 1235: returnText = "UserAlreadyAdded"; break;
    case 1236: returnText = "InvalidVirtualCurrencyCode"; break;
    case 1237: returnText = "VirtualCurrencyCannotBeDeleted"; break;
    case 1238: returnText = "IdentifierAlreadyClaimed"; break;
    case 1239: returnText = "IdentifierNotLinked"; break;
    case 1240: returnText = "InvalidContinuationToken"; break;
    case 1241: returnText = "ExpiredContinuationToken"; break;
    case 1242: returnText = "InvalidSegment"; break;
    case 1243: returnText = "InvalidSessionId"; break;
    case 1244: returnText = "SessionLogNotFound"; break;
    case 1245: returnText = "InvalidSearchTerm"; break;
    case 1246: returnText = "TwoFactorAuthenticationTokenRequired"; break;
    case 1247: returnText = "GameServerHostCountLimitExceeded"; break;
    case 1248: returnText = "PlayerTagCountLimitExceeded"; break;
    case 1249: returnText = "RequestAlreadyRunning"; break;
    case 1250: returnText = "ActionGroupNotFound"; break;
    case 1251: returnText = "MaximumSegmentBulkActionJobsRunning"; break;
    case 1252: returnText = "NoActionsOnPlayersInSegmentJob"; break;
    case 1253: returnText = "DuplicateStatisticName"; break;
    case 1254: returnText = "ScheduledTaskNameConflict"; break;
    case 1255: returnText = "ScheduledTaskCreateConflict"; break;
    case 1256: returnText = "InvalidScheduledTaskName"; break;
    case 1257: returnText = "InvalidTaskSchedule"; break;
    case 1258: returnText = "SteamNotEnabledForTitle"; break;
    case 1259: returnText = "LimitNotAnUpgradeOption"; break;
    case 1260: returnText = "NoSecretKeyEnabledForCloudScript"; break;
    case 1261: returnText = "TaskNotFound"; break;
    case 1262: returnText = "TaskInstanceNotFound"; break;
    case 1263: returnText = "InvalidIdentityProviderId"; break;
    case 1264: returnText = "MisconfiguredIdentityProvider"; break;
    case 1265: returnText = "InvalidScheduledTaskType"; break;
    case 1266: returnText = "BillingInformationRequired"; break;
    case 1267: returnText = "LimitedEditionItemUnavailable"; break;
    case 1268: returnText = "InvalidAdPlacementAndReward"; break;
    case 1269: returnText = "AllAdPlacementViewsAlreadyConsumed"; break;
    case 1270: returnText = "GoogleOAuthNotConfiguredForTitle"; break;
    case 1271: returnText = "GoogleOAuthError"; break;
    case 1272: returnText = "UserNotFriend"; break;
    case 1273: returnText = "InvalidSignature"; break;
    case 1274: returnText = "InvalidPublicKey"; break;
    case 1275: returnText = "GoogleOAuthNoIdTokenIncludedInResponse"; break;
    case 1276: returnText = "StatisticUpdateInProgress"; break;
    case 1277: returnText = "LeaderboardVersionNotAvailable"; break;
    case 1279: returnText = "StatisticAlreadyHasPrizeTable"; break;
    case 1280: returnText = "PrizeTableHasOverlappingRanks"; break;
    case 1281: returnText = "PrizeTableHasMissingRanks"; break;
    case 1282: returnText = "PrizeTableRankStartsAtZero"; break;
    case 1283: returnText = "InvalidStatistic"; break;
    case 1284: returnText = "ExpressionParseFailure"; break;
    case 1285: returnText = "ExpressionInvokeFailure"; break;
    case 1286: returnText = "ExpressionTooLong"; break;
    case 1287: returnText = "DataUpdateRateExceeded"; break;
    case 1288: returnText = "RestrictedEmailDomain"; break;
    case 1289: returnText = "EncryptionKeyDisabled"; break;
    case 1290: returnText = "EncryptionKeyMissing"; break;
    case 1291: returnText = "EncryptionKeyBroken"; break;
    case 1292: returnText = "NoSharedSecretKeyConfigured"; break;
    case 1293: returnText = "SecretKeyNotFound"; break;
    case 1294: returnText = "PlayerSecretAlreadyConfigured"; break;
    case 1295: returnText = "APIRequestsDisabledForTitle"; break;
    case 1296: returnText = "InvalidSharedSecretKey"; break;
    case 1297: returnText = "PrizeTableHasNoRanks"; break;
    case 1298: returnText = "ProfileDoesNotExist"; break;
    case 1299: returnText = "ContentS3OriginBucketNotConfigured"; break;
    case 1300: returnText = "InvalidEnvironmentForReceipt"; break;
    case 1301: returnText = "EncryptedRequestNotAllowed"; break;
    case 1302: returnText = "SignedRequestNotAllowed"; break;
    case 1303: returnText = "RequestViewConstraintParamsNotAllowed"; break;
    case 1304: returnText = "BadPartnerConfiguration"; break;
    case 1305: returnText = "XboxBPCertificateFailure"; break;
    case 1306: returnText = "XboxXASSExchangeFailure"; break;
    case 1307: returnText = "InvalidEntityId"; break;
    case 1308: returnText = "StatisticValueAggregationOverflow"; break;
    case 1309: returnText = "EmailMessageFromAddressIsMissing"; break;
    case 1310: returnText = "EmailMessageToAddressIsMissing"; break;
    case 1311: returnText = "SmtpServerAuthenticationError"; break;
    case 1312: returnText = "SmtpServerLimitExceeded"; break;
    case 1313: returnText = "SmtpServerInsufficientStorage"; break;
    case 1314: returnText = "SmtpServerCommunicationError"; break;
    case 1315: returnText = "SmtpServerGeneralFailure"; break;
    case 1316: returnText = "EmailClientTimeout"; break;
    case 1317: returnText = "EmailClientCanceledTask"; break;
    case 1318: returnText = "EmailTemplateMissing"; break;
    case 1319: returnText = "InvalidHostForTitleId"; break;
    case 1320: returnText = "EmailConfirmationTokenDoesNotExist"; break;
    case 1321: returnText = "EmailConfirmationTokenExpired"; break;
    case 1322: returnText = "AccountDeleted"; break;
    case 1323: returnText = "PlayerSecretNotConfigured"; break;
    case 1324: returnText = "InvalidSignatureTime"; break;
    case 1325: returnText = "NoContactEmailAddressFound"; break;
    case 1326: returnText = "InvalidAuthToken"; break;
    case 1327: returnText = "AuthTokenDoesNotExist"; break;
    case 1328: returnText = "AuthTokenExpired"; break;
    case 1329: returnText = "AuthTokenAlreadyUsedToResetPassword"; break;
    case 1330: returnText = "MembershipNameTooLong"; break;
    case 1331: returnText = "MembershipNotFound"; break;
    case 1332: returnText = "GoogleServiceAccountInvalid"; break;
    case 1333: returnText = "GoogleServiceAccountParseFailure"; break;
    case 1334: returnText = "EntityTokenMissing"; break;
    case 1335: returnText = "EntityTokenInvalid"; break;
    case 1336: returnText = "EntityTokenExpired"; break;
    case 1337: returnText = "EntityTokenRevoked"; break;
    case 1338: returnText = "InvalidProductForSubscription"; break;
    case 1339: returnText = "XboxInaccessible"; break;
    case 1340: returnText = "SubscriptionAlreadyTaken"; break;
    case 1341: returnText = "SmtpAddonNotEnabled"; break;
    case 1342: returnText = "APIConcurrentRequestLimitExceeded"; break;
    case 1343: returnText = "XboxRejectedXSTSExchangeRequest"; break;
    case 1344: returnText = "VariableNotDefined"; break;
    case 1345: returnText = "TemplateVersionNotDefined"; break;
    case 1346: returnText = "FileTooLarge"; break;
    case 1347: returnText = "TitleDeleted"; break;
    case 1348: returnText = "TitleContainsUserAccounts"; break;
    case 1349: returnText = "TitleDeletionPlayerCleanupFailure"; break;
    case 1350: returnText = "EntityFileOperationPending"; break;
    case 1351: returnText = "NoEntityFileOperationPending"; break;
    case 1352: returnText = "EntityProfileVersionMismatch"; break;
    case 1353: returnText = "TemplateVersionTooOld"; break;
    case 1354: returnText = "MembershipDefinitionInUse"; break;
    case 1355: returnText = "PaymentPageNotConfigured"; break;
    case 1356: returnText = "FailedLoginAttemptRateLimitExceeded"; break;
    case 1357: returnText = "EntityBlockedByGroup"; break;
    case 1358: returnText = "RoleDoesNotExist"; break;
    case 1359: returnText = "EntityIsAlreadyMember"; break;
    case 1360: returnText = "DuplicateRoleId"; break;
    case 1361: returnText = "GroupInvitationNotFound"; break;
    case 1362: returnText = "GroupApplicationNotFound"; break;
    case 1363: returnText = "OutstandingInvitationAcceptedInstead"; break;
    case 1364: returnText = "OutstandingApplicationAcceptedInstead"; break;
    case 1365: returnText = "RoleIsGroupDefaultMember"; break;
    case 1366: returnText = "RoleIsGroupAdmin"; break;
    case 1367: returnText = "RoleNameNotAvailable"; break;
    case 1368: returnText = "GroupNameNotAvailable"; break;
    case 1369: returnText = "EmailReportAlreadySent"; break;
    case 1370: returnText = "EmailReportRecipientBlacklisted"; break;
    case 1371: returnText = "EventNamespaceNotAllowed"; break;
    case 1372: returnText = "EventEntityNotAllowed"; break;
    case 1373: returnText = "InvalidEntityType"; break;
    case 1374: returnText = "NullTokenResultFromAad"; break;
    case 1375: returnText = "InvalidTokenResultFromAad"; break;
    case 1376: returnText = "NoValidCertificateForAad"; break;
    case 1377: returnText = "InvalidCertificateForAad"; break;
    case 1378: returnText = "DuplicateDropTableId"; break;
    case 1379: returnText = "MultiplayerServerError"; break;
    case 1380: returnText = "MultiplayerServerTooManyRequests"; break;
    case 1381: returnText = "MultiplayerServerNoContent"; break;
    case 1382: returnText = "MultiplayerServerBadRequest"; break;
    case 1383: returnText = "MultiplayerServerUnauthorized"; break;
    case 1384: returnText = "MultiplayerServerForbidden"; break;
    case 1385: returnText = "MultiplayerServerNotFound"; break;
    case 1386: returnText = "MultiplayerServerConflict"; break;
    case 1387: returnText = "MultiplayerServerInternalServerError"; break;
    case 1388: returnText = "MultiplayerServerUnavailable"; break;
    case 1389: returnText = "ExplicitContentDetected"; break;
    case 1390: returnText = "PIIContentDetected"; break;
    case 1391: returnText = "InvalidScheduledTaskParameter"; break;
    case 1392: returnText = "PerEntityEventRateLimitExceeded"; break;
    case 1393: returnText = "TitleDefaultLanguageNotSet"; break;
    case 1394: returnText = "EmailTemplateMissingDefaultVersion"; break;
    case 1395: returnText = "FacebookInstantGamesIdNotLinked"; break;
    case 1396: returnText = "InvalidFacebookInstantGamesSignature"; break;
    case 1397: returnText = "FacebookInstantGamesAuthNotConfiguredForTitle"; break;
    case 1398: returnText = "EntityProfileConstraintValidationFailed"; break;
    case 1399: returnText = "TelemetryIngestionKeyPending"; break;
    case 1400: returnText = "TelemetryIngestionKeyNotFound"; break;
    case 1402: returnText = "StatisticChildNameInvalid"; break;
    case 1403: returnText = "DataIntegrityError"; break;
    case 1404: returnText = "VirtualCurrencyCannotBeSetToOlderVersion"; break;
    case 1405: returnText = "VirtualCurrencyMustBeWithinIntegerRange"; break;
    case 1406: returnText = "EmailTemplateInvalidSyntax"; break;
    case 1407: returnText = "EmailTemplateMissingCallback"; break;
    case 1408: returnText = "PushNotificationTemplateInvalidPayload"; break;
    case 1409: returnText = "InvalidLocalizedPushNotificationLanguage"; break;
    case 1410: returnText = "MissingLocalizedPushNotificationMessage"; break;
    case 1411: returnText = "PushNotificationTemplateMissingPlatformPayload"; break;
    case 1412: returnText = "PushNotificationTemplatePayloadContainsInvalidJson"; break;
    case 1413: returnText = "PushNotificationTemplateContainsInvalidIosPayload"; break;
    case 1414: returnText = "PushNotificationTemplateContainsInvalidAndroidPayload"; break;
    case 1415: returnText = "PushNotificationTemplateIosPayloadMissingNotificationBody"; break;
    case 1416: returnText = "PushNotificationTemplateAndroidPayloadMissingNotificationBody"; break;
    case 1417: returnText = "PushNotificationTemplateNotFound"; break;
    case 1418: returnText = "PushNotificationTemplateMissingDefaultVersion"; break;
    case 1419: returnText = "PushNotificationTemplateInvalidSyntax"; break;
    case 1420: returnText = "PushNotificationTemplateNoCustomPayloadForV1"; break;
    case 1421: returnText = "NoLeaderboardForStatistic"; break;
    case 1422: returnText = "TitleNewsMissingDefaultLanguage"; break;
    case 1423: returnText = "TitleNewsNotFound"; break;
    case 1424: returnText = "TitleNewsDuplicateLanguage"; break;
    case 1425: returnText = "TitleNewsMissingTitleOrBody"; break;
    case 1426: returnText = "TitleNewsInvalidLanguage"; break;
    case 1427: returnText = "EmailRecipientBlacklisted"; break;
    case 1428: returnText = "InvalidGameCenterAuthRequest"; break;
    case 1429: returnText = "GameCenterAuthenticationFailed"; break;
    case 1430: returnText = "CannotEnablePartiesForTitle"; break;
    case 1431: returnText = "PartyError"; break;
    case 1432: returnText = "PartyRequests"; break;
    case 1433: returnText = "PartyNoContent"; break;
    case 1434: returnText = "PartyBadRequest"; break;
    case 1435: returnText = "PartyUnauthorized"; break;
    case 1436: returnText = "PartyForbidden"; break;
    case 1437: returnText = "PartyNotFound"; break;
    case 1438: returnText = "PartyConflict"; break;
    case 1439: returnText = "PartyInternalServerError"; break;
    case 1440: returnText = "PartyUnavailable"; break;
    case 1441: returnText = "PartyTooManyRequests"; break;
    case 1442: returnText = "PushNotificationTemplateMissingName"; break;
    case 1443: returnText = "CannotEnableMultiplayerServersForTitle"; break;
    case 1444: returnText = "WriteAttemptedDuringExport"; break;
    case 1445: returnText = "MultiplayerServerTitleQuotaCoresExceeded"; break;
    case 1446: returnText = "AutomationRuleNotFound"; break;
    case 1447: returnText = "EntityAPIKeyLimitExceeded"; break;
    case 1448: returnText = "EntityAPIKeyNotFound"; break;
    case 1449: returnText = "EntityAPIKeyOrSecretInvalid"; break;
    case 1450: returnText = "EconomyServiceUnavailable"; break;
    case 1451: returnText = "EconomyServiceInternalError"; break;
    case 1452: returnText = "QueryRateLimitExceeded"; break;
    case 1453: returnText = "EntityAPIKeyCreationDisabledForEntity"; break;
    case 1454: returnText = "ForbiddenByEntityPolicy"; break;
    case 1455: returnText = "UpdateInventoryRateLimitExceeded"; break;
    case 1456: returnText = "StudioCreationRateLimited"; break;
    case 1457: returnText = "StudioCreationInProgress"; break;
    case 1458: returnText = "DuplicateStudioName"; break;
    case 1459: returnText = "StudioNotFound"; break;
    case 1460: returnText = "StudioDeleted"; break;
    case 1461: returnText = "StudioDeactivated"; break;
    case 1462: returnText = "StudioActivated"; break;
    case 1463: returnText = "TitleCreationRateLimited"; break;
    case 1464: returnText = "TitleCreationInProgress"; break;
    case 1465: returnText = "DuplicateTitleName"; break;
    case 1466: returnText = "TitleActivationRateLimited"; break;
    case 1467: returnText = "TitleActivationInProgress"; break;
    case 1468: returnText = "TitleDeactivated"; break;
    case 1469: returnText = "TitleActivated"; break;
    case 1470: returnText = "CloudScriptAzureFunctionsExecutionTimeLimitExceeded"; break;
    case 1471: returnText = "CloudScriptAzureFunctionsArgumentSizeExceeded"; break;
    case 1472: returnText = "CloudScriptAzureFunctionsReturnSizeExceeded"; break;
    case 1473: returnText = "CloudScriptAzureFunctionsHTTPRequestError"; break;
    case 1474: returnText = "VirtualCurrencyBetaGetError"; break;
    case 1475: returnText = "VirtualCurrencyBetaCreateError"; break;
    case 1476: returnText = "VirtualCurrencyBetaInitialDepositSaveError"; break;
    case 1477: returnText = "VirtualCurrencyBetaSaveError"; break;
    case 1478: returnText = "VirtualCurrencyBetaDeleteError"; break;
    case 1479: returnText = "VirtualCurrencyBetaRestoreError"; break;
    case 1480: returnText = "VirtualCurrencyBetaSaveConflict"; break;
    case 1481: returnText = "VirtualCurrencyBetaUpdateError"; break;
    case 1482: returnText = "InsightsManagementDatabaseNotFound"; break;
    case 1483: returnText = "InsightsManagementOperationNotFound"; break;
    case 1484: returnText = "InsightsManagementErrorPendingOperationExists"; break;
    case 1485: returnText = "InsightsManagementSetPerformanceLevelInvalidParameter"; break;
    case 1486: returnText = "InsightsManagementSetStorageRetentionInvalidParameter"; break;
    case 1487: returnText = "InsightsManagementGetStorageUsageInvalidParameter"; break;
    case 1488: returnText = "InsightsManagementGetOperationStatusInvalidParameter"; break;
    case 1489: returnText = "DuplicatePurchaseTransactionId"; break;
    case 1490: returnText = "EvaluationModePlayerCountExceeded"; break;
    case 1491: returnText = "GetPlayersInSegmentRateLimitExceeded"; break;
    case 1492: returnText = "CloudScriptFunctionNameSizeExceeded"; break;
    case 1493: returnText = "InsightsManagementTitleInEvaluationMode"; break;
    case 1494: returnText = "CloudScriptAzureFunctionsQueueRequestError"; break;
    case 1495: returnText = "EvaluationModeTitleCountExceeded"; break;
    case 1496: returnText = "InsightsManagementTitleNotInFlight"; break;
    case 1497: returnText = "LimitNotFound"; break;
    case 1498: returnText = "LimitNotAvailableViaAPI"; break;
    case 1499: returnText = "InsightsManagementSetStorageRetentionBelowMinimum"; break;
    case 1500: returnText = "InsightsManagementSetStorageRetentionAboveMaximum"; break;
    case 1501: returnText = "AppleNotEnabledForTitle"; break;
    case 1502: returnText = "InsightsManagementNewActiveEventExportLimitInvalid"; break;
    case 1503: returnText = "InsightsManagementSetPerformanceRateLimited"; break;
    case 1504: returnText = "PartyRequestsThrottledFromRateLimiter"; break;
    case 1505: returnText = "XboxServiceTooManyRequests"; break;
    case 1506: returnText = "NintendoSwitchNotEnabledForTitle"; break;
    case 1507: returnText = "RequestMultiplayerServersThrottledFromRateLimiter"; break;
    case 1508: returnText = "TitleDataOverrideNotFound"; break;
    case 1509: returnText = "DuplicateKeys"; break;
    case 1510: returnText = "WasNotCreatedWithCloudRoot"; break;
    case 1511: returnText = "LegacyMultiplayerServersDeprecated"; break;
    case 2001: returnText = "MatchmakingEntityInvalid"; break;
    case 2002: returnText = "MatchmakingPlayerAttributesInvalid"; break;
    case 2016: returnText = "MatchmakingQueueNotFound"; break;
    case 2017: returnText = "MatchmakingMatchNotFound"; break;
    case 2018: returnText = "MatchmakingTicketNotFound"; break;
    case 2028: returnText = "MatchmakingAlreadyJoinedTicket"; break;
    case 2029: returnText = "MatchmakingTicketAlreadyCompleted"; break;
    case 2031: returnText = "MatchmakingQueueConfigInvalid"; break;
    case 2032: returnText = "MatchmakingMemberProfileInvalid"; break;
    case 2034: returnText = "NintendoSwitchDeviceIdNotLinked"; break;
    case 2035: returnText = "MatchmakingNotEnabled"; break;
    case 2043: returnText = "MatchmakingPlayerAttributesTooLarge"; break;
    case 2044: returnText = "MatchmakingNumberOfPlayersInTicketTooLarge"; break;
    case 2046: returnText = "MatchmakingAttributeInvalid"; break;
    case 2053: returnText = "MatchmakingPlayerHasNotJoinedTicket"; break;
    case 2054: returnText = "MatchmakingRateLimitExceeded"; break;
    case 2055: returnText = "MatchmakingTicketMembershipLimitExceeded"; break;
    case 2056: returnText = "MatchmakingUnauthorized"; break;
    case 2057: returnText = "MatchmakingQueueLimitExceeded"; break;
    case 2058: returnText = "MatchmakingRequestTypeMismatch"; break;
    case 2059: returnText = "MatchmakingBadRequest"; break;
    case 3001: returnText = "TitleConfigNotFound"; break;
    case 3002: returnText = "TitleConfigUpdateConflict"; break;
    case 3003: returnText = "TitleConfigSerializationError"; break;
    case 4001: returnText = "CatalogEntityInvalid"; break;
    case 4002: returnText = "CatalogTitleIdMissing"; break;
    case 4003: returnText = "CatalogPlayerIdMissing"; break;
    case 4004: returnText = "CatalogClientIdentityInvalid"; break;
    case 4005: returnText = "CatalogOneOrMoreFilesInvalid"; break;
    case 4006: returnText = "CatalogItemMetadataInvalid"; break;
    case 4007: returnText = "CatalogItemIdInvalid"; break;
    case 4008: returnText = "CatalogSearchParameterInvalid"; break;
    case 4009: returnText = "CatalogFeatureDisabled"; break;
    case 4010: returnText = "CatalogConfigInvalid"; break;
    case 4011: returnText = "CatalogUnauthorized"; break;
    case 4012: returnText = "CatalogItemTypeInvalid"; break;
    case 4013: returnText = "CatalogBadRequest"; break;
    case 4014: returnText = "CatalogTooManyRequests"; break;
    case 5000: returnText = "ExportInvalidStatusUpdate"; break;
    case 5001: returnText = "ExportInvalidPrefix"; break;
    case 5002: returnText = "ExportBlobContainerDoesNotExist"; break;
    case 5004: returnText = "ExportNotFound"; break;
    case 5005: returnText = "ExportCouldNotUpdate"; break;
    case 5006: returnText = "ExportInvalidStorageType"; break;
    case 5007: returnText = "ExportAmazonBucketDoesNotExist"; break;
    case 5008: returnText = "ExportInvalidBlobStorage"; break;
    case 5009: returnText = "ExportKustoException"; break;
    case 5012: returnText = "ExportKustoConnectionFailed"; break;
    case 5013: returnText = "ExportUnknownError"; break;
    case 5014: returnText = "ExportCantEditPendingExport"; break;
    case 5015: returnText = "ExportLimitExports"; break;
    case 5016: returnText = "ExportLimitEvents"; break;
    case 5017: returnText = "ExportInvalidPartitionStatusModification"; break;
    case 5018: returnText = "ExportCouldNotCreate"; break;
    case 5019: returnText = "ExportNoBackingDatabaseFound"; break;
    case 5020: returnText = "ExportCouldNotDelete"; break;
    case 5021: returnText = "ExportCannotDetermineEventQuery"; break;
    case 5022: returnText = "ExportInvalidQuerySchemaModification"; break;
    case 5023: returnText = "ExportQuerySchemaMissingRequiredColumns"; break;
    case 5024: returnText = "ExportCannotParseQuery"; break;
    case 5025: returnText = "ExportControlCommandsNotAllowed"; break;
    case 5026: returnText = "ExportQueryMissingTableReference"; break;
    case 6000: returnText = "TitleNotEnabledForParty"; break;
    case 6001: returnText = "PartyVersionNotFound"; break;
    case 6002: returnText = "MultiplayerServerBuildReferencedByMatchmakingQueue"; break;
    case 7000: returnText = "ExperimentationExperimentStopped"; break;
    case 7001: returnText = "ExperimentationExperimentRunning"; break;
    case 7002: returnText = "ExperimentationExperimentNotFound"; break;
    case 7003: returnText = "ExperimentationExperimentNeverStarted"; break;
    case 7004: returnText = "ExperimentationExperimentDeleted"; break;
    case 7005: returnText = "ExperimentationClientTimeout"; break;
    case 7006: returnText = "ExperimentationInvalidVariantConfiguration"; break;
    case 7007: returnText = "ExperimentationInvalidVariableConfiguration"; break;
    case 7008: returnText = "ExperimentInvalidId"; break;
    case 7009: returnText = "ExperimentationNoScorecard"; break;
    case 7010: returnText = "ExperimentationTreatmentAssignmentFailed"; break;
    case 7011: returnText = "ExperimentationTreatmentAssignmentDisabled"; break;
    case 7012: returnText = "ExperimentationInvalidDuration"; break;
    case 7013: returnText = "ExperimentationMaxExperimentsReached"; break;
    case 7014: returnText = "ExperimentationExperimentSchedulingInProgress"; break;
    case 8000: returnText = "MaxActionDepthExceeded"; break;
    case 9000: returnText = "TitleNotOnUpdatedPricingPlan"; break;
    case 10000: returnText = "SegmentManagementTitleNotInFlight"; break;
    case 10001: returnText = "SegmentManagementNoExpressionTree"; break;
    case 10002: returnText = "SegmentManagementTriggerActionCountOverLimit"; break;
    case 10003: returnText = "SegmentManagementSegmentCountOverLimit"; break;
    case 10004: returnText = "SegmentManagementInvalidSegmentId"; break;
    case 11000: returnText = "SnapshotNotFound"; break;
    }

    // Return the text
    return returnText;
}
