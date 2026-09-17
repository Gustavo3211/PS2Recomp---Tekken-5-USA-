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

// Function: sub_0022C010
// Address: 0x22c010 - 0x22c060
void sub_0022C010_0x22c010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C010_0x22c010");
#endif

    switch (ctx->pc) {
        case 0x22c054u: goto label_22c054;
        default: break;
    }

    ctx->pc = 0x22c010u;

    // 0x22c010: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x22c010u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c014: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22c014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c018: 0x3c070016  lui         $a3, 0x16
    ctx->pc = 0x22c018u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)22 << 16));
    // 0x22c01c: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x22c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x22c020: 0x24e79270  addiu       $a3, $a3, -0x6D90
    ctx->pc = 0x22c020u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939248));
    // 0x22c024: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x22c024u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c028: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x22c028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x22c02c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x22c02cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x22c030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c034: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x22c034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x22c038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c03c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x22c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x22c040: 0x81020010  lb          $v0, 0x10($t0)
    ctx->pc = 0x22c040u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x22c044: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C044u;
    {
        const bool branch_taken_0x22c044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C044u;
        // 0x22c048: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c044) {
            ctx->pc = 0x22C054u;
            goto label_22c054;
        }
    }
    ctx->pc = 0x22C04Cu;
    // 0x22c04c: 0xc08b0fa  jal         func_22C3E8
    ctx->pc = 0x22C04Cu;
    SET_GPR_U32(ctx, 31, 0x22C054u);
    ctx->pc = 0x22C3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C3E8u, 0x22C04Cu, 0x22C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C054u;
label_22c054:
    // 0x22c054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c058: 0x3e00008  jr          $ra
    ctx->pc = 0x22C058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C058u;
        // 0x22c05c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C060u;
}
