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

// Function: sub_002143C0
// Address: 0x2143c0 - 0x214430
void sub_002143C0_0x2143c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002143C0_0x2143c0");
#endif

    switch (ctx->pc) {
        case 0x214414u: goto label_214414;
        default: break;
    }

    ctx->pc = 0x2143c0u;

    // 0x2143c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2143c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2143c4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2143c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2143c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2143c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2143cc: 0x24458858  addiu       $a1, $v0, -0x77A8
    ctx->pc = 0x2143ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x2143d0: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2143d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2143d4: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2143d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8884u));
    // 0x2143d8: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2143D8u;
    {
        const bool branch_taken_0x2143d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2143DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143D8u;
        // 0x2143dc: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143d8) {
            ctx->pc = 0x214400u;
            goto label_214400;
        }
    }
    ctx->pc = 0x2143E0u;
    // 0x2143e0: 0x8f82c8e8  lw          $v0, -0x3718($gp)
    ctx->pc = 0x2143e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953192)));
    // 0x2143e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2143e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2143e8: 0x284303e8  slti        $v1, $v0, 0x3E8
    ctx->pc = 0x2143e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x2143ec: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2143ECu;
    {
        const bool branch_taken_0x2143ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2143ec) {
            ctx->pc = 0x2143F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2143ECu;
            // 0x2143f0: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214420u;
            goto label_214420;
        }
    }
    ctx->pc = 0x2143F4u;
    // 0x2143f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2143F4u;
    {
        const bool branch_taken_0x2143f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2143F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2143F4u;
        // 0x2143f8: 0xaf82c8e8  sw          $v0, -0x3718($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294953192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2143f4) {
            ctx->pc = 0x214424u;
            goto label_214424;
        }
    }
    ctx->pc = 0x2143FCu;
    // 0x2143fc: 0x0  nop
    ctx->pc = 0x2143fcu;
    // NOP
label_214400:
    // 0x214400: 0xaca30030  sw          $v1, 0x30($a1)
    ctx->pc = 0x214400u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 3));
    // 0x214404: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214408: 0xaca4002c  sw          $a0, 0x2C($a1)
    ctx->pc = 0x214408u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
    // 0x21440c: 0xc082fd0  jal         func_20BF40
    ctx->pc = 0x21440Cu;
    SET_GPR_U32(ctx, 31, 0x214414u);
    ctx->pc = 0x214410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21440Cu;
    // 0x214410: 0xaf82c8e8  sw          $v0, -0x3718($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BF40u, 0x21440Cu, 0x214414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214414u;
label_214414:
    // 0x214414: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x214414u;
    {
        const bool branch_taken_0x214414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214414u;
        // 0x214418: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214414) {
            ctx->pc = 0x214428u;
            goto label_214428;
        }
    }
    ctx->pc = 0x21441Cu;
    // 0x21441c: 0x0  nop
    ctx->pc = 0x21441cu;
    // NOP
label_214420:
    // 0x214420: 0xaf82c8e8  sw          $v0, -0x3718($gp)
    ctx->pc = 0x214420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953192), GPR_U32(ctx, 2));
label_214424:
    // 0x214424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_214428:
    // 0x214428: 0x3e00008  jr          $ra
    ctx->pc = 0x214428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214428u;
        // 0x21442c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214430u;
}
