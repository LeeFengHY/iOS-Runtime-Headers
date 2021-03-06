/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSLocalPairingRequestContext : NSObject {
    IDSLocalPairingResponseHandler *_responseHandler;
    IMTimer *_systemTimer;
    id /* block */ _timeoutBlock;
}

- (void)dealloc;
- (id)initWithResponseHandler:(id)arg1 timeoutBlock:(id /* block */)arg2 systemTimer:(id)arg3;
- (void)killSystemTimer;
- (id)responseHandler;
- (id)systemTimer;
- (id /* block */)timeoutBlock;

@end
