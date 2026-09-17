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

// Function: sub_0034AE10
// Address: 0x34ae10 - 0x34ae98
void sub_0034AE10_0x34ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034AE10_0x34ae10");
#endif

    switch (ctx->pc) {
        case 0x34ae60u: goto label_34ae60;
        case 0x34ae70u: goto label_34ae70;
        case 0x34ae80u: goto label_34ae80;
        default: break;
    }

    ctx->pc = 0x34ae10u;

    // 0x34ae10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34ae14: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34ae18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34ae1c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x34ae1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ae20: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x34ae20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x34ae24: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34AE24u;
    {
        const bool branch_taken_0x34ae24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE24u;
        // 0x34ae28: 0x28670003  slti        $a3, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae24) {
            ctx->pc = 0x34AE68u;
            goto label_34ae68;
        }
    }
    ctx->pc = 0x34AE2Cu;
    // 0x34ae2c: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x34AE2Cu;
    {
        const bool branch_taken_0x34ae2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE2Cu;
        // 0x34ae30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae2c) {
            ctx->pc = 0x34AE48u;
            goto label_34ae48;
        }
    }
    ctx->pc = 0x34AE34u;
    // 0x34ae34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34ae34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ae38: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x34AE38u;
    {
        const bool branch_taken_0x34ae38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE38u;
        // 0x34ae3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae38) {
            ctx->pc = 0x34AE58u;
            goto label_34ae58;
        }
    }
    ctx->pc = 0x34AE40u;
    // 0x34ae40: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x34AE40u;
    {
        const bool branch_taken_0x34ae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE40u;
        // 0x34ae44: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae40) {
            ctx->pc = 0x34AE8Cu;
            goto label_34ae8c;
        }
    }
    ctx->pc = 0x34AE48u;
label_34ae48:
    // 0x34ae48: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34AE48u;
    {
        const bool branch_taken_0x34ae48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x34AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE48u;
        // 0x34ae4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae48) {
            ctx->pc = 0x34AE78u;
            goto label_34ae78;
        }
    }
    ctx->pc = 0x34AE50u;
    // 0x34ae50: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34AE50u;
    {
        const bool branch_taken_0x34ae50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE50u;
        // 0x34ae54: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae50) {
            ctx->pc = 0x34AE8Cu;
            goto label_34ae8c;
        }
    }
    ctx->pc = 0x34AE58u;
label_34ae58:
    // 0x34ae58: 0xc0d1c1c  jal         func_347070
    ctx->pc = 0x34AE58u;
    SET_GPR_U32(ctx, 31, 0x34AE60u);
    ctx->pc = 0x347070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347070u, 0x34AE58u, 0x34AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE60u;
label_34ae60:
    // 0x34ae60: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34AE60u;
    {
        const bool branch_taken_0x34ae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE60u;
        // 0x34ae64: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae60) {
            ctx->pc = 0x34AE84u;
            goto label_34ae84;
        }
    }
    ctx->pc = 0x34AE68u;
label_34ae68:
    // 0x34ae68: 0xc0d1c92  jal         func_347248
    ctx->pc = 0x34AE68u;
    SET_GPR_U32(ctx, 31, 0x34AE70u);
    ctx->pc = 0x347248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347248u, 0x34AE68u, 0x34AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE70u;
label_34ae70:
    // 0x34ae70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34AE70u;
    {
        const bool branch_taken_0x34ae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE70u;
        // 0x34ae74: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae70) {
            ctx->pc = 0x34AE84u;
            goto label_34ae84;
        }
    }
    ctx->pc = 0x34AE78u;
label_34ae78:
    // 0x34ae78: 0xc0d1cc4  jal         func_347310
    ctx->pc = 0x34AE78u;
    SET_GPR_U32(ctx, 31, 0x34AE80u);
    ctx->pc = 0x347310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347310u, 0x34AE78u, 0x34AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE80u;
label_34ae80:
    // 0x34ae80: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x34ae80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34ae84:
    // 0x34ae84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34ae84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34ae88: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x34ae88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_34ae8c:
    // 0x34ae8c: 0x3e00008  jr          $ra
    ctx->pc = 0x34AE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE8Cu;
        // 0x34ae90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AE94u;
    // 0x34ae94: 0x0  nop
    ctx->pc = 0x34ae94u;
    // NOP
    ctx->pc = 0x34ae98u;
}
