#import <Flutter/Flutter.h>
#import <StoreKit/StoreKit.h>

@interface BillingPlugin : NSObject<FlutterPlugin, SKPaymentTransactionObserver, SKProductsRequestDelegate> {

    NSArray *validProducts;
    SKProductsRequest *productsRequest;

}
@end
