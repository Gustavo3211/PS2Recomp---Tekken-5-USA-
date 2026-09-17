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

// Function: sub_0031B168
// Address: 0x31b168 - 0x31b200
void sub_0031B168_0x31b168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031B168_0x31b168");
#endif

    switch (ctx->pc) {
        case 0x31b168u: goto label_31b168;
        case 0x31b16cu: goto label_31b16c;
        case 0x31b170u: goto label_31b170;
        case 0x31b174u: goto label_31b174;
        case 0x31b178u: goto label_31b178;
        case 0x31b17cu: goto label_31b17c;
        case 0x31b180u: goto label_31b180;
        case 0x31b184u: goto label_31b184;
        case 0x31b188u: goto label_31b188;
        case 0x31b18cu: goto label_31b18c;
        case 0x31b190u: goto label_31b190;
        case 0x31b194u: goto label_31b194;
        case 0x31b198u: goto label_31b198;
        case 0x31b19cu: goto label_31b19c;
        case 0x31b1a0u: goto label_31b1a0;
        case 0x31b1a4u: goto label_31b1a4;
        case 0x31b1a8u: goto label_31b1a8;
        case 0x31b1acu: goto label_31b1ac;
        case 0x31b1b0u: goto label_31b1b0;
        case 0x31b1b4u: goto label_31b1b4;
        case 0x31b1b8u: goto label_31b1b8;
        case 0x31b1bcu: goto label_31b1bc;
        case 0x31b1c0u: goto label_31b1c0;
        case 0x31b1c4u: goto label_31b1c4;
        case 0x31b1c8u: goto label_31b1c8;
        case 0x31b1ccu: goto label_31b1cc;
        case 0x31b1d0u: goto label_31b1d0;
        case 0x31b1d4u: goto label_31b1d4;
        case 0x31b1d8u: goto label_31b1d8;
        case 0x31b1dcu: goto label_31b1dc;
        case 0x31b1e0u: goto label_31b1e0;
        case 0x31b1e4u: goto label_31b1e4;
        case 0x31b1e8u: goto label_31b1e8;
        case 0x31b1ecu: goto label_31b1ec;
        case 0x31b1f0u: goto label_31b1f0;
        case 0x31b1f4u: goto label_31b1f4;
        case 0x31b1f8u: goto label_31b1f8;
        case 0x31b1fcu: goto label_31b1fc;
        default: break;
    }

    ctx->pc = 0x31b168u;

label_31b168:
    // 0x31b168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31b168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31b16c:
    // 0x31b16c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x31b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
label_31b170:
    // 0x31b170: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x31b170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_31b174:
    // 0x31b174: 0x24537880  addiu       $s3, $v0, 0x7880
    ctx->pc = 0x31b174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 30848));
label_31b178:
    // 0x31b178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31b178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31b17c:
    // 0x31b17c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x31b17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_31b180:
    // 0x31b180: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31b180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_31b184:
    // 0x31b184: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31b184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31b188:
    // 0x31b188: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31b188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_31b18c:
    // 0x31b18c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31b18cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31b190:
    // 0x31b190: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x31b190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_31b194:
    // 0x31b194: 0x267407ff  addiu       $s4, $s3, 0x7FF
    ctx->pc = 0x31b194u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 2047));
label_31b198:
    // 0x31b198: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x31b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_31b19c:
    // 0x31b19c: 0x0  nop
    ctx->pc = 0x31b19cu;
    // NOP
label_31b1a0:
    // 0x31b1a0: 0x1182c0  sll         $s0, $s1, 11
    ctx->pc = 0x31b1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
label_31b1a4:
    // 0x31b1a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31b1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31b1a8:
    // 0x31b1a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31b1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31b1ac:
    // 0x31b1ac: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x31b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_31b1b0:
    // 0x31b1b0: 0x2132821  addu        $a1, $s0, $s3
    ctx->pc = 0x31b1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_31b1b4:
    // 0x31b1b4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x31b1b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_31b1b8:
    // 0x31b1b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31b1bc:
    // 0x31b1bc: 0x40f809  jalr        $v0
label_31b1c0:
    if (ctx->pc == 0x31B1C0u) {
        ctx->pc = 0x31B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1BCu;
        // 0x31b1c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B1C4u;
        goto label_31b1c4;
    }
    ctx->pc = 0x31B1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31B1C4u);
        ctx->pc = 0x31B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1BCu;
        // 0x31b1c0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B1BCu, 0x31B1C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B1C4u;
label_31b1c4:
    // 0x31b1c4: 0x2132021  addu        $a0, $s0, $s3
    ctx->pc = 0x31b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_31b1c8:
    // 0x31b1c8: 0xc043f26  jal         func_10FC98
label_31b1cc:
    if (ctx->pc == 0x31B1CCu) {
        ctx->pc = 0x31B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1C8u;
        // 0x31b1cc: 0x2142821  addu        $a1, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B1D0u;
        goto label_31b1d0;
    }
    ctx->pc = 0x31B1C8u;
    SET_GPR_U32(ctx, 31, 0x31B1D0u);
    ctx->pc = 0x31B1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B1C8u;
    // 0x31b1cc: 0x2142821  addu        $a1, $s0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x31B1C8u, 0x31B1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B1D0u;
label_31b1d0:
    // 0x31b1d0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x31b1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_31b1d4:
    // 0x31b1d4: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_31b1d8:
    if (ctx->pc == 0x31B1D8u) {
        ctx->pc = 0x31B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1D4u;
        // 0x31b1d8: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B1DCu;
        goto label_31b1dc;
    }
    ctx->pc = 0x31B1D4u;
    {
        const bool branch_taken_0x31b1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b1d4) {
            ctx->pc = 0x31B1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B1D4u;
            // 0x31b1d8: 0x8e430050  lw          $v1, 0x50($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b1a0;
        }
    }
    ctx->pc = 0x31B1DCu;
label_31b1dc:
    // 0x31b1dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31b1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31b1e0:
    // 0x31b1e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31b1e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_31b1e4:
    // 0x31b1e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31b1e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31b1e8:
    // 0x31b1e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x31b1e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_31b1ec:
    // 0x31b1ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x31b1ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31b1f0:
    // 0x31b1f0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x31b1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_31b1f4:
    // 0x31b1f4: 0x3e00008  jr          $ra
label_31b1f8:
    if (ctx->pc == 0x31B1F8u) {
        ctx->pc = 0x31B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1F4u;
        // 0x31b1f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B1FCu;
        goto label_31b1fc;
    }
    ctx->pc = 0x31B1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1F4u;
        // 0x31b1f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31B1FCu;
label_31b1fc:
    // 0x31b1fc: 0x0  nop
    ctx->pc = 0x31b1fcu;
    // NOP
    ctx->pc = 0x31b200u;
}
