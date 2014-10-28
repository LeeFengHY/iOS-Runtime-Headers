/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
 */

@class NSMutableDictionary, NSMutableString, NSString;

@interface MobileActivationNSXMLParserDelegate : NSObject <NSXMLParserDelegate> {
    NSMutableDictionary *_activationTicket;
    NSMutableString *_currentPlist;
    int _state;
    bool_recertifying;
    bool_renderHTML;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id)activationTicket:(id*)arg1 andRenderHTML:(bool*)arg2;
- (id)activationTicket:(id*)arg1;
- (void)appendClosingTagForElementName:(id)arg1;
- (void)appendOpeningTagForElementName:(id)arg1 andAttributes:(id)arg2;
- (void)dealloc;
- (id)flattenedDictString:(id)arg1;
- (id)init;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)setRecertifying:(bool)arg1;
- (id)stringForState:(int)arg1;

@end