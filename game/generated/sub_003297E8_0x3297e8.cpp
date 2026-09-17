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

// Function: sub_003297E8
// Address: 0x3297e8 - 0x329860
void sub_003297E8_0x3297e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003297E8_0x3297e8");
#endif

    switch (ctx->pc) {
        case 0x329824u: goto label_329824;
        case 0x329848u: goto label_329848;
        default: break;
    }

    ctx->pc = 0x3297e8u;

    // 0x3297e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3297e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3297ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3297ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3297f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3297f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3297f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3297f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3297f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3297f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3297fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3297fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x329800: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x329800u;
    {
        const bool branch_taken_0x329800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329800u;
        // 0x329804: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329800) {
            ctx->pc = 0x329828u;
            goto label_329828;
        }
    }
    ctx->pc = 0x329808u;
    // 0x329808: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x329808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32980c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x32980cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x329810: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x329810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x329814: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x329814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x329818: 0x8c845a80  lw          $a0, 0x5A80($a0)
    ctx->pc = 0x329818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23168)));
    // 0x32981c: 0xc0ca74e  jal         func_329D38
    ctx->pc = 0x32981Cu;
    SET_GPR_U32(ctx, 31, 0x329824u);
    ctx->pc = 0x329820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32981Cu;
    // 0x329820: 0x8e050054  lw          $a1, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329D38u, 0x32981Cu, 0x329824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329824u;
label_329824:
    // 0x329824: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x329824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_329828:
    // 0x329828: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x329828u;
    {
        const bool branch_taken_0x329828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329828u;
        // 0x32982c: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329828) {
            ctx->pc = 0x32984Cu;
            goto label_32984c;
        }
    }
    ctx->pc = 0x329830u;
    // 0x329830: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x329830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x329834: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x329834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x329838: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x329838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x32983c: 0x8c845a80  lw          $a0, 0x5A80($a0)
    ctx->pc = 0x32983cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23168)));
    // 0x329840: 0xc0ca706  jal         func_329C18
    ctx->pc = 0x329840u;
    SET_GPR_U32(ctx, 31, 0x329848u);
    ctx->pc = 0x329844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329840u;
    // 0x329844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329C18u, 0x329840u, 0x329848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329848u;
label_329848:
    // 0x329848: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x329848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_32984c:
    // 0x32984c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32984cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329850: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329854: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329858: 0x3e00008  jr          $ra
    ctx->pc = 0x329858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329858u;
        // 0x32985c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329860u;
}
