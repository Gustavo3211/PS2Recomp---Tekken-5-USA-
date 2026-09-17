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

// Function: sub_0024BA50
// Address: 0x24ba50 - 0x24bac8
void sub_0024BA50_0x24ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BA50_0x24ba50");
#endif

    switch (ctx->pc) {
        case 0x24ba64u: goto label_24ba64;
        default: break;
    }

    ctx->pc = 0x24ba50u;

    // 0x24ba50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ba54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24ba58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24ba5c: 0xc086620  jal         func_219880
    ctx->pc = 0x24BA5Cu;
    SET_GPR_U32(ctx, 31, 0x24BA64u);
    ctx->pc = 0x24BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BA5Cu;
    // 0x24ba60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219880u, 0x24BA5Cu, 0x24BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BA64u;
label_24ba64:
    // 0x24ba64: 0x601000a  bgez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x24BA64u;
    {
        const bool branch_taken_0x24ba64 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x24BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA64u;
        // 0x24ba68: 0x8c4400ac  lw          $a0, 0xAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba64) {
            ctx->pc = 0x24BA90u;
            goto label_24ba90;
        }
    }
    ctx->pc = 0x24BA6Cu;
    // 0x24ba6c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x24ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x24ba70: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x24ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x24ba74: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x24ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x24ba78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24ba7c: 0x8c4219ec  lw          $v0, 0x19EC($v0)
    ctx->pc = 0x24ba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6636)));
    // 0x24ba80: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x24ba80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24ba84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24BA84u;
    {
        const bool branch_taken_0x24ba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BA84u;
        // 0x24ba88: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ba84) {
            ctx->pc = 0x24BA94u;
            goto label_24ba94;
        }
    }
    ctx->pc = 0x24BA8Cu;
    // 0x24ba8c: 0x0  nop
    ctx->pc = 0x24ba8cu;
    // NOP
label_24ba90:
    // 0x24ba90: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x24ba90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_24ba94:
    // 0x24ba94: 0x24a219e8  addiu       $v0, $a1, 0x19E8
    ctx->pc = 0x24ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 6632));
    // 0x24ba98: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x24ba98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x24ba9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24baa0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x24baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x24baa4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24baa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24baa8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24baac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x24baacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x24bab0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24bab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24bab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24bab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bab8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x24bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x24babc: 0x3e00008  jr          $ra
    ctx->pc = 0x24BABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BABCu;
        // 0x24bac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BAC4u;
    // 0x24bac4: 0x0  nop
    ctx->pc = 0x24bac4u;
    // NOP
    ctx->pc = 0x24bac8u;
}
