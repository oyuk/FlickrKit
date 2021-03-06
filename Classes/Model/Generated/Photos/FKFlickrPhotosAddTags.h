//
//  FKFlickrPhotosAddTags.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPhotosAddTagsError_PhotoNotFound = 1,		 /* The photo id passed was not the id of a photo that the calling user can add tags to. It could be an invalid id, or the user may not have permission to add tags to it. */
	FKFlickrPhotosAddTagsError_MaximumNumberOfTagsReached = 2,		 /* The maximum number of tags for the photo has been reached - no more tags can be added. If the current count is less than the maximum, but adding all of the tags for this request would go over the limit, the whole request is ignored. I.E. when you get this message, none of the requested tags have been added. */
	FKFlickrPhotosAddTagsError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPhotosAddTagsError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosAddTagsError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosAddTagsError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosAddTagsError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosAddTagsError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosAddTagsError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosAddTagsError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosAddTagsError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosAddTagsError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosAddTagsError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosAddTagsError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosAddTagsError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPhotosAddTagsError;

/*

Add tags to a photo.




*/
@interface FKFlickrPhotosAddTags : NSObject <FKFlickrAPIMethod>

/* The id of the photo to add tags to. */
@property (nonatomic, copy) NSString *photo_id; /* (Required) */

/* The tags to add to the photo. */
@property (nonatomic, copy) NSString *tags; /* (Required) */


@end
