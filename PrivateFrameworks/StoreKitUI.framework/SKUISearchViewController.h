/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SSVLoadURLOperation, SKUIMetricsController, NSArray, NSURLRequest, SKUIIPhoneSearchViewController, SKUISearchPage, NSMutableArray, NSDictionary, SKUISearchFieldController, SKUIIPadSearchViewController, SSMetricsPageEvent;

@interface SKUISearchViewController : SKUIViewController <SKUISearchChildViewControllerDelegate, SKUIMetricsViewController> {
    SKUIIPhoneSearchViewController *_iPhoneViewController;
    SKUIIPadSearchViewController *_iPadViewController;
    SSMetricsPageEvent *_lastPageEvent;
    SSVLoadURLOperation *_loadOperation;
    SKUIMetricsController *_metricsController;
    SKUISearchPage *_page;
    SKUISearchFieldController *_searchFieldController;
    NSURLRequest *_urlRequest;
    NSDictionary *_facetSelections;
    NSArray *_searchFacets;
    NSMutableArray *_previousRelatedQueries;
}

@property(retain) SKUISearchFieldController * searchFieldController;

+ (id)_customFacetsForFacets:(id)arg1 clientContext:(id)arg2;

- (void)_reloadView;
- (id)searchFieldController;
- (void)setSearchFieldController:(id)arg1;
- (void)searchWithExternalURL:(id)arg1;
- (void)searchWithURL:(id)arg1;
- (id)activeMetricsController;
- (void)searchChildViewControllerDidChangeFacetSelections:(id)arg1;
- (void)searchChildViewController:(id)arg1 didSelectSearchTerm:(id)arg2;
- (void)searchChildViewControllerDidSelectRelatedBackButton:(id)arg1;
- (void)searchChildViewController:(id)arg1 didSelectRelatedQuery:(id)arg2;
- (void)searchChildViewController:(id)arg1 didSelectEditorial:(id)arg2;
- (void)searchChildViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)searchWithSearchTerm:(id)arg1;
- (void)_reloadOrientation:(int)arg1;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (void)_setMetricsController:(id)arg1;
- (void)_reloadChildViewController;
- (void)_searchWithSearchTerm:(id)arg1 persistRelated:(BOOL)arg2;
- (void)_searchWithURLRequest:(id)arg1 persistRelated:(BOOL)arg2;
- (void)scrollToTop;
- (void)_metricsEnterEventNotification:(id)arg1;
- (void)_cancelButtonAction:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)contentScrollView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)reloadData;

@end
