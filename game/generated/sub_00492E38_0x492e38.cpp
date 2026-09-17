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

// Function: sub_00492E38
// Address: 0x492e38 - 0x493048
void sub_00492E38_0x492e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492E38_0x492e38");
#endif

    switch (ctx->pc) {
        case 0x492ed8u: goto label_492ed8;
        case 0x492f78u: goto label_492f78;
        case 0x492fd0u: goto label_492fd0;
        case 0x492fe0u: goto label_492fe0;
        case 0x493014u: goto label_493014;
        default: break;
    }

    ctx->pc = 0x492e38u;

    // 0x492e38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x492e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x492e3c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x492e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x492e40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x492e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x492e44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x492e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x492e48: 0x2412ff00  addiu       $s2, $zero, -0x100
    ctx->pc = 0x492e48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x492e4c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x492e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x492e50: 0x3c130073  lui         $s3, 0x73
    ctx->pc = 0x492e50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
    // 0x492e54: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x492e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x492e58: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x492e58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492e5c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x492e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x492e60: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x492e60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492e64: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x492e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x492e68: 0x2671d680  addiu       $s1, $s3, -0x2980
    ctx->pc = 0x492e68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x492e6c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x492e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x492e70: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x492e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x492e74: 0x86230024  lh          $v1, 0x24($s1)
    ctx->pc = 0x492e74u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x72D6A4u));
    // 0x492e78: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x492e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x492e7c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x492e7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x492e80: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x492e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x492e84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x492e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x492e88: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x492e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x492e8c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x492e8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x492e90: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x492e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x492e94: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x492e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x492e98: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x492e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x492e9c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x492e9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x492ea0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x492EA0u;
    {
        const bool branch_taken_0x492ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492EA0u;
        // 0x492ea4: 0x86900000  lh          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492ea0) {
            ctx->pc = 0x492F04u;
            goto label_492f04;
        }
    }
    ctx->pc = 0x492EA8u;
    // 0x492ea8: 0x96230022  lhu         $v1, 0x22($s1)
    ctx->pc = 0x492ea8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x492eac: 0x360400ff  ori         $a0, $s0, 0xFF
    ctx->pc = 0x492eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)255);
    // 0x492eb0: 0x2122824  and         $a1, $s0, $s2
    ctx->pc = 0x492eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & GPR_U64(ctx, 18));
    // 0x492eb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x492eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492eb8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x492eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x492ebc: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x492ebcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492ec0: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x492ec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492ec4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x492EC4u;
    {
        const bool branch_taken_0x492ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492EC4u;
        // 0x492ec8: 0xa2800a  movz        $s0, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492ec4) {
            ctx->pc = 0x492EE0u;
            goto label_492ee0;
        }
    }
    ctx->pc = 0x492ECCu;
    // 0x492ecc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x492eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492ed0: 0xc13e4ca  jal         func_4F9328
    ctx->pc = 0x492ED0u;
    SET_GPR_U32(ctx, 31, 0x492ED8u);
    ctx->pc = 0x492ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492ED0u;
    // 0x492ed4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9328u, 0x492ED0u, 0x492ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492ED8u;
label_492ed8:
    // 0x492ed8: 0x97a30000  lhu         $v1, 0x0($sp)
    ctx->pc = 0x492ed8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492edc: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x492edcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_492ee0:
    // 0x492ee0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x492EE0u;
    {
        const bool branch_taken_0x492ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492EE0u;
        // 0x492ee4: 0xa6230020  sh          $v1, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492ee0) {
            ctx->pc = 0x492EF8u;
            goto label_492ef8;
        }
    }
    ctx->pc = 0x492EE8u;
    // 0x492ee8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x492ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x492eec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x492EECu;
    {
        const bool branch_taken_0x492eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492EECu;
        // 0x492ef0: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x492eec) {
            ctx->pc = 0x492F00u;
            goto label_492f00;
        }
    }
    ctx->pc = 0x492EF4u;
    // 0x492ef4: 0x0  nop
    ctx->pc = 0x492ef4u;
    // NOP
