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

// Function: sub_004AD800
// Address: 0x4ad800 - 0x4ad8b0
void sub_004AD800_0x4ad800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD800_0x4ad800");
#endif

    switch (ctx->pc) {
        case 0x4ad830u: goto label_4ad830;
        default: break;
    }

    ctx->pc = 0x4ad800u;

    // 0x4ad800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ad804: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4ad804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4ad808: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4ad808u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4ad80c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4ad80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4ad810: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4ad810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4ad814: 0x26032426  addiu       $v1, $s0, 0x2426
    ctx->pc = 0x4ad814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 9254));
    // 0x4ad818: 0x26102302  addiu       $s0, $s0, 0x2302
    ctx->pc = 0x4ad818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8962));
    // 0x4ad81c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ad81cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72FAA6u));
    // 0x4ad820: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4ad820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad824: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4ad824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4ad828: 0xc1232fa  jal         func_48CBE8
    ctx->pc = 0x4AD828u;
    SET_GPR_U32(ctx, 31, 0x4AD830u);
    ctx->pc = 0x4AD82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD828u;
    // 0x4ad82c: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBE8u, 0x4AD828u, 0x4AD830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD830u;
label_4ad830:
    // 0x4ad830: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ad830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ad834: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4ad834u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad838: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x4ad838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4ad83c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4ad83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad840: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x4ad840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4ad844: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4ad844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4ad848: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4ad848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ad84c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x4ad84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ad850: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x4ad850u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ad854: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ad854u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ad858: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4ad858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad85c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ad85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ad860: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x4ad860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4ad864: 0xa482000a  sh          $v0, 0xA($a0)
    ctx->pc = 0x4ad864u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ad868: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4ad868u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad86c: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x4ad86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x4ad870: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4ad870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad874: 0xc3280b  movn        $a1, $a2, $v1
    ctx->pc = 0x4ad874u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x4ad878: 0x34a20400  ori         $v0, $a1, 0x400
    ctx->pc = 0x4ad878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x4ad87c: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x4ad87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ad880: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ad880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ad884: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ad884u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ad888: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x4ad888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ad88c: 0xa48501b4  sh          $a1, 0x1B4($a0)
    ctx->pc = 0x4ad88cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 436), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ad890: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4ad890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad894: 0xa44001b6  sh          $zero, 0x1B6($v0)
    ctx->pc = 0x4ad894u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad898: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4ad898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad89c: 0xa467000e  sh          $a3, 0xE($v1)
    ctx->pc = 0x4ad89cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x4ad8a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4ad8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD8A4u;
        // 0x4ad8a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD8ACu;
    // 0x4ad8ac: 0x0  nop
    ctx->pc = 0x4ad8acu;
    // NOP
    ctx->pc = 0x4ad8b0u;
}
