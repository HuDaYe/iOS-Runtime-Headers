/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <WebDocumentRepresentation>, NSError, NSURLRequest, NSURLResponse;

@interface WebDataSourcePrivate : NSObject {
    struct WebDocumentLoaderMac { int (**x1)(); NSInteger x2; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x3; struct Frame {} *x4; struct RefPtr<WebCore::MainResourceLoader> { 
            struct MainResourceLoader {} *m_ptr; 
        } x5; struct HashSet<WTF::RefPtr<WebCore::ResourceLoader>,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { 
            struct HashTable<WTF::RefPtr<WebCore::ResourceLoader>,WTF::RefPtr<WebCore::ResourceLoader>,WTF::IdentityExtractor<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { 
                struct RefPtr<WebCore::ResourceLoader> {} *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x6; struct HashSet<WTF::RefPtr<WebCore::ResourceLoader>,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { 
            struct HashTable<WTF::RefPtr<WebCore::ResourceLoader>,WTF::RefPtr<WebCore::ResourceLoader>,WTF::IdentityExtractor<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { 
                struct RefPtr<WebCore::ResourceLoader> {} *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x7; struct HashSet<WTF::RefPtr<WebCore::ResourceLoader>,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { 
            struct HashTable<WTF::RefPtr<WebCore::ResourceLoader>,WTF::RefPtr<WebCore::ResourceLoader>,WTF::IdentityExtractor<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { 
                struct RefPtr<WebCore::ResourceLoader> {} *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x8; struct RefPtr<WebCore::SharedBuffer> { 
            struct SharedBuffer {} *m_ptr; 
        } x9; struct ResourceRequest { 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                unsigned int m_isValid : 1; 
                unsigned int m_protocolInHTTPFamily : 1; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_url; 
            NSInteger m_cachePolicy; 
            double m_timeoutInterval; 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                unsigned int m_isValid : 1; 
                unsigned int m_protocolInHTTPFamily : 1; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_firstPartyForCookies; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_httpMethod; 
            struct HTTPHeaderMap { 
                struct HashTable<WebCore::AtomicString,std::pair<WebCore::AtomicString, WebCore::String>,WTF::PairFirstExtractor<std::pair<WebCore::AtomicString, WebCore::String> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::AtomicString>, WTF::HashTraits<WebCore::String> >,WTF::HashTraits<WebCore::AtomicString> > { 
                    struct pair<WebCore::AtomicString,WebCore::String> {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_httpHeaderFields; 
            struct Vector<WebCore::String,0ul> { 
                NSUInteger m_size; 
                struct VectorBuffer<WebCore::String,0ul> { 
                    struct String {} *m_buffer; 
                    NSUInteger m_capacity; 
                } m_buffer; 
            } m_responseContentDispositionEncodingFallbackArray; 
            struct RefPtr<WebCore::FormData> { 
                struct FormData {} *m_ptr; 
            } m_httpBody; 
            void*m_allowCookies; 
            void*m_resourceRequestUpdated; 
            void*m_platformRequestUpdated; 
            void*m_reportUploadProgress; 
            NSInteger m_priority; 
            NSInteger m_targetType; 
            void*m_mainResourceRequest; 
            struct RetainPtr<NSURLRequest> { 
                NSURLRequest *m_ptr; 
            } m_nsRequest; 
        } x10; struct SubstituteData { 
            struct RefPtr<WebCore::SharedBuffer> { 
                struct SharedBuffer {} *m_ptr; 
            } m_content; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_mimeType; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_textEncoding; 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                unsigned int m_isValid : 1; 
                unsigned int m_protocolInHTTPFamily : 1; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_failingURL; 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                unsigned int m_isValid : 1; 
                unsigned int m_protocolInHTTPFamily : 1; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_responseURL; 
        } x11; struct ResourceRequest { 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                unsigned int m_isValid : 1; 
                unsigned int m_protocolInHTTPFamily : 1; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_url; 
            NSInteger m_cachePolicy; 
            double m_timeoutInterval; 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                unsigned int m_isValid : 1; 
                unsigned int m_protocolInHTTPFamily : 1; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_firstPartyForCookies; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_httpMethod; 
            struct HTTPHeaderMap { 
                struct HashTable<WebCore::AtomicString,std::pair<WebCore::AtomicString, WebCore::String>,WTF::PairFirstExtractor<std::pair<WebCore::AtomicString, WebCore::String> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::AtomicString>, WTF::HashTraits<WebCore::String> >,WTF::HashTraits<WebCore::AtomicString> > { 
                    struct pair<WebCore::AtomicString,WebCore::String> {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_httpHeaderFields; 
            struct Vector<WebCore::String,0ul> { 
                NSUInteger m_size; 
                struct VectorBuffer<WebCore::String,0ul> { 
                    struct String {} *m_buffer; 
                    NSUInteger m_capacity; 
                } m_buffer; 
            } m_responseContentDispositionEncodingFallbackArray; 
            struct RefPtr<WebCore::FormData> { 
                struct FormData {} *m_ptr; 
            } m_httpBody; 
            void*m_allowCookies; 
            void*m_resourceRequestUpdated; 
            void*m_platformRequestUpdated; 
            void*m_reportUploadProgress; 
            NSInteger m_priority; 
            NSInteger m_targetType; 
            void*m_mainResourceRequest; 
            struct RetainPtr<NSURLRequest> { 
                NSURLRequest *m_ptr; 
            } m_nsRequest; 
        } x12; struct ResourceRequest { 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                unsigned int m_isValid : 1; 
                unsigned int m_protocolInHTTPFamily : 1; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_url; 
            NSInteger m_cachePolicy; 
            double m_timeoutInterval; 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                unsigned int m_isValid : 1; 
                unsigned int m_protocolInHTTPFamily : 1; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_firstPartyForCookies; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_httpMethod; 
            struct HTTPHeaderMap { 
                struct HashTable<WebCore::AtomicString,std::pair<WebCore::AtomicString, WebCore::String>,WTF::PairFirstExtractor<std::pair<WebCore::AtomicString, WebCore::String> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::AtomicString>, WTF::HashTraits<WebCore::String> >,WTF::HashTraits<WebCore::AtomicString> > { 
                    struct pair<WebCore::AtomicString,WebCore::String> {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_httpHeaderFields; 
            struct Vector<WebCore::String,0ul> { 
                NSUInteger m_size; 
                struct VectorBuffer<WebCore::String,0ul> { 
                    struct String {} *m_buffer; 
                    NSUInteger m_capacity; 
                } m_buffer; 
            } m_responseContentDispositionEncodingFallbackArray; 
            struct RefPtr<WebCore::FormData> { 
                struct FormData {} *m_ptr; 
            } m_httpBody; 
            void*m_allowCookies; 
            void*m_resourceRequestUpdated; 
            void*m_platformRequestUpdated; 
            void*m_reportUploadProgress; 
            NSInteger m_priority; 
            NSInteger m_targetType; 
            void*m_mainResourceRequest; 
            struct RetainPtr<NSURLRequest> { 
                NSURLRequest *m_ptr; 
            } m_nsRequest; 
        } x13; struct ResourceResponse { 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                unsigned int m_isValid : 1; 
                unsigned int m_protocolInHTTPFamily : 1; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_url; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_mimeType; 
            long long m_expectedContentLength; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_textEncodingName; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_suggestedFilename; 
            NSInteger m_httpStatusCode; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_httpStatusText; 
            struct HTTPHeaderMap { 
                struct HashTable<WebCore::AtomicString,std::pair<WebCore::AtomicString, WebCore::String>,WTF::PairFirstExtractor<std::pair<WebCore::AtomicString, WebCore::String> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::AtomicString>, WTF::HashTraits<WebCore::String> >,WTF::HashTraits<WebCore::AtomicString> > { 
                    struct pair<WebCore::AtomicString,WebCore::String> {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_httpHeaderFields; 
            NSInteger m_lastModifiedDate; 
            unsigned int m_isNull : 1; 
            unsigned int m_haveParsedCacheControlHeader : 1; 
            unsigned int m_haveParsedAgeHeader : 1; 
            unsigned int m_haveParsedDateHeader : 1; 
            unsigned int m_haveParsedExpiresHeader : 1; 
            unsigned int m_haveParsedLastModifiedHeader : 1; 
            unsigned int m_cacheControlContainsNoCache : 1; 
            unsigned int m_cacheControlContainsNoStore : 1; 
            unsigned int m_cacheControlContainsMustRevalidate : 1; 
            double m_cacheControlMaxAge; 
            double m_age; 
            double m_date; 
            double m_expires; 
            double m_lastModified; 
            struct RetainPtr<NSURLResponse> { 
                NSURLResponse *m_ptr; 
            } m_nsResponse; 
            void*m_isUpToDate; 
        } x14; struct ResourceError { 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_domain; 
            NSInteger m_errorCode; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_failingURL; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_localizedDescription; 
            void*m_isNull; 
            void*m_isCancellation; 
            void*m_dataIsUpToDate; 
            struct RetainPtr<NSError> { 
                NSError *m_ptr; 
            } m_platformError; 
        } x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x22; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x23; struct NavigationAction { 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                unsigned int m_isValid : 1; 
                unsigned int m_protocolInHTTPFamily : 1; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_URL; 
            NSInteger m_type; 
            struct RefPtr<WebCore::Event> { 
                struct Event {} *m_ptr; 
            } m_event; 
        } x24; struct ResourceRequest { 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                unsigned int m_isValid : 1; 
                unsigned int m_protocolInHTTPFamily : 1; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_url; 
            NSInteger m_cachePolicy; 
            double m_timeoutInterval; 
            struct KURL { 
                struct String { 
                    struct RefPtr<WebCore::StringImpl> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } m_string; 
                unsigned int m_isValid : 1; 
                unsigned int m_protocolInHTTPFamily : 1; 
                NSInteger m_schemeEnd; 
                NSInteger m_userStart; 
                NSInteger m_userEnd; 
                NSInteger m_passwordEnd; 
                NSInteger m_hostEnd; 
                NSInteger m_portEnd; 
                NSInteger m_pathAfterLastSlash; 
                NSInteger m_pathEnd; 
                NSInteger m_queryEnd; 
                NSInteger m_fragmentEnd; 
            } m_firstPartyForCookies; 
            struct String { 
                struct RefPtr<WebCore::StringImpl> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_httpMethod; 
            struct HTTPHeaderMap { 
                struct HashTable<WebCore::AtomicString,std::pair<WebCore::AtomicString, WebCore::String>,WTF::PairFirstExtractor<std::pair<WebCore::AtomicString, WebCore::String> >,WebCore::CaseFoldingHash,WTF::PairHashTraits<WTF::HashTraits<WebCore::AtomicString>, WTF::HashTraits<WebCore::String> >,WTF::HashTraits<WebCore::AtomicString> > { 
                    struct pair<WebCore::AtomicString,WebCore::String> {} *m_table; 
                    NSInteger m_tableSize; 
                    NSInteger m_tableSizeMask; 
                    NSInteger m_keyCount; 
                    NSInteger m_deletedCount; 
                } m_impl; 
            } m_httpHeaderFields; 
            struct Vector<WebCore::String,0ul> { 
                NSUInteger m_size; 
                struct VectorBuffer<WebCore::String,0ul> { 
                    struct String {} *m_buffer; 
                    NSUInteger m_capacity; 
                } m_buffer; 
            } m_responseContentDispositionEncodingFallbackArray; 
            struct RefPtr<WebCore::FormData> { 
                struct FormData {} *m_ptr; 
            } m_httpBody; 
            void*m_allowCookies; 
            void*m_resourceRequestUpdated; 
            void*m_platformRequestUpdated; 
            void*m_reportUploadProgress; 
            NSInteger m_priority; 
            NSInteger m_targetType; 
            void*m_mainResourceRequest; 
            struct RetainPtr<NSURLRequest> { 
                NSURLRequest *m_ptr; 
            } m_nsRequest; 
        } x25; struct Vector<WebCore::ResourceResponse,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WebCore::ResourceResponse,0ul> { 
                struct ResourceResponse {} *m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x26; void*x27; struct HashMap<WTF::RefPtr<WebCore::ResourceLoader>,WTF::RefPtr<WebCore::SubstituteResource>,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::HashTraits<WTF::RefPtr<WebCore::SubstituteResource> > > { 
            struct HashTable<WTF::RefPtr<WebCore::ResourceLoader>,std::pair<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource> >,WTF::PairFirstExtractor<std::pair<WTF::RefPtr<WebCore::ResourceLoader>, WTF::RefPtr<WebCore::SubstituteResource> > >,WTF::PtrHash<WTF::RefPtr<WebCore::ResourceLoader> >,WTF::PairHashTraits<WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> >, WTF::HashTraits<WTF::RefPtr<WebCore::SubstituteResource> > >,WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader> > > { 
                struct pair<WTF::RefPtr<WebCore::ResourceLoader>,WTF::RefPtr<WebCore::SubstituteResource> > {} *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x28; struct Timer<WebCore::DocumentLoader> { 
            int (**_vptr$TimerBase)(); 
            double m_nextFireTime; 
            double m_repeatInterval; 
            NSInteger m_heapIndex; 
            NSUInteger m_heapInsertionOrder; 
            struct DocumentLoader {} *m_object; 
            struct { 
                void**__pfn; 
            } m_function; 
        } x29; struct OwnPtr<WebCore::ArchiveResourceCollection> { 
            struct ArchiveResourceCollection {} *m_ptr; 
        } x30; struct RefPtr<WebCore::SharedBuffer> { 
            struct SharedBuffer {} *m_ptr; 
        } x31; struct HashSet<WebCore::String,WebCore::StringHash,WTF::HashTraits<WebCore::String> > { 
            struct HashTable<WebCore::String,WebCore::String,WTF::IdentityExtractor<WebCore::String>,WebCore::StringHash,WTF::HashTraits<WebCore::String>,WTF::HashTraits<WebCore::String> > { 
                struct String {} *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x32; struct Vector<WebCore::String,0ul> { 
            NSUInteger m_size; 
            struct VectorBuffer<WebCore::String,0ul> { 
                struct String {} *m_buffer; 
                NSUInteger m_capacity; 
            } m_buffer; 
        } x33; struct String { 
            struct RefPtr<WebCore::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } x34; void*x35; struct OwnPtr<WebCore::ApplicationCacheHost> { 
            struct ApplicationCacheHost {} *m_ptr; 
        } x36; id x37; void*x38; void*x39; void*x40; unsigned int x41/* : ? */; void*x42; void*x43; void*x44; void*x45; unsigned short x46; out void*x47; const BOOL x48; void*x49; void*x50; void*x51; struct RetainPtr<objc_object*> { 
            id m_ptr; 
        } x52; struct RetainPtr<objc_object*> { 
            id m_ptr; 
        } x53; struct HashSet<long unsigned int,WTF::IntHash<long unsigned int>,WTF::HashTraits<long unsigned int> > { 
            struct HashTable<long unsigned int,long unsigned int,WTF::IdentityExtractor<long unsigned int>,WTF::IntHash<long unsigned int>,WTF::HashTraits<long unsigned int>,WTF::HashTraits<long unsigned int> > { 
                unsigned long *m_table; 
                NSInteger m_tableSize; 
                NSInteger m_tableSizeMask; 
                NSInteger m_keyCount; 
                NSInteger m_deletedCount; 
            } m_impl; 
        } x54; } *loader;
    <WebDocumentRepresentation> *representation;
    BOOL representationFinishedLoading;
}

+ (void)initialize;

- (void)dealloc;
- (void)finalize;

@end