/* Generated by RuntimeBrowser.
 */

@protocol CBXpcConnectionDelegate <NSObject>

@required

- (void)xpcConnectionDidFinalize;
- (void)xpcConnectionDidReceiveMsg:(void *)arg1 args:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: unsigned short, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)xpcConnectionDidReset;
- (void)xpcConnectionIsInvalid;

@end