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

// Function: sub_00239600
// Address: 0x239600 - 0x239658
void sub_00239600_0x239600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239600_0x239600");
#endif

    switch (ctx->pc) {
        case 0x239630u: goto label_239630;
        default: break;
    }

    ctx->pc = 0x239600u;

    // 0x239600: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x239600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x239604: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x239604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x239608: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x239608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23960c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23960cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239610: 0x2463d600  addiu       $v1, $v1, -0x2A00
    ctx->pc = 0x239610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956544));
    // 0x239614: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x239614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x239618: 0x24670002  addiu       $a3, $v1, 0x2
    ctx->pc = 0x239618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x23961c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x23961cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x239620: 0xa4600010  sh          $zero, 0x10($v1)
    ctx->pc = 0x239620u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x239624: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x239624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239628: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x239628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x23962c: 0x0  nop
    ctx->pc = 0x23962cu;
    // NOP
label_239630:
    // 0x239630: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x239630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x239634: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x239634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x239638: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x239638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x23963c: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x23963cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x239640: 0x0  nop
    ctx->pc = 0x239640u;
    // NOP
    // 0x239644: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x239644u;
    {
        const bool branch_taken_0x239644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239644u;
        // 0x239648: 0xa0460010  sb          $a2, 0x10($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239644) {
            ctx->pc = 0x239630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239630;
        }
    }
    ctx->pc = 0x23964Cu;
    // 0x23964c: 0x3e00008  jr          $ra
    ctx->pc = 0x23964Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23964Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239654u;
    // 0x239654: 0x0  nop
    ctx->pc = 0x239654u;
    // NOP
    ctx->pc = 0x239658u;
}
