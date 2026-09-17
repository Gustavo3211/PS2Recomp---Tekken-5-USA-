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

// Function: sub_004FE320
// Address: 0x4fe320 - 0x4fe3a8
void sub_004FE320_0x4fe320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FE320_0x4fe320");
#endif

    ctx->pc = 0x4fe320u;

    // 0x4fe320: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x4fe320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x4fe324: 0x24870002  addiu       $a3, $a0, 0x2
    ctx->pc = 0x4fe324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4fe328: 0x8c43a674  lw          $v1, -0x598C($v0)
    ctx->pc = 0x4fe328u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EA674u));
    // 0x4fe32c: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x4fe32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4fe330: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4FE330u;
    {
        const bool branch_taken_0x4fe330 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4FE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE330u;
        // 0x4fe334: 0x28650100  slti        $a1, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe330) {
            ctx->pc = 0x4FE348u;
            goto label_4fe348;
        }
    }
    ctx->pc = 0x4FE338u;
    // 0x4fe338: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4fe338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4fe33c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4FE33Cu;
    {
        const bool branch_taken_0x4fe33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FE340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE33Cu;
        // 0x4fe340: 0x65100b  movn        $v0, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe33c) {
            ctx->pc = 0x4FE34Cu;
            goto label_4fe34c;
        }
    }
    ctx->pc = 0x4FE344u;
    // 0x4fe344: 0x0  nop
    ctx->pc = 0x4fe344u;
    // NOP
label_4fe348:
    // 0x4fe348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4fe348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fe34c:
    // 0x4fe34c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4fe34cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4fe350: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x4fe350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x4fe354: 0x8c43a678  lw          $v1, -0x5988($v0)
    ctx->pc = 0x4fe354u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EA678u));
    // 0x4fe358: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4FE358u;
    {
        const bool branch_taken_0x4fe358 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4FE35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE358u;
        // 0x4fe35c: 0x28640100  slti        $a0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe358) {
            ctx->pc = 0x4FE370u;
            goto label_4fe370;
        }
    }
    ctx->pc = 0x4FE360u;
    // 0x4fe360: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4fe360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4fe364: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4FE364u;
    {
        const bool branch_taken_0x4fe364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FE368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE364u;
        // 0x4fe368: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe364) {
            ctx->pc = 0x4FE374u;
            goto label_4fe374;
        }
    }
    ctx->pc = 0x4FE36Cu;
    // 0x4fe36c: 0x0  nop
    ctx->pc = 0x4fe36cu;
    // NOP
label_4fe370:
    // 0x4fe370: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4fe370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fe374:
    // 0x4fe374: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4fe374u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4fe378: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x4fe378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x4fe37c: 0x8c43a67c  lw          $v1, -0x5984($v0)
    ctx->pc = 0x4fe37cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EA67Cu));
    // 0x4fe380: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4FE380u;
    {
        const bool branch_taken_0x4fe380 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4FE384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE380u;
        // 0x4fe384: 0x28640100  slti        $a0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe380) {
            ctx->pc = 0x4FE398u;
            goto label_4fe398;
        }
    }
    ctx->pc = 0x4FE388u;
    // 0x4fe388: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x4fe388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x4fe38c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4FE38Cu;
    {
        const bool branch_taken_0x4fe38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FE390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE38Cu;
        // 0x4fe390: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fe38c) {
            ctx->pc = 0x4FE39Cu;
            goto label_4fe39c;
        }
    }
    ctx->pc = 0x4FE394u;
    // 0x4fe394: 0x0  nop
    ctx->pc = 0x4fe394u;
    // NOP
label_4fe398:
    // 0x4fe398: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4fe398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fe39c:
    // 0x4fe39c: 0x3e00008  jr          $ra
    ctx->pc = 0x4FE39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE39Cu;
        // 0x4fe3a0: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FE39Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FE3A4u;
    // 0x4fe3a4: 0x0  nop
    ctx->pc = 0x4fe3a4u;
    // NOP
    ctx->pc = 0x4fe3a8u;
}
