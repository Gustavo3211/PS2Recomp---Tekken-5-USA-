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

// Function: sub_00130150
// Address: 0x130150 - 0x1301d0
void sub_00130150_0x130150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130150_0x130150");
#endif

    switch (ctx->pc) {
        case 0x13017cu: goto label_13017c;
        case 0x1301c0u: goto label_1301c0;
        default: break;
    }

    ctx->pc = 0x130150u;

    // 0x130150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130154: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x130154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x130158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13015c: 0x24505568  addiu       $s0, $v0, 0x5568
    ctx->pc = 0x13015cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21864));
    // 0x130160: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x130160u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x155568u));
    // 0x130164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130168: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130168u;
    {
        const bool branch_taken_0x130168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130168u;
        // 0x13016c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130168) {
            ctx->pc = 0x13017Cu;
            goto label_13017c;
        }
    }
    ctx->pc = 0x130170u;
    // 0x130170: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x130170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x130174: 0xc0493d2  jal         func_124F48
    ctx->pc = 0x130174u;
    SET_GPR_U32(ctx, 31, 0x13017Cu);
    ctx->pc = 0x130178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130174u;
    // 0x130178: 0x24a5f2f0  addiu       $a1, $a1, -0xD10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F48u, 0x130174u, 0x13017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13017Cu;
label_13017c:
    // 0x13017c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13017cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130184: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x130184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130188: 0x3e00008  jr          $ra
    ctx->pc = 0x130188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13018Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130188u;
        // 0x13018c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130190u;
    // 0x130190: 0x3c030013  lui         $v1, 0x13
    ctx->pc = 0x130190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19 << 16));
    // 0x130194: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x130194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x130198: 0x24634c68  addiu       $v1, $v1, 0x4C68
    ctx->pc = 0x130198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19560));
    // 0x13019c: 0x3e00008  jr          $ra
    ctx->pc = 0x13019Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1301A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13019Cu;
        // 0x1301a0: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13019Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1301A4u;
    // 0x1301a4: 0x0  nop
    ctx->pc = 0x1301a4u;
    // NOP
    // 0x1301a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1301A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1301ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301A8u;
        // 0x1301ac: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1301A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1301B0u;
    // 0x1301b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1301b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1301b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1301b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1301b8: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x1301B8u;
    SET_GPR_U32(ctx, 31, 0x1301C0u);
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x1301B8u, 0x1301C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1301C0u;
label_1301c0:
    // 0x1301c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1301c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1301c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1301c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1301c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1301C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1301CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301C8u;
        // 0x1301cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1301C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1301D0u;
}
