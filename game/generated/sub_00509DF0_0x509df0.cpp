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

// Function: sub_00509DF0
// Address: 0x509df0 - 0x509f70
void sub_00509DF0_0x509df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509DF0_0x509df0");
#endif

    switch (ctx->pc) {
        case 0x509eb8u: goto label_509eb8;
        case 0x509eccu: goto label_509ecc;
        case 0x509efcu: goto label_509efc;
        case 0x509f10u: goto label_509f10;
        default: break;
    }

    ctx->pc = 0x509df0u;

    // 0x509df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x509df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x509df4: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x509df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x509df8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x509df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x509dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x509dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509e00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x509e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x509e04: 0x3c11008f  lui         $s1, 0x8F
    ctx->pc = 0x509e04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)143 << 16));
    // 0x509e08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x509e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x509e0c: 0x3c12008f  lui         $s2, 0x8F
    ctx->pc = 0x509e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)143 << 16));
    // 0x509e10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x509e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x509e14: 0x3c13008f  lui         $s3, 0x8F
    ctx->pc = 0x509e14u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)143 << 16));
    // 0x509e18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x509e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x509e1c: 0x3c080090  lui         $t0, 0x90
    ctx->pc = 0x509e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)144 << 16));
    // 0x509e20: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x509e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x509e24: 0x24150010  addiu       $s5, $zero, 0x10
    ctx->pc = 0x509e24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x509e28: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x509e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x509e2c: 0x2616007c  addiu       $s6, $s0, 0x7C
    ctx->pc = 0x509e2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x509e30: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x509e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x509e34: 0x26170082  addiu       $s7, $s0, 0x82
    ctx->pc = 0x509e34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 130));
    // 0x509e38: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x509e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x509e3c: 0x261e0072  addiu       $fp, $s0, 0x72
    ctx->pc = 0x509e3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 114));
    // 0x509e40: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x509e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x509e44: 0x2463f0d0  addiu       $v1, $v1, -0xF30
    ctx->pc = 0x509e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963408));
    // 0x509e48: 0x2508f0d4  addiu       $t0, $t0, -0xF2C
    ctx->pc = 0x509e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963412));
    // 0x509e4c: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x509e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x509e50: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x509e50u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x8FF0D0u));
    // 0x509e54: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x509e54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x509e58: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x509e58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8FF0D4u));
    // 0x509e5c: 0x3c08008f  lui         $t0, 0x8F
    ctx->pc = 0x509e5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)143 << 16));
    // 0x509e60: 0x24c6c5e8  addiu       $a2, $a2, -0x3A18
    ctx->pc = 0x509e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952424));
    // 0x509e64: 0x2508c5ec  addiu       $t0, $t0, -0x3A14
    ctx->pc = 0x509e64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952428));
    // 0x509e68: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x509e68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EC5E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC5E8u, _value); } while (0);
    // 0x509e6c: 0x2402039c  addiu       $v0, $zero, 0x39C
    ctx->pc = 0x509e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 924));
    // 0x509e70: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x509e70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC5ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC5ECu, _value); } while (0);
    // 0x509e74: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x509e74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509e78: 0x2463c5f0  addiu       $v1, $v1, -0x3A10
    ctx->pc = 0x509e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952432));
    // 0x509e7c: 0x2631c5f6  addiu       $s1, $s1, -0x3A0A
    ctx->pc = 0x509e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952438));
    // 0x509e80: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x509e80u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC5F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8EC5F0u, _value); } while (0);
    // 0x509e84: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x509e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x509e88: 0x2474c5f4  addiu       $s4, $v1, -0x3A0C
    ctx->pc = 0x509e88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952436));
    // 0x509e8c: 0x2652c5f8  addiu       $s2, $s2, -0x3A08
    ctx->pc = 0x509e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952440));
    // 0x509e90: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x509e90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x509e94: 0x2673c5fa  addiu       $s3, $s3, -0x3A06
    ctx->pc = 0x509e94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952442));
    // 0x509e98: 0x2610008c  addiu       $s0, $s0, 0x8C
    ctx->pc = 0x509e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x509e9c: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x509e9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC5F4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8EC5F4u, _value); } while (0);
    // 0x509ea0: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x509ea0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x509ea4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x509ea4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC5F6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8EC5F6u, _value); } while (0);
    // 0x509ea8: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x509ea8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x509eac: 0xa6750000  sh          $s5, 0x0($s3)
    ctx->pc = 0x509eacu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x8EC5FAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8EC5FAu, _value); } while (0);
    // 0x509eb0: 0xc14274e  jal         func_509D38
    ctx->pc = 0x509EB0u;
    SET_GPR_U32(ctx, 31, 0x509EB8u);
    ctx->pc = 0x509EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509EB0u;
    // 0x509eb4: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509D38u, 0x509EB0u, 0x509EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509EB8u;
