#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048F8B8
// Address: 0x48f8b8 - 0x48fa00
void sub_0048F8B8_0x48f8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F8B8_0x48f8b8");
#endif

    ctx->pc = 0x48f8b8u;

    // 0x48f8b8: 0x3c020084  lui         $v0, 0x84
    ctx->pc = 0x48f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)132 << 16));
    // 0x48f8bc: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x48f8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x48f8c0: 0x2442c6c0  addiu       $v0, $v0, -0x3940
    ctx->pc = 0x48f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952640));
    // 0x48f8c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x48f8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x48f8c8: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x48f8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x48f8cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x48f8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48f8d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48f8d4: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x48f8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x48f8d8: 0x240900f8  addiu       $t1, $zero, 0xF8
    ctx->pc = 0x48f8d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x48f8dc: 0x240a00f2  addiu       $t2, $zero, 0xF2
    ctx->pc = 0x48f8dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x48f8e0: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x48f8e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x48f8e4: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x48f8e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48f8e8: 0x240d008e  addiu       $t5, $zero, 0x8E
    ctx->pc = 0x48f8e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x48f8ec: 0x240e0014  addiu       $t6, $zero, 0x14
    ctx->pc = 0x48f8ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x48f8f0: 0xa4450008  sh          $a1, 0x8($v0)
    ctx->pc = 0x48f8f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x83C6C8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6C8u, _value); } while (0);
    // 0x48f8f4: 0xa444000a  sh          $a0, 0xA($v0)
    ctx->pc = 0x48f8f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x83C6CAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6CAu, _value); } while (0);
    // 0x48f8f8: 0xa448000c  sh          $t0, 0xC($v0)
    ctx->pc = 0x48f8f8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x83C6CCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6CCu, _value); } while (0);
    // 0x48f8fc: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x48f8fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83C6CEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6CEu, _value); } while (0);
    // 0x48f900: 0xa4430010  sh          $v1, 0x10($v0)
    ctx->pc = 0x48f900u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x83C6D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6D0u, _value); } while (0);
    // 0x48f904: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x48f904u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83C6D2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6D2u, _value); } while (0);
    // 0x48f908: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x48f908u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x83C6D4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6D4u, _value); } while (0);
    // 0x48f90c: 0xa4400016  sh          $zero, 0x16($v0)
    ctx->pc = 0x48f90cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83C6D6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6D6u, _value); } while (0);
    // 0x48f910: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x48f910u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x83C6D8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6D8u, _value); } while (0);
    // 0x48f914: 0xa446001a  sh          $a2, 0x1A($v0)
    ctx->pc = 0x48f914u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x83C6DAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6DAu, _value); } while (0);
    // 0x48f918: 0xa446001c  sh          $a2, 0x1C($v0)
    ctx->pc = 0x48f918u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x83C6DCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6DCu, _value); } while (0);
    // 0x48f91c: 0xa440001e  sh          $zero, 0x1E($v0)
    ctx->pc = 0x48f91cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83C6DEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6DEu, _value); } while (0);
    // 0x48f920: 0xa4400020  sh          $zero, 0x20($v0)
    ctx->pc = 0x48f920u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83C6E0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6E0u, _value); } while (0);
    // 0x48f924: 0xa4490022  sh          $t1, 0x22($v0)
    ctx->pc = 0x48f924u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x83C6E2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6E2u, _value); } while (0);
    // 0x48f928: 0xa44a0024  sh          $t2, 0x24($v0)
    ctx->pc = 0x48f928u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x83C6E4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6E4u, _value); } while (0);
    // 0x48f92c: 0xa44b0026  sh          $t3, 0x26($v0)
    ctx->pc = 0x48f92cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x83C6E6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6E6u, _value); } while (0);
    // 0x48f930: 0xa44c0028  sh          $t4, 0x28($v0)
    ctx->pc = 0x48f930u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x83C6E8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6E8u, _value); } while (0);
    // 0x48f934: 0xa44d002a  sh          $t5, 0x2A($v0)
    ctx->pc = 0x48f934u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x83C6EAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6EAu, _value); } while (0);
    // 0x48f938: 0xa44e002c  sh          $t6, 0x2C($v0)
    ctx->pc = 0x48f938u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x83C6ECu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6ECu, _value); } while (0);
    // 0x48f93c: 0xa440002e  sh          $zero, 0x2E($v0)
    ctx->pc = 0x48f93cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83C6EEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6EEu, _value); } while (0);
    // 0x48f940: 0xa4430030  sh          $v1, 0x30($v0)
    ctx->pc = 0x48f940u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x83C6F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6F0u, _value); } while (0);
    // 0x48f944: 0xa4400032  sh          $zero, 0x32($v0)
    ctx->pc = 0x48f944u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83C6F2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6F2u, _value); } while (0);
    // 0x48f948: 0xa4430034  sh          $v1, 0x34($v0)
    ctx->pc = 0x48f948u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x83C6F4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6F4u, _value); } while (0);
    // 0x48f94c: 0xa4400036  sh          $zero, 0x36($v0)
    ctx->pc = 0x48f94cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83C6F6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6F6u, _value); } while (0);
    // 0x48f950: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x48f950u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x83C6F8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6F8u, _value); } while (0);
    // 0x48f954: 0xa445003a  sh          $a1, 0x3A($v0)
    ctx->pc = 0x48f954u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x83C6FAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6FAu, _value); } while (0);
    // 0x48f958: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x48f958u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83C6FCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6FCu, _value); } while (0);
    // 0x48f95c: 0xa440003e  sh          $zero, 0x3E($v0)
    ctx->pc = 0x48f95cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83C6FEu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6FEu, _value); } while (0);
    // 0x48f960: 0xa4400040  sh          $zero, 0x40($v0)
    ctx->pc = 0x48f960u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83C700u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C700u, _value); } while (0);
    // 0x48f964: 0xa4400042  sh          $zero, 0x42($v0)
    ctx->pc = 0x48f964u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83C702u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C702u, _value); } while (0);
    // 0x48f968: 0xa4400044  sh          $zero, 0x44($v0)
    ctx->pc = 0x48f968u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83C704u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C704u, _value); } while (0);
    // 0x48f96c: 0xa4470046  sh          $a3, 0x46($v0)
    ctx->pc = 0x48f96cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x83C706u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C706u, _value); } while (0);
    // 0x48f970: 0xa4470048  sh          $a3, 0x48($v0)
    ctx->pc = 0x48f970u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x83C708u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C708u, _value); } while (0);
    // 0x48f974: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x48f974u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x83C6C6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83C6C6u, _value); } while (0);
    // 0x48f978: 0xa4473886  sh          $a3, 0x3886($v0)
    ctx->pc = 0x48f978u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x83FF46u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF46u, _value); } while (0);
    // 0x48f97c: 0xa4443848  sh          $a0, 0x3848($v0)
    ctx->pc = 0x48f97cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x83FF08u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF08u, _value); } while (0);
    // 0x48f980: 0xa448384a  sh          $t0, 0x384A($v0)
    ctx->pc = 0x48f980u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x83FF0Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF0Au, _value); } while (0);
    // 0x48f984: 0xa446385a  sh          $a2, 0x385A($v0)
    ctx->pc = 0x48f984u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x83FF1Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF1Au, _value); } while (0);
    // 0x48f988: 0xa4493860  sh          $t1, 0x3860($v0)
    ctx->pc = 0x48f988u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x83FF20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF20u, _value); } while (0);
    // 0x48f98c: 0xa44a3862  sh          $t2, 0x3862($v0)
    ctx->pc = 0x48f98cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x83FF22u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF22u, _value); } while (0);
    // 0x48f990: 0xa44b3864  sh          $t3, 0x3864($v0)
    ctx->pc = 0x48f990u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x83FF24u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF24u, _value); } while (0);
    // 0x48f994: 0xa44c3866  sh          $t4, 0x3866($v0)
    ctx->pc = 0x48f994u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x83FF26u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF26u, _value); } while (0);
    // 0x48f998: 0xa44d3868  sh          $t5, 0x3868($v0)
    ctx->pc = 0x48f998u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x83FF28u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF28u, _value); } while (0);
    // 0x48f99c: 0xa44e386a  sh          $t6, 0x386A($v0)
    ctx->pc = 0x48f99cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x83FF2Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF2Au, _value); } while (0);
    // 0x48f9a0: 0xa4433876  sh          $v1, 0x3876($v0)
    ctx->pc = 0x48f9a0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x83FF36u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF36u, _value); } while (0);
    // 0x48f9a4: 0xa4453878  sh          $a1, 0x3878($v0)
    ctx->pc = 0x48f9a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x83FF38u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF38u, _value); } while (0);
    // 0x48f9a8: 0xa4453846  sh          $a1, 0x3846($v0)
    ctx->pc = 0x48f9a8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x83FF06u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF06u, _value); } while (0);
    // 0x48f9ac: 0xa440384c  sh          $zero, 0x384C($v0)
    ctx->pc = 0x48f9acu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83FF0Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF0Cu, _value); } while (0);
    // 0x48f9b0: 0xa443384e  sh          $v1, 0x384E($v0)
    ctx->pc = 0x48f9b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x83FF0Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF0Eu, _value); } while (0);
    // 0x48f9b4: 0xa4403850  sh          $zero, 0x3850($v0)
    ctx->pc = 0x48f9b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83FF10u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF10u, _value); } while (0);
    // 0x48f9b8: 0xa4433852  sh          $v1, 0x3852($v0)
    ctx->pc = 0x48f9b8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x83FF12u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF12u, _value); } while (0);
    // 0x48f9bc: 0xa4403854  sh          $zero, 0x3854($v0)
    ctx->pc = 0x48f9bcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83FF14u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF14u, _value); } while (0);
    // 0x48f9c0: 0xa4433856  sh          $v1, 0x3856($v0)
    ctx->pc = 0x48f9c0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x83FF16u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF16u, _value); } while (0);
    // 0x48f9c4: 0xa4463858  sh          $a2, 0x3858($v0)
    ctx->pc = 0x48f9c4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x83FF18u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF18u, _value); } while (0);
    // 0x48f9c8: 0xa440385c  sh          $zero, 0x385C($v0)
    ctx->pc = 0x48f9c8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83FF1Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF1Cu, _value); } while (0);
    // 0x48f9cc: 0xa440385e  sh          $zero, 0x385E($v0)
    ctx->pc = 0x48f9ccu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83FF1Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF1Eu, _value); } while (0);
    // 0x48f9d0: 0xa440386c  sh          $zero, 0x386C($v0)
    ctx->pc = 0x48f9d0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83FF2Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF2Cu, _value); } while (0);
    // 0x48f9d4: 0xa443386e  sh          $v1, 0x386E($v0)
    ctx->pc = 0x48f9d4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x83FF2Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF2Eu, _value); } while (0);
    // 0x48f9d8: 0xa4403870  sh          $zero, 0x3870($v0)
    ctx->pc = 0x48f9d8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83FF30u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF30u, _value); } while (0);
    // 0x48f9dc: 0xa4433872  sh          $v1, 0x3872($v0)
    ctx->pc = 0x48f9dcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x83FF32u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF32u, _value); } while (0);
    // 0x48f9e0: 0xa4403874  sh          $zero, 0x3874($v0)
    ctx->pc = 0x48f9e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83FF34u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF34u, _value); } while (0);
    // 0x48f9e4: 0xa440387a  sh          $zero, 0x387A($v0)
    ctx->pc = 0x48f9e4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83FF3Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF3Au, _value); } while (0);
    // 0x48f9e8: 0xa440387c  sh          $zero, 0x387C($v0)
    ctx->pc = 0x48f9e8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83FF3Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF3Cu, _value); } while (0);
    // 0x48f9ec: 0xa440387e  sh          $zero, 0x387E($v0)
    ctx->pc = 0x48f9ecu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83FF3Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF3Eu, _value); } while (0);
    // 0x48f9f0: 0xa4403880  sh          $zero, 0x3880($v0)
    ctx->pc = 0x48f9f0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83FF40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF40u, _value); } while (0);
    // 0x48f9f4: 0xa4403882  sh          $zero, 0x3882($v0)
    ctx->pc = 0x48f9f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x83FF42u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x83FF42u, _value); } while (0);
    // 0x48f9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x48F9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F9F8u;
        // 0x48f9fc: 0xa4473884  sh          $a3, 0x3884($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 14468), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48FA00u;
}
