##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SectionChallenge
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/peter/Udemy/CPP/Section13
ProjectPath            :=C:/Users/peter/Udemy/CPP/Section13/SectionChallenge
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=peter
Date                   :=21/09/2021
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :="C:/Program Files/mingw-w64/mingw64/bin/g++.exe"
SharedObjectLinkerName :="C:/Program Files/mingw-w64/mingw64/bin/g++.exe" -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="SectionChallenge.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :="C:/Program Files/mingw-w64/mingw64/bin/windres.exe"
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := "C:/Program Files/mingw-w64/mingw64/bin/ar.exe" rcu
CXX      := "C:/Program Files/mingw-w64/mingw64/bin/g++.exe"
CC       := "C:/Program Files/mingw-w64/mingw64/bin/gcc.exe"
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := "C:/Program Files/mingw-w64/mingw64/bin/as.exe"


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Car.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Garage.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "$(ConfigurationName)"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "$(ConfigurationName)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/Car.cpp$(ObjectSuffix): Car.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Car.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Car.cpp$(DependSuffix) -MM Car.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/peter/Udemy/CPP/Section13/SectionChallenge/Car.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Car.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Car.cpp$(PreprocessSuffix): Car.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Car.cpp$(PreprocessSuffix) Car.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/peter/Udemy/CPP/Section13/SectionChallenge/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Garage.cpp$(ObjectSuffix): Garage.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Garage.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Garage.cpp$(DependSuffix) -MM Garage.cpp
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/peter/Udemy/CPP/Section13/SectionChallenge/Garage.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Garage.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Garage.cpp$(PreprocessSuffix): Garage.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Garage.cpp$(PreprocessSuffix) Garage.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


