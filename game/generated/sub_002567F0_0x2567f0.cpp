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

// Function: sub_002567F0
// Address: 0x2567f0 - 0x256860
void sub_002567F0_0x2567f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002567F0_0x2567f0");
#endif

    switch (ctx->pc) {
        case 0x256838u: goto label_256838;
        case 0x256848u: goto label_256848;
        default: break;
    }

    ctx->pc = 0x2567f0u;

    // 0x2567f0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2567f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x2567f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2567f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2567f8: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x2567f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2567fc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2567fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x256800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x256800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x256804: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x256804u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x256808: 0x26101ef8  addiu       $s0, $s0, 0x1EF8
    ctx->pc = 0x256808u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7928));
    // 0x25680c: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x25680cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x256810: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x256810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x256814: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x256814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x256818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x256818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25681c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25681Cu;
    {
        const bool branch_taken_0x25681c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25681Cu;
        // 0x256820: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25681c) {
            ctx->pc = 0x256848u;
            goto label_256848;
        }
    }
    ctx->pc = 0x256824u;
    // 0x256824: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x256824u;
    {
        const bool branch_taken_0x256824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x256828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256824u;
        // 0x256828: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256824) {
            ctx->pc = 0x256848u;
            goto label_256848;
        }
    }
    ctx->pc = 0x25682Cu;
    // 0x25682c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x256830: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x256830u;
    SET_GPR_U32(ctx, 31, 0x256838u);
    ctx->pc = 0x256834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256830u;
    // 0x256834: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x256830u, 0x256838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256838u;
label_256838:
    // 0x256838: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x256838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25683c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x25683cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x256840: 0xc094e68  jal         func_2539A0
    ctx->pc = 0x256840u;
    SET_GPR_U32(ctx, 31, 0x256848u);
    ctx->pc = 0x256844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256840u;
    // 0x256844: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2539A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2539A0u, 0x256840u, 0x256848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256848u;
label_256848:
    // 0x256848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x256848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25684c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25684cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x256850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x256850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x256854: 0x3e00008  jr          $ra
    ctx->pc = 0x256854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256854u;
        // 0x256858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25685Cu;
    // 0x25685c: 0x0  nop
    ctx->pc = 0x25685cu;
    // NOP
    ctx->pc = 0x256860u;
}
