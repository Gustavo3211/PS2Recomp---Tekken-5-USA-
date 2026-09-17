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

// Function: sub_004E5DF8
// Address: 0x4e5df8 - 0x4e6240
void sub_004E5DF8_0x4e5df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5DF8_0x4e5df8");
#endif

    switch (ctx->pc) {
        case 0x4e5e2cu: goto label_4e5e2c;
        case 0x4e5e4cu: goto label_4e5e4c;
        case 0x4e5f34u: goto label_4e5f34;
        case 0x4e6028u: goto label_4e6028;
        case 0x4e6094u: goto label_4e6094;
        case 0x4e6100u: goto label_4e6100;
        case 0x4e611cu: goto label_4e611c;
        case 0x4e6144u: goto label_4e6144;
        case 0x4e614cu: goto label_4e614c;
        default: break;
    }

    ctx->pc = 0x4e5df8u;

    // 0x4e5df8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e5df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4e5dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e5dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e5e00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e5e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e5e04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e5e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5e08: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4e5e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4e5e0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e5e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e5e10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e5e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4e5e14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e5e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4e5e18: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e5e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4e5e1c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e5e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4e5e20: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4e5e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4e5e24: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4E5E24u;
    SET_GPR_U32(ctx, 31, 0x4E5E2Cu);
    ctx->pc = 0x4E5E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5E24u;
    // 0x4e5e28: 0x265001b4  addiu       $s0, $s2, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E5E24u, 0x4E5E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5E2Cu;
label_4e5e2c:
    // 0x4e5e2c: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e5e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e5e30: 0x247711cc  addiu       $s7, $v1, 0x11CC
    ctx->pc = 0x4e5e30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4556));
    // 0x4e5e34: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4e5e34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F11CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11CCu, _value); } while (0);
    // 0x4e5e38: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e5e38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e5e3c: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4E5E3Cu;
    {
        const bool branch_taken_0x4e5e3c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4e5e3c) {
            ctx->pc = 0x4E5E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5E3Cu;
            // 0x4e5e40: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E5E68u;
            goto label_4e5e68;
        }
    }
    ctx->pc = 0x4E5E44u;
    // 0x4e5e44: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E5E44u;
    SET_GPR_U32(ctx, 31, 0x4E5E4Cu);
    ctx->pc = 0x4E5E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5E44u;
    // 0x4e5e48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E5E44u, 0x4E5E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5E4Cu;
