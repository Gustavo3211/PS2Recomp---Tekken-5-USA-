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

// Function: sub_00334620
// Address: 0x334620 - 0x334698
void sub_00334620_0x334620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334620_0x334620");
#endif

    switch (ctx->pc) {
        case 0x334660u: goto label_334660;
        default: break;
    }

    ctx->pc = 0x334620u;

    // 0x334620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x334624: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x334624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x334628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x334628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33462c: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x33462cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x334630: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x334630u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u)); // MMIO: 0x10009000
    // 0x334634: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x334634u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u)); // MMIO: 0x10009000
    // 0x334638: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x334638u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x33463c: 0x4a00011  bltz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x33463Cu;
    {
        const bool branch_taken_0x33463c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x334640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33463Cu;
        // 0x334640: 0x30630007  andi        $v1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33463c) {
            ctx->pc = 0x334684u;
            goto label_334684;
        }
    }
    ctx->pc = 0x334644u;
    // 0x334644: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x334644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x334648: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x334648u;
    {
        const bool branch_taken_0x334648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x334648) {
            ctx->pc = 0x334658u;
            goto label_334658;
        }
    }
    ctx->pc = 0x334650u;
    // 0x334650: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x334650u;
    {
        const bool branch_taken_0x334650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x334654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334650u;
        // 0x334654: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334650) {
            ctx->pc = 0x334668u;
            goto label_334668;
        }
    }
    ctx->pc = 0x334658u;
label_334658:
    // 0x334658: 0xc0cd1d6  jal         func_334758
    ctx->pc = 0x334658u;
    SET_GPR_U32(ctx, 31, 0x334660u);
    ctx->pc = 0x334758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334758u, 0x334658u, 0x334660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334660u;
label_334660:
    // 0x334660: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x334660u;
    {
        const bool branch_taken_0x334660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x334660) {
            ctx->pc = 0x334684u;
            goto label_334684;
        }
    }
    ctx->pc = 0x334668u;
label_334668:
    // 0x334668: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x334668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x33466c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33466cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x334670: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x334670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x334674: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x334674u;
    {
        const bool branch_taken_0x334674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x334674) {
            ctx->pc = 0x334684u;
            goto label_334684;
        }
    }
    ctx->pc = 0x33467Cu;
    // 0x33467c: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x33467cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x334680: 0x8c429000  lw          $v0, -0x7000($v0)
    ctx->pc = 0x334680u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u)); // MMIO: 0x10009000
label_334684:
    // 0x334684: 0xf  sync
    ctx->pc = 0x334684u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x334688: 0x42000038  ei
    ctx->pc = 0x334688u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x33468c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33468cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334690: 0x3e00008  jr          $ra
    ctx->pc = 0x334690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334690u;
        // 0x334694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334698u;
}
