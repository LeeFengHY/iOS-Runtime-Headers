/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaContentTasteUpdateRequest : SSRequest <SSXPCCoding> {
    NSArray *_contentTasteItemUpdates;
    BOOL _shouldInvalidateLocalCache;
}

@property (nonatomic, copy) NSArray *contentTasteItemUpdates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL shouldInvalidateLocalCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentTasteItemUpdates;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setContentTasteItemUpdates:(id)arg1;
- (void)setShouldInvalidateLocalCache:(BOOL)arg1;
- (BOOL)shouldInvalidateLocalCache;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end