label_4e5e4c:
    // 0x4e5e4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e5e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e5e50: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x4e5e50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e5e54: 0xa64001b6  sh          $zero, 0x1B6($s2)
    ctx->pc = 0x4e5e54u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e5e58: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e5e58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e5e5c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e5e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e5e60: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4e5e60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e5e64: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e5e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4e5e68:
    // 0x4e5e68: 0x86430012  lh          $v1, 0x12($s2)
    ctx->pc = 0x4e5e68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x4e5e6c: 0x245411c0  addiu       $s4, $v0, 0x11C0
    ctx->pc = 0x4e5e6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4544));
    // 0x4e5e70: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e5e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e5e74: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4e5e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5e78: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4e5e78u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4e5e7c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4e5e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4e5e80: 0xac4011c4  sw          $zero, 0x11C4($v0)
    ctx->pc = 0x4e5e80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F11C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11C4u, _value); } while (0);
    // 0x4e5e84: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e5e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e5e88: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e5e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4e5e8c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4e5e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4e5e90: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e5e94: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4e5e94u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4e5e98: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e5e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4e5e9c: 0x249311c8  addiu       $s3, $a0, 0x11C8
    ctx->pc = 0x4e5e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 4552));
    // 0x4e5ea0: 0x247611bc  addiu       $s6, $v1, 0x11BC
    ctx->pc = 0x4e5ea0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4540));
    // 0x4e5ea4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4e5ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4e5ea8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4e5ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4e5eac: 0x8e680000  lw          $t0, 0x0($s3)
    ctx->pc = 0x4e5eacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e5eb0: 0x34633800  ori         $v1, $v1, 0x3800
    ctx->pc = 0x4e5eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14336);
    // 0x4e5eb4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e5eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e5eb8: 0x8eeb0000  lw          $t3, 0x0($s7)
    ctx->pc = 0x4e5eb8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4e5ebc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e5ebcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e5ec0: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e5ec0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e5ec4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e5ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e5ec8: 0x868a0000  lh          $t2, 0x0($s4)
    ctx->pc = 0x4e5ec8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e5ecc: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4e5eccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4e5ed0: 0x8ec90000  lw          $t1, 0x0($s6)
    ctx->pc = 0x4e5ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e5ed4: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4e5ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4e5ed8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4e5ed8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4e5edc: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4e5edcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4e5ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e5ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5ee4: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4e5ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4e5ee8: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4e5ee8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4e5eec: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x4e5eecu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e5ef0: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4e5ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5ef4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e5ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e5ef8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e5ef8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e5efc: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4e5efcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4e5f00: 0x1515025  or          $t2, $t2, $s1
    ctx->pc = 0x4e5f00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 17));
    // 0x4e5f04: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4e5f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4e5f08: 0xae850000  sw          $a1, 0x0($s4)
    ctx->pc = 0x4e5f08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
    // 0x4e5f0c: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x4e5f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x4e5f10: 0xaec90000  sw          $t1, 0x0($s6)
    ctx->pc = 0x4e5f10u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 9));
    // 0x4e5f14: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e5f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e5f18: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e5f18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e5f1c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4e5f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4e5f20: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4e5f20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4e5f24: 0x1074024  and         $t0, $t0, $a3
    ctx->pc = 0x4e5f24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x4e5f28: 0xae680000  sw          $t0, 0x0($s3)
    ctx->pc = 0x4e5f28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 8));
    // 0x4e5f2c: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4E5F2Cu;
    SET_GPR_U32(ctx, 31, 0x4E5F34u);
    ctx->pc = 0x4E5F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5F2Cu;
    // 0x4e5f30: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4E5F2Cu, 0x4E5F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5F34u;
label_4e5f34:
    // 0x4e5f34: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x4E5F34u;
    {
        const bool branch_taken_0x4e5f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e5f34) {
            ctx->pc = 0x4E5F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5F34u;
            // 0x4e5f38: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E5F70u;
            goto label_4e5f70;
        }
    }
    ctx->pc = 0x4E5F3Cu;
    // 0x4e5f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e5f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5f40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e5f40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5f44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e5f44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5f48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e5f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e5f4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e5f4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e5f50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e5f50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e5f54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e5f54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e5f58: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e5f58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5f5c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e5f5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e5f60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e5f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e5f64: 0x81398a2  j           func_4E6288
    ctx->pc = 0x4E5F64u;
    ctx->pc = 0x4E5F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5F64u;
    // 0x4e5f68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6288u, 0x4E5F64u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E5F6Cu;
    // 0x4e5f6c: 0x0  nop
    ctx->pc = 0x4e5f6cu;
    // NOP
label_4e5f70:
    // 0x4e5f70: 0x2455d680  addiu       $s5, $v0, -0x2980
    ctx->pc = 0x4e5f70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4e5f74: 0x86a32214  lh          $v1, 0x2214($s5)
    ctx->pc = 0x4e5f74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8724)));
    // 0x4e5f78: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4E5F78u;
    {
        const bool branch_taken_0x4e5f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E5F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5F78u;
        // 0x4e5f7c: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5f78) {
            ctx->pc = 0x4E5FB0u;
            goto label_4e5fb0;
        }
    }
    ctx->pc = 0x4E5F80u;
    // 0x4e5f80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e5f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5f84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e5f84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e5f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5f8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e5f8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e5f90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e5f90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e5f94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e5f94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e5f98: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e5f98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e5f9c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e5f9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e5fa0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e5fa0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e5fa4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e5fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e5fa8: 0x81398a8  j           func_4E62A0
    ctx->pc = 0x4E5FA8u;
    ctx->pc = 0x4E5FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E5FA8u;
    // 0x4e5fac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E62A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E62A0u, 0x4E5FA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E5FB0u;
