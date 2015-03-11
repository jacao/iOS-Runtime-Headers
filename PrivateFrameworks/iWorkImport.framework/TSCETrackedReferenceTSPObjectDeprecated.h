/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSCETrackedReferenceTSPObjectDeprecated : TSPObject {
    struct { 
        unsigned int formulaID : 24; 
        unsigned int reserved : 8; 
    struct TSCEASTNodeArray { char *x1; unsigned long long x2; unsigned long long x3; id x4; } *mAST;
    } mFormulaID;
}

- (id).cxx_construct;
- (struct TSCEASTNodeArray { char *x1; unsigned long long x2; unsigned long long x3; id x4; }*)ast;
- (void)dealloc;
- (void)encodeToArchive:(struct TrackedReferenceArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ASTNodeArrayArchive {} *x3; unsigned int x4; int x5; unsigned int x6[1]; }*)arg1;
- (struct { unsigned int x1 : 24; unsigned int x2 : 8; })formulaID;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end