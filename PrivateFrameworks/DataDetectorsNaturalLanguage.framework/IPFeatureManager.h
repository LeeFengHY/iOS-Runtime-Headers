/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPFeatureManager : NSObject

+ (unsigned int)_distanceBetweenFeature:(id)arg1 andFeature:(id)arg2;
+ (id)_featureDataInFeatures:(id)arg1 atIndex:(unsigned int)arg2;
+ (id)_featureSentenceInFeatures:(id)arg1 atIndex:(unsigned int)arg2;
+ (id)_featureWithClass:(Class)arg1 inFeatures:(id)arg2 atIndex:(unsigned int)arg3;
+ (id)_nearbyFeatureDatas:(id)arg1 fromFeatureAtIndex:(unsigned int)arg2 messageUnit:(id)arg3;
+ (id)_nearbyFeatureSentences:(id)arg1 fromFeatureAtIndex:(unsigned int)arg2 messageUnit:(id)arg3;
+ (void)_scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(id /* block */)arg3;
+ (id)_sortedFeaturesByDistance:(id)arg1 aroundRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)_sortedFeaturesByRange:(id)arg1;
+ (id)bestEventFromEvents:(id)arg1;
+ (unsigned int)countOfFeaturesContainDateInTheFuture:(id)arg1 messageUnitSentDate:(id)arg2;
+ (id)dataDetectorsFeatureExtractor;
+ (id)descriptionForScanResultType:(unsigned int)arg1;
+ (id)featureExtractorsExceptDataDetectorsExtractor;
+ (unsigned int)featureSentencePolarityForFeatureAtIndex:(unsigned int)arg1 inFeatures:(id)arg2;
+ (BOOL)features:(id)arg1 containDateOlderThan:(id)arg2;
+ (id)featuresForTextUnit:(id)arg1 inMessageUnit:(id)arg2;
+ (id)featuresForTextUnit:(id)arg1 inMessageUnit:(id)arg2 extractors:(id)arg3 context:(id)arg4;
+ (id)filteredEventsForDetectedEvents:(id)arg1 referenceDate:(id)arg2;
+ (BOOL)isBlacklistedSender:(id)arg1;
+ (BOOL)isDateAroundNoon:(id)arg1;
+ (BOOL)isEventProposalFromFeatures:(id)arg1 fromFeatureAtIndex:(unsigned int)arg2 messageUnit:(id)arg3 eventIsTimeDependent:(BOOL)arg4 extractedFromSubject:(BOOL)arg5;
+ (BOOL)isNaturalLanguageEventDetectionEnabled;
+ (id)linksAndPhoneNumbersStringsFromFeatures:(id)arg1;
+ (id)normalizedAllDayDateFromDate:(id)arg1;
+ (void)normalizedEvents:(id)arg1;
+ (void)scanEventsInMessageUnits:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(id /* block */)arg3;
+ (id)sharedFeatureManager;
+ (BOOL)shouldLog;
+ (BOOL)shouldReplaceSendDateWithCurrentDate;
+ (id)stitchedEventsFromEvents:(id)arg1;
+ (id)subjectEventVocabularyPositiveKeyword:(id)arg1;
+ (id)subjectEventVocabularyRejectionKeyword:(id)arg1;

@end