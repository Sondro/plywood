PLY_STRUCT_BEGIN(ply::cpp::Preprocessor::Error)
PLY_STRUCT_MEMBER(type)
PLY_STRUCT_MEMBER(linearLoc)
PLY_STRUCT_MEMBER(otherLoc)
PLY_STRUCT_END()

PLY_ENUM_BEGIN(ply::cpp::, Preprocessor::Error::Type)
PLY_ENUM_IDENTIFIER(Unknown)
PLY_ENUM_IDENTIFIER(InvalidDirective)
PLY_ENUM_IDENTIFIER(EOFInMacro)
PLY_ENUM_IDENTIFIER(EOFInComment)
PLY_ENUM_IDENTIFIER(EOFInStringLiteral)
PLY_ENUM_IDENTIFIER(EOFInRawStringDelimiter)
PLY_ENUM_IDENTIFIER(InvalidCharInRawStringDelimiter)
PLY_ENUM_IDENTIFIER(InvalidStringLiteralPrefix)
PLY_ENUM_IDENTIFIER(DirectiveNotAtStartOfLine)
PLY_ENUM_IDENTIFIER(GarbageCharacters)
PLY_ENUM_END()

