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

// Function: sub_0049A430
// Address: 0x49a430 - 0x49a4c8
void sub_0049A430_0x49a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A430_0x49a430");
#endif

    switch (ctx->pc) {
        case 0x49a480u: goto label_49a480;
        case 0x49a490u: goto label_49a490;
        case 0x49a4a0u: goto label_49a4a0;
        default: break;
    }

    ctx->pc = 0x49a430u;

    // 0x49a430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49a430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49a434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49a438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49a438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49a43c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49a43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a440: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x49a440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x49a444: 0x8603000e  lh          $v1, 0xE($s0)
    ctx->pc = 0x49a444u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x49a448: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x49A448u;
    {
        const bool branch_taken_0x49a448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A448u;
        // 0x49a44c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a448) {
            ctx->pc = 0x49A488u;
            goto label_49a488;
        }
    }
    ctx->pc = 0x49A450u;
    // 0x49a450: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49A450u;
    {
        const bool branch_taken_0x49a450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A450u;
        // 0x49a454: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a450) {
            ctx->pc = 0x49A468u;
            goto label_49a468;
        }
    }
    ctx->pc = 0x49A458u;
    // 0x49a458: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x49A458u;
    {
        const bool branch_taken_0x49a458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a458) {
            ctx->pc = 0x49A478u;
            goto label_49a478;
        }
    }
    ctx->pc = 0x49A460u;
    // 0x49a460: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x49A460u;
    {
        const bool branch_taken_0x49a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A460u;
        // 0x49a464: 0x2604014a  addiu       $a0, $s0, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a460) {
            ctx->pc = 0x49A4A4u;
            goto label_49a4a4;
        }
    }
    ctx->pc = 0x49A468u;
label_49a468:
    // 0x49a468: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x49A468u;
    {
        const bool branch_taken_0x49a468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x49a468) {
            ctx->pc = 0x49A498u;
            goto label_49a498;
        }
    }
    ctx->pc = 0x49A470u;
    // 0x49a470: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x49A470u;
    {
        const bool branch_taken_0x49a470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A470u;
        // 0x49a474: 0x2604014a  addiu       $a0, $s0, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a470) {
            ctx->pc = 0x49A4A4u;
            goto label_49a4a4;
        }
    }
    ctx->pc = 0x49A478u;
label_49a478:
    // 0x49a478: 0xc1268d0  jal         func_49A340
    ctx->pc = 0x49A478u;
    SET_GPR_U32(ctx, 31, 0x49A480u);
    ctx->pc = 0x49A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A340u, 0x49A478u, 0x49A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A480u;
label_49a480:
    // 0x49a480: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x49A480u;
    {
        const bool branch_taken_0x49a480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A480u;
        // 0x49a484: 0x2604014a  addiu       $a0, $s0, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a480) {
            ctx->pc = 0x49A4A4u;
            goto label_49a4a4;
        }
    }
    ctx->pc = 0x49A488u;
label_49a488:
    // 0x49a488: 0xc1268e2  jal         func_49A388
    ctx->pc = 0x49A488u;
    SET_GPR_U32(ctx, 31, 0x49A490u);
    ctx->pc = 0x49A388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A388u, 0x49A488u, 0x49A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A490u;
label_49a490:
    // 0x49a490: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49A490u;
    {
        const bool branch_taken_0x49a490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A490u;
        // 0x49a494: 0x2604014a  addiu       $a0, $s0, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a490) {
            ctx->pc = 0x49A4A4u;
            goto label_49a4a4;
        }
    }
    ctx->pc = 0x49A498u;
label_49a498:
    // 0x49a498: 0xc1268f0  jal         func_49A3C0
    ctx->pc = 0x49A498u;
    SET_GPR_U32(ctx, 31, 0x49A4A0u);
    ctx->pc = 0x49A3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A3C0u, 0x49A498u, 0x49A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A4A0u;
label_49a4a0:
    // 0x49a4a0: 0x2604014a  addiu       $a0, $s0, 0x14A
    ctx->pc = 0x49a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
label_49a4a4:
    // 0x49a4a4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x49a4a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49a4a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49A4A8u;
    {
        const bool branch_taken_0x49a4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A4A8u;
        // 0x49a4ac: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a4a8) {
            ctx->pc = 0x49A4B8u;
            goto label_49a4b8;
        }
    }
    ctx->pc = 0x49A4B0u;
    // 0x49a4b0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x49a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x49a4b4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x49a4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_49a4b8:
    // 0x49a4b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49a4b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a4bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49a4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49a4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x49A4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A4C0u;
        // 0x49a4c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A4C8u;
}