label_4e5fb0:
    // 0x4e5fb0: 0x86a22300  lh          $v0, 0x2300($s5)
    ctx->pc = 0x4e5fb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8960)));
    // 0x4e5fb4: 0x249011b8  addiu       $s0, $a0, 0x11B8
    ctx->pc = 0x4e5fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4536));
    // 0x4e5fb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e5fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e5fbc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e5fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e5fc0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5fc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5fc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e5fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e5fcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e5fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e5fd0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e5fd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e5fd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4e5fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4e5fd8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e5fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e5fdc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e5fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e5fe0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e5fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e5fe4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e5fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e5fe8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4E5FE8u;
    {
        const bool branch_taken_0x4e5fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5FE8u;
        // 0x4e5fec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5fe8) {
            ctx->pc = 0x4E6020u;
            goto label_4e6020;
        }
    }
    ctx->pc = 0x4E5FF0u;
    // 0x4e5ff0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e5ff0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e5ff4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e5ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e5ff8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e5ff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e5ffc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e5ffcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e6000: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e6000u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e6004: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e6004u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e6008: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e6008u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e600c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e600cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e6010: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e6010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e6014: 0x81398a8  j           func_4E62A0
    ctx->pc = 0x4E6014u;
    ctx->pc = 0x4E6018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6014u;
    // 0x4e6018: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E62A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E62A0u, 0x4E6014u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E601Cu;
    // 0x4e601c: 0x0  nop
    ctx->pc = 0x4e601cu;
    // NOP
label_4e6020:
    // 0x4e6020: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E6020u;
    SET_GPR_U32(ctx, 31, 0x4E6028u);
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E6020u, 0x4E6028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6028u;
label_4e6028:
    // 0x4e6028: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e6028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e602c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e602cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e6030: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4e6030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e6034: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6038: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4e6038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e603c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e603cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6040: 0xd13024  and         $a2, $a2, $s1
    ctx->pc = 0x4e6040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x4e6044: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e6044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e6048: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e604c: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x4e604cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x4e6050: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e6050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e6054: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4e6054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x4e6058: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e6058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e605c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e605cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6060: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e6060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e6064: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6068: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e6068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e606c: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4e606cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x4e6070: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e6070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e6074: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e6074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e6078: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x4e6078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x4e607c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e607cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e6080: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x4e6080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x4e6084: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4e6084u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x4e6088: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4e6088u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4e608c: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4E608Cu;
    SET_GPR_U32(ctx, 31, 0x4E6094u);
    ctx->pc = 0x4E6090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E608Cu;
    // 0x4e6090: 0xae650000  sw          $a1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4E608Cu, 0x4E6094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6094u;
label_4e6094:
    // 0x4e6094: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e6094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e6098: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e6098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e609c: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4e609cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4e60a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e60a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e60a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e60a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e60a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e60a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e60ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e60acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e60b0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e60b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e60b4: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x4e60b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x4e60b8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e60b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e60bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e60bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e60c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e60c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e60c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e60c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e60c8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e60c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e60cc: 0x2442f000  addiu       $v0, $v0, -0x1000
    ctx->pc = 0x4e60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963200));
    // 0x4e60d0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e60d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e60d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e60d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e60d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e60d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e60dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e60dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e60e0: 0x84a40022  lh          $a0, 0x22($a1)
    ctx->pc = 0x4e60e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 34)));
    // 0x4e60e4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4e60e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e60e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4e60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4e60ec: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4e60ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4e60f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e60f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e60f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e60f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e60f8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4E60F8u;
    SET_GPR_U32(ctx, 31, 0x4E6100u);
    ctx->pc = 0x4E60FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E60F8u;
    // 0x4e60fc: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4E60F8u, 0x4E6100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6100u;
label_4e6100:
    // 0x4e6100: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4e6100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e6104: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4e6104u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4e6108: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4e6108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e610c: 0x86c20000  lh          $v0, 0x0($s6)
    ctx->pc = 0x4e610cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e6110: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4e6110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4e6114: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E6114u;
    SET_GPR_U32(ctx, 31, 0x4E611Cu);
    ctx->pc = 0x4E6118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6114u;
    // 0x4e6118: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E6114u, 0x4E611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E611Cu;
label_4e611c:
    // 0x4e611c: 0x86c50000  lh          $a1, 0x0($s6)
    ctx->pc = 0x4e611cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4e6120: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4e6120u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e6124: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4e6124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6128: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4e6128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e612c: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x4e612cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4e6130: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e6130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e6134: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4e6134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4e6138: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4e6138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4e613c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E613Cu;
    SET_GPR_U32(ctx, 31, 0x4E6144u);
    ctx->pc = 0x4E6140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E613Cu;
    // 0x4e6140: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E613Cu, 0x4E6144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6144u;