label_509eb8:
    // 0x509eb8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x509eb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x509ebc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x509ebcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509ec0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x509ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x509ec4: 0xc14274e  jal         func_509D38
    ctx->pc = 0x509EC4u;
    SET_GPR_U32(ctx, 31, 0x509ECCu);
    ctx->pc = 0x509EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509EC4u;
    // 0x509ec8: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509D38u, 0x509EC4u, 0x509ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509ECCu;
label_509ecc:
    // 0x509ecc: 0x2402039d  addiu       $v0, $zero, 0x39D
    ctx->pc = 0x509eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 925));
    // 0x509ed0: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x509ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x509ed4: 0x2484c5f0  addiu       $a0, $a0, -0x3A10
    ctx->pc = 0x509ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952432));
    // 0x509ed8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x509ed8u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC5F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8EC5F0u, _value); } while (0);
    // 0x509edc: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x509edcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x509ee0: 0xa6830000  sh          $v1, 0x0($s4)
    ctx->pc = 0x509ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x509ee4: 0x96e40000  lhu         $a0, 0x0($s7)
    ctx->pc = 0x509ee4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x509ee8: 0xa6550000  sh          $s5, 0x0($s2)
    ctx->pc = 0x509ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 21));
    // 0x509eec: 0xa6240000  sh          $a0, 0x0($s1)
    ctx->pc = 0x509eecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x509ef0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x509ef0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509ef4: 0xc14274e  jal         func_509D38
    ctx->pc = 0x509EF4u;
    SET_GPR_U32(ctx, 31, 0x509EFCu);
    ctx->pc = 0x509EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509EF4u;
    // 0x509ef8: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509D38u, 0x509EF4u, 0x509EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509EFCu;
label_509efc:
    // 0x509efc: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x509efcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x509f00: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x509f00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x509f04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x509f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x509f08: 0xc14274e  jal         func_509D38
    ctx->pc = 0x509F08u;
    SET_GPR_U32(ctx, 31, 0x509F10u);
    ctx->pc = 0x509F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509F08u;
    // 0x509f0c: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509D38u, 0x509F08u, 0x509F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509F10u;
label_509f10:
    // 0x509f10: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x509f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x509f14: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x509f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x509f18: 0x24a5c5e8  addiu       $a1, $a1, -0x3A18
    ctx->pc = 0x509f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952424));
    // 0x509f1c: 0x3c080090  lui         $t0, 0x90
    ctx->pc = 0x509f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)144 << 16));
    // 0x509f20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x509f20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC5E8u));
    // 0x509f24: 0x24c6c5ec  addiu       $a2, $a2, -0x3A14
    ctx->pc = 0x509f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952428));
    // 0x509f28: 0x2508f0d0  addiu       $t0, $t0, -0xF30
    ctx->pc = 0x509f28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963408));
    // 0x509f2c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x509f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC5ECu));
    // 0x509f30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x509f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x509f34: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x509f34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8FF0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D0u, _value); } while (0);
    // 0x509f38: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x509f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x509f3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x509f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x509f40: 0x2442f0d4  addiu       $v0, $v0, -0xF2C
    ctx->pc = 0x509f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963412));
    // 0x509f44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x509f44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x509f48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x509f48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x509f4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x509f4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x509f50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x509f50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x509f54: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x509f54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x509f58: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x509f58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x509f5c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x509f5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x509f60: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x509f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x509f64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x509f64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8FF0D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D4u, _value); } while (0);
    // 0x509f68: 0x3e00008  jr          $ra
    ctx->pc = 0x509F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509F68u;
        // 0x509f6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x509F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x509F70u;
}
