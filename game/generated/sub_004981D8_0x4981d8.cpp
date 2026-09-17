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

// Function: sub_004981D8
// Address: 0x4981d8 - 0x498260
void sub_004981D8_0x4981d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004981D8_0x4981d8");
#endif

    ctx->pc = 0x4981d8u;

    // 0x4981d8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4981d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4981dc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4981dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4981e0: 0x8462d690  lh          $v0, -0x2970($v1)
    ctx->pc = 0x4981e0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D690u));
    // 0x4981e4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4981e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4981e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4981e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4981ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4981ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4981f0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4981f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4981f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4981f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4981f8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4981f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4981fc: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x4981fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x498200: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x498200u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x498204: 0x1066000e  beq         $v1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x498204u;
    {
        const bool branch_taken_0x498204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x498208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498204u;
        // 0x498208: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x498204) {
            ctx->pc = 0x498240u;
            goto label_498240;
        }
    }
    ctx->pc = 0x49820Cu;
    // 0x49820c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x49820Cu;
    {
        const bool branch_taken_0x49820c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49820c) {
            ctx->pc = 0x498210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49820Cu;
            // 0x498210: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x498228u;
            goto label_498228;
        }
    }
    ctx->pc = 0x498214u;
    // 0x498214: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x498214u;
    {
        const bool branch_taken_0x498214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x498218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498214u;
        // 0x498218: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498214) {
            ctx->pc = 0x498238u;
            goto label_498238;
        }
    }
    ctx->pc = 0x49821Cu;
    // 0x49821c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x49821Cu;
    {
        const bool branch_taken_0x49821c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49821c) {
            ctx->pc = 0x498258u;
            goto label_498258;
        }
    }
    ctx->pc = 0x498224u;
    // 0x498224: 0x0  nop
    ctx->pc = 0x498224u;
    // NOP
label_498228:
    // 0x498228: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x498228u;
    {
        const bool branch_taken_0x498228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x49822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498228u;
        // 0x49822c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498228) {
            ctx->pc = 0x498250u;
            goto label_498250;
        }
    }
    ctx->pc = 0x498230u;
    // 0x498230: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x498230u;
    {
        const bool branch_taken_0x498230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x498230) {
            ctx->pc = 0x498258u;
            goto label_498258;
        }
    }
    ctx->pc = 0x498238u;
label_498238:
    // 0x498238: 0x812601c  j           func_498070
    ctx->pc = 0x498238u;
    ctx->pc = 0x49823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498238u;
    // 0x49823c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498070u, 0x498238u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x498240u;
label_498240:
    // 0x498240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x498240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498244: 0x8126058  j           func_498160
    ctx->pc = 0x498244u;
    ctx->pc = 0x498248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498244u;
    // 0x498248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x498160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x498160u, 0x498244u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49824Cu;
    // 0x49824c: 0x0  nop
    ctx->pc = 0x49824cu;
    // NOP
label_498250:
    // 0x498250: 0x8126068  j           func_4981A0
    ctx->pc = 0x498250u;
    ctx->pc = 0x498254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x498250u;
    // 0x498254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4981A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4981A0u, 0x498250u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x498258u;
label_498258:
    // 0x498258: 0x3e00008  jr          $ra
    ctx->pc = 0x498258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x498258u;
        // 0x49825c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x498258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x498260u;
}