label_4e6144:
    // 0x4e6144: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E6144u;
    SET_GPR_U32(ctx, 31, 0x4E614Cu);
    ctx->pc = 0x4E6148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6144u;
    // 0x4e6148: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E6144u, 0x4E614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E614Cu;
label_4e614c:
    // 0x4e614c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4e614cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e6150: 0x8eea0000  lw          $t2, 0x0($s7)
    ctx->pc = 0x4e6150u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4e6154: 0x2409fe00  addiu       $t1, $zero, -0x200
    ctx->pc = 0x4e6154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x4e6158: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x4e6158u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e615c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e615cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4e6160: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4e6160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4e6164: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x4e6164u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4e6168: 0x86680000  lh          $t0, 0x0($s3)
    ctx->pc = 0x4e6168u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e616c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e616cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6170: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e6170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e6174: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4e6174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e6178: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e6178u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e617c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e6180: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4e6180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4e6184: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e6184u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4e6188: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4e6188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4e618c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e618cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e6190: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x4e6190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x4e6194: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4e6194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4e6198: 0xae860000  sw          $a2, 0x0($s4)
    ctx->pc = 0x4e6198u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 6));
    // 0x4e619c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x4e619cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4e61a0: 0x3469ffff  ori         $t1, $v1, 0xFFFF
    ctx->pc = 0x4e61a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e61a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e61a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e61a8: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x4e61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x4e61ac: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x4e61acu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4e61b0: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4e61b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4e61b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e61b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e61b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e61b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e61bc: 0xa6a52334  sh          $a1, 0x2334($s5)
    ctx->pc = 0x4e61bcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 9012), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e61c0: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4e61c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4e61c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e61c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e61c8: 0x1114025  or          $t0, $t0, $s1
    ctx->pc = 0x4e61c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 17));
    // 0x4e61cc: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4e61ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e61d0: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4e61d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4e61d4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e61d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4e61d8: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4e61d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4e61dc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4e61dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4e61e0: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4e61e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4e61e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4e61e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4e61e8: 0xa6a22338  sh          $v0, 0x2338($s5)
    ctx->pc = 0x4e61e8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e61ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e61ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e61f0: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x4e61f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4e61f4: 0xa6a6232c  sh          $a2, 0x232C($s5)
    ctx->pc = 0x4e61f4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 9004), (uint16_t)GPR_U32(ctx, 6));
    // 0x4e61f8: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4e61f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4e61fc: 0xa6ab2332  sh          $t3, 0x2332($s5)
    ctx->pc = 0x4e61fcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 9010), (uint16_t)GPR_U32(ctx, 11));
    // 0x4e6200: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4e6200u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4e6204: 0xaea02340  sw          $zero, 0x2340($s5)
    ctx->pc = 0x4e6204u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 9024), GPR_U32(ctx, 0));
    // 0x4e6208: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4e6208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4e620c: 0xaea02344  sw          $zero, 0x2344($s5)
    ctx->pc = 0x4e620cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 9028), GPR_U32(ctx, 0));
    // 0x4e6210: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4e6210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4e6214: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e6214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e6218: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x4e6218u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x4e621c: 0xaea02348  sw          $zero, 0x2348($s5)
    ctx->pc = 0x4e621cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 9032), GPR_U32(ctx, 0));
    // 0x4e6220: 0xae090000  sw          $t1, 0x0($s0)
    ctx->pc = 0x4e6220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 9));
    // 0x4e6224: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4e6224u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e6228: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4e6228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x4e622c: 0xa6a22336  sh          $v0, 0x2336($s5)
    ctx->pc = 0x4e622cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 9014), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e6230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e6230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e6234: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e6234u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4e6238: 0x813d6c2  j           func_4F5B08
    ctx->pc = 0x4E6238u;
    ctx->pc = 0x4E623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6238u;
    // 0x4e623c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    sub_004F5B08_0x4f5b08(rdram, ctx, runtime); return;
    ctx->pc = 0x4E6240u;
}
