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

// Function: sub_002CB530
// Address: 0x2cb530 - 0x2cb580
void sub_002CB530_0x2cb530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB530_0x2cb530");
#endif

    switch (ctx->pc) {
        case 0x2cb558u: goto label_2cb558;
        default: break;
    }

    ctx->pc = 0x2cb530u;

    // 0x2cb530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cb530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cb534: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x2cb534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2cb538: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb53c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb540: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cb540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cb544: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cb544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb548: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB548u;
    {
        const bool branch_taken_0x2cb548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CB54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB548u;
        // 0x2cb54c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb548) {
            ctx->pc = 0x2CB560u;
            goto label_2cb560;
        }
    }
    ctx->pc = 0x2CB550u;
    // 0x2cb550: 0xc092e94  jal         func_24BA50
    ctx->pc = 0x2CB550u;
    SET_GPR_U32(ctx, 31, 0x2CB558u);
    ctx->pc = 0x24BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA50u, 0x2CB550u, 0x2CB558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB558u;
label_2cb558:
    // 0x2cb558: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CB558u;
    {
        const bool branch_taken_0x2cb558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB558u;
        // 0x2cb55c: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb558) {
            ctx->pc = 0x2CB564u;
            goto label_2cb564;
        }
    }
    ctx->pc = 0x2CB560u;
label_2cb560:
    // 0x2cb560: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cb560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb564:
    // 0x2cb564: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2cb564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2cb568: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cb568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb56c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb570: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cb570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cb574: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB574u;
        // 0x2cb578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB57Cu;
    // 0x2cb57c: 0x0  nop
    ctx->pc = 0x2cb57cu;
    // NOP
    ctx->pc = 0x2cb580u;
}
