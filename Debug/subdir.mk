################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../AnimatedSprite.cpp \
../Animation.cpp \
../Bgm.cpp \
../Cloud.cpp \
../CollideLayer.cpp \
../Content.cpp \
../CurrentLayer.cpp \
../GameObject.cpp \
../GameObjectState.cpp \
../Physics.cpp \
../Player.cpp \
../Polygon.cpp \
../Scene.cpp \
../StaticObject.cpp \
../main.cpp 

OBJS += \
./AnimatedSprite.o \
./Animation.o \
./Bgm.o \
./Cloud.o \
./CollideLayer.o \
./Content.o \
./CurrentLayer.o \
./GameObject.o \
./GameObjectState.o \
./Physics.o \
./Player.o \
./Polygon.o \
./Scene.o \
./StaticObject.o \
./main.o 

CPP_DEPS += \
./AnimatedSprite.d \
./Animation.d \
./Bgm.d \
./Cloud.d \
./CollideLayer.d \
./Content.d \
./CurrentLayer.d \
./GameObject.d \
./GameObjectState.d \
./Physics.d \
./Player.d \
./Polygon.d \
./Scene.d \
./StaticObject.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -std=c++11 -DSFML_DYNAMIC -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