label_492ef8:
    // 0x492ef8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x492ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x492efc: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x492efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_492f00:
    // 0x492f00: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x492f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_492f04:
    // 0x492f04: 0x27b2000c  addiu       $s2, $sp, 0xC
    ctx->pc = 0x492f04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x492f08: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x492f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x492f0c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x492f0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x492f10: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x492f10u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x492f14: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x492f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x492f18: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x492f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x492f1c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x492f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x492f20: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x492f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x492f24: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x492f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x492f28: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x492f28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x492f2c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x492f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x492f30: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x492f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492f34: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x492f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x492f38: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x492f38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x492f3c: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x492f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x492f40: 0x3605ffff  ori         $a1, $s0, 0xFFFF
    ctx->pc = 0x492f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x492f44: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x492f44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x492f48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x492f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x492f4c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x492f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x492f50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x492f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x492f54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x492f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x492f58: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x492f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x492f5c: 0xa38024  and         $s0, $a1, $v1
    ctx->pc = 0x492f5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x492f60: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x492f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x492f64: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x492f64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x492f68: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x492F68u;
    {
        const bool branch_taken_0x492f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x492f68) {
            ctx->pc = 0x492F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492F68u;
            // 0x492f6c: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x493008u;
            goto label_493008;
        }
    }
    ctx->pc = 0x492F70u;
    // 0x492f70: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x492F70u;
    SET_GPR_U32(ctx, 31, 0x492F78u);
    ctx->pc = 0x492F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492F70u;
    // 0x492f74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x492F70u, 0x492F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492F78u;
label_492f78:
    // 0x492f78: 0x2668d680  addiu       $t0, $s3, -0x2980
    ctx->pc = 0x492f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x492f7c: 0x85060024  lh          $a2, 0x24($t0)
    ctx->pc = 0x492f7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x492f80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x492f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492f84: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x492f84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492f88: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x492f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x492f8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x492f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492f90: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x492f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x492f94: 0x8507002a  lh          $a3, 0x2A($t0)
    ctx->pc = 0x492f94u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 42)));
    // 0x492f98: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x492f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x492f9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x492f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x492fa0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x492fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x492fa4: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x492fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x492fa8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x492fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x492fac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x492facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x492fb0: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x492fb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492fb4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x492fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x492fb8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x492fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x492fbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x492fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x492fc0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x492fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x492fc4: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x492fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492fc8: 0xc13e4ca  jal         func_4F9328
    ctx->pc = 0x492FC8u;
    SET_GPR_U32(ctx, 31, 0x492FD0u);
    ctx->pc = 0x492FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492FC8u;
    // 0x492fcc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9328u, 0x492FC8u, 0x492FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492FD0u;
label_492fd0:
    // 0x492fd0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x492fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492fd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x492fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492fd8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x492FD8u;
    SET_GPR_U32(ctx, 31, 0x492FE0u);
    ctx->pc = 0x492FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492FD8u;
    // 0x492fdc: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x492FD8u, 0x492FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492FE0u;
label_492fe0:
    // 0x492fe0: 0x87a2000c  lh          $v0, 0xC($sp)
    ctx->pc = 0x492fe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x492fe4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x492FE4u;
    {
        const bool branch_taken_0x492fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492FE4u;
        // 0x492fe8: 0x87a20000  lh          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492fe4) {
            ctx->pc = 0x493004u;
            goto label_493004;
        }
    }
    ctx->pc = 0x492FECu;
    // 0x492fec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x492fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492ff0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x492ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x492ff4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x492ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x492ff8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x492ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x492ffc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x492ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x493000: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x493000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_493004:
    // 0x493004: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x493004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_493008:
    // 0x493008: 0x2663d680  addiu       $v1, $s3, -0x2980
    ctx->pc = 0x493008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x49300c: 0xc12483e  jal         func_4920F8
    ctx->pc = 0x49300Cu;
    SET_GPR_U32(ctx, 31, 0x493014u);
    ctx->pc = 0x493010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49300Cu;
    // 0x493010: 0xa4620028  sh          $v0, 0x28($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 40), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4920F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4920F8u, 0x49300Cu, 0x493014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493014u;
label_493014:
    // 0x493014: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x493014u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x493018: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x493018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49301c: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x49301cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x493020: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x493020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x493024: 0xa6900000  sh          $s0, 0x0($s4)
    ctx->pc = 0x493024u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 16));
    // 0x493028: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x493028u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49302c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x49302cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x493030: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x493030u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x493034: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x493034u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x493038: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x493038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49303c: 0x3e00008  jr          $ra
    ctx->pc = 0x49303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x493040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49303Cu;
        // 0x493040: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49303Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x493044u;
    // 0x493044: 0x0  nop
    ctx->pc = 0x493044u;
    // NOP
    ctx->pc = 0x493048u;
}
