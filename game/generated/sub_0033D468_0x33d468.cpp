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

// Function: sub_0033D468
// Address: 0x33d468 - 0x33d4c8
void sub_0033D468_0x33d468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D468_0x33d468");
#endif

    switch (ctx->pc) {
        case 0x33d468u: goto label_33d468;
        case 0x33d46cu: goto label_33d46c;
        case 0x33d470u: goto label_33d470;
        case 0x33d474u: goto label_33d474;
        case 0x33d478u: goto label_33d478;
        case 0x33d47cu: goto label_33d47c;
        case 0x33d480u: goto label_33d480;
        case 0x33d484u: goto label_33d484;
        case 0x33d488u: goto label_33d488;
        case 0x33d48cu: goto label_33d48c;
        case 0x33d490u: goto label_33d490;
        case 0x33d494u: goto label_33d494;
        case 0x33d498u: goto label_33d498;
        case 0x33d49cu: goto label_33d49c;
        case 0x33d4a0u: goto label_33d4a0;
        case 0x33d4a4u: goto label_33d4a4;
        case 0x33d4a8u: goto label_33d4a8;
        case 0x33d4acu: goto label_33d4ac;
        case 0x33d4b0u: goto label_33d4b0;
        case 0x33d4b4u: goto label_33d4b4;
        case 0x33d4b8u: goto label_33d4b8;
        case 0x33d4bcu: goto label_33d4bc;
        case 0x33d4c0u: goto label_33d4c0;
        case 0x33d4c4u: goto label_33d4c4;
        default: break;
    }

    ctx->pc = 0x33d468u;

label_33d468:
    // 0x33d468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33d46c:
    // 0x33d46c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33d470:
    // 0x33d470: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33d470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33d474:
    // 0x33d474: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33d474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_33d478:
    // 0x33d478: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x33d478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33d47c:
    // 0x33d47c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x33d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_33d480:
    // 0x33d480: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x33d480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_33d484:
    // 0x33d484: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x33d484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_33d488:
    // 0x33d488: 0xc043f26  jal         func_10FC98
label_33d48c:
    if (ctx->pc == 0x33D48Cu) {
        ctx->pc = 0x33D48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D488u;
        // 0x33d48c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D490u;
        goto label_33d490;
    }
    ctx->pc = 0x33D488u;
    SET_GPR_U32(ctx, 31, 0x33D490u);
    ctx->pc = 0x33D48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D488u;
    // 0x33d48c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x33D488u, 0x33D490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D490u;
label_33d490:
    // 0x33d490: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x33d490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_33d494:
    // 0x33d494: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_33d498:
    if (ctx->pc == 0x33D498u) {
        ctx->pc = 0x33D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D494u;
        // 0x33d498: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D49Cu;
        goto label_33d49c;
    }
    ctx->pc = 0x33D494u;
    {
        const bool branch_taken_0x33d494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d494) {
            ctx->pc = 0x33D498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D494u;
            // 0x33d498: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D4B8u;
            goto label_33d4b8;
        }
    }
    ctx->pc = 0x33D49Cu;
label_33d49c:
    // 0x33d49c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33d4a0:
    // 0x33d4a0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x33d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_33d4a4:
    // 0x33d4a4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33d4a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33d4a8:
    // 0x33d4a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33d4ac:
    // 0x33d4ac: 0x60f809  jalr        $v1
label_33d4b0:
    if (ctx->pc == 0x33D4B0u) {
        ctx->pc = 0x33D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D4ACu;
        // 0x33d4b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D4B4u;
        goto label_33d4b4;
    }
    ctx->pc = 0x33D4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33D4B4u);
        ctx->pc = 0x33D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D4ACu;
        // 0x33d4b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D4ACu, 0x33D4B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D4B4u;
label_33d4b4:
    // 0x33d4b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d4b8:
    // 0x33d4b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d4bc:
    // 0x33d4bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33d4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33d4c0:
    // 0x33d4c0: 0x3e00008  jr          $ra
label_33d4c4:
    if (ctx->pc == 0x33D4C4u) {
        ctx->pc = 0x33D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D4C0u;
        // 0x33d4c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D4C8u;
        goto label_fallthrough_0x33d4c0;
    }
    ctx->pc = 0x33D4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D4C0u;
        // 0x33d4c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33d4c0:
    ctx->pc = 0x33D4C8u;
}
