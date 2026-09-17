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

// Function: sub_004A6F90
// Address: 0x4a6f90 - 0x4a70c0
void sub_004A6F90_0x4a6f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6F90_0x4a6f90");
#endif

    switch (ctx->pc) {
        case 0x4a6fd0u: goto label_4a6fd0;
        case 0x4a7058u: goto label_4a7058;
        default: break;
    }

    ctx->pc = 0x4a6f90u;

    // 0x4a6f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a6f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a6f94: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4a6f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a6f98: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a6f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a6f9c: 0x24d10014  addiu       $s1, $a2, 0x14
    ctx->pc = 0x4a6f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x4a6fa0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a6fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a6fa4: 0x24c3000c  addiu       $v1, $a2, 0xC
    ctx->pc = 0x4a6fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x4a6fa8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a6fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a6fac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4a6facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4a6fb0: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x4a6fb0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a6fb4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x4a6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4a6fb8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a6fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a6fbc: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x4a6fbcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a6fc0: 0x4a10007  bgez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A6FC0u;
    {
        const bool branch_taken_0x4a6fc0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4A6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6FC0u;
        // 0x4a6fc4: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6fc0) {
            ctx->pc = 0x4A6FE0u;
            goto label_4a6fe0;
        }
    }
    ctx->pc = 0x4A6FC8u;
    // 0x4a6fc8: 0xc123392  jal         func_48CE48
    ctx->pc = 0x4A6FC8u;
    SET_GPR_U32(ctx, 31, 0x4A6FD0u);
    ctx->pc = 0x48CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CE48u, 0x4A6FC8u, 0x4A6FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6FD0u;
label_4a6fd0:
    // 0x4a6fd0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a6fd4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x4A6FD4u;
    {
        const bool branch_taken_0x4a6fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A6FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6FD4u;
        // 0x4a6fd8: 0xa440f87e  sh          $zero, -0x782($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294965374), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6fd4) {
            ctx->pc = 0x4A70A8u;
            goto label_4a70a8;
        }
    }
    ctx->pc = 0x4A6FDCu;
    // 0x4a6fdc: 0x0  nop
    ctx->pc = 0x4a6fdcu;
    // NOP
label_4a6fe0:
    // 0x4a6fe0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a6fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a6fe4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4a6fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4a6fe8: 0x32c03  sra         $a1, $v1, 16
    ctx->pc = 0x4a6fe8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a6fec: 0x722025  or          $a0, $v1, $s2
    ctx->pc = 0x4a6fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4a6ff0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x4a6ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4a6ff4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a6ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a6ff8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x4a6ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a6ffc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a6ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a7000: 0x4410025  bgez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4A7000u;
    {
        const bool branch_taken_0x4a7000 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7000u;
        // 0x4a7004: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7000) {
            ctx->pc = 0x4A7098u;
            goto label_4a7098;
        }
    }
    ctx->pc = 0x4A7008u;
    // 0x4a7008: 0x94c2000e  lhu         $v0, 0xE($a2)
    ctx->pc = 0x4a7008u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x4a700c: 0x24d00010  addiu       $s0, $a2, 0x10
    ctx->pc = 0x4a700cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4a7010: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a7010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a7014: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7018: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a701c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4a701cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4a7020: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7024: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4a7024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4a7028: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4a7028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a702c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a702cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a7030: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4a7030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4a7034: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a7034u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a7038: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4a7038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4a703c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4a703cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a7040: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4a7040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4a7044: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4a7044u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a7048: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A7048u;
    {
        const bool branch_taken_0x4a7048 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a7048) {
            ctx->pc = 0x4A704Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A7048u;
            // 0x4a704c: 0x97a20000  lhu         $v0, 0x0($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A705Cu;
            goto label_4a705c;
        }
    }
    ctx->pc = 0x4A7050u;
    // 0x4a7050: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A7050u;
    SET_GPR_U32(ctx, 31, 0x4A7058u);
    ctx->pc = 0x4A7054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7050u;
    // 0x4a7054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A7050u, 0x4A7058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7058u;
label_4a7058:
    // 0x4a7058: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x4a7058u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_4a705c:
    // 0x4a705c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4a705cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a7060: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7064: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7068: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4a7068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4a706c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a706cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7070: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4a7070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4a7074: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4a7074u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a7078: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a7078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a707c: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x4a707cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x4a7080: 0xb21825  or          $v1, $a1, $s2
    ctx->pc = 0x4a7080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x4a7084: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7088: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a7088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a708c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A708Cu;
    {
        const bool branch_taken_0x4a708c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A708Cu;
        // 0x4a7090: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a708c) {
            ctx->pc = 0x4A709Cu;
            goto label_4a709c;
        }
    }
    ctx->pc = 0x4A7094u;
    // 0x4a7094: 0x0  nop
    ctx->pc = 0x4a7094u;
    // NOP
label_4a7098:
    // 0x4a7098: 0x24d00010  addiu       $s0, $a2, 0x10
    ctx->pc = 0x4a7098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_4a709c:
    // 0x4a709c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4a709cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a70a0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4a70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4a70a4: 0xa445f87e  sh          $a1, -0x782($v0)
    ctx->pc = 0x4a70a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F87Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F87Eu, _value); } while (0);
label_4a70a8:
    // 0x4a70a8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a70a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a70ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a70acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a70b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a70b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a70b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4a70b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a70b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A70B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A70BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A70B8u;
        // 0x4a70bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A70B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A70C0u;
}
