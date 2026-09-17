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

// Function: sub_00304640
// Address: 0x304640 - 0x3046b8
void sub_00304640_0x304640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304640_0x304640");
#endif

    switch (ctx->pc) {
        case 0x304664u: goto label_304664;
        case 0x304684u: goto label_304684;
        case 0x30469cu: goto label_30469c;
        default: break;
    }

    ctx->pc = 0x304640u;

    // 0x304640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x304640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x304648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30464c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30464cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x304650: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x304650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304654: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x304654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x304658: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x304658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x30465c: 0xc0c1210  jal         func_304840
    ctx->pc = 0x30465Cu;
    SET_GPR_U32(ctx, 31, 0x304664u);
    ctx->pc = 0x304660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30465Cu;
    // 0x304660: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304840u, 0x30465Cu, 0x304664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304664u;
label_304664:
    // 0x304664: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x304664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x304668: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x304668u;
    {
        const bool branch_taken_0x304668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x304668) {
            ctx->pc = 0x30466Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304668u;
            // 0x30466c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3046A0u;
            goto label_3046a0;
        }
    }
    ctx->pc = 0x304670u;
    // 0x304670: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x304670u;
    {
        const bool branch_taken_0x304670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x304674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304670u;
        // 0x304674: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304670) {
            ctx->pc = 0x304690u;
            goto label_304690;
        }
    }
    ctx->pc = 0x304678u;
    // 0x304678: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x304678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x30467c: 0xc0bf876  jal         func_2FE1D8
    ctx->pc = 0x30467Cu;
    SET_GPR_U32(ctx, 31, 0x304684u);
    ctx->pc = 0x304680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30467Cu;
    // 0x304680: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1D8u, 0x30467Cu, 0x304684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304684u;
label_304684:
    // 0x304684: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x304684u;
    {
        const bool branch_taken_0x304684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304684u;
        // 0x304688: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304684) {
            ctx->pc = 0x3046A0u;
            goto label_3046a0;
        }
    }
    ctx->pc = 0x30468Cu;
    // 0x30468c: 0x0  nop
    ctx->pc = 0x30468cu;
    // NOP
label_304690:
    // 0x304690: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x304690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x304694: 0xc0bf876  jal         func_2FE1D8
    ctx->pc = 0x304694u;
    SET_GPR_U32(ctx, 31, 0x30469Cu);
    ctx->pc = 0x304698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304694u;
    // 0x304698: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE1D8u, 0x304694u, 0x30469Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30469Cu;
label_30469c:
    // 0x30469c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30469cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3046a0:
    // 0x3046a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3046a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3046a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3046a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3046a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3046a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3046ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3046ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3046B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046ACu;
        // 0x3046b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3046ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3046B4u;
    // 0x3046b4: 0x0  nop
    ctx->pc = 0x3046b4u;
    // NOP
    ctx->pc = 0x3046b8u;
}
