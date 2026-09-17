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

// Function: sub_0023DBE8
// Address: 0x23dbe8 - 0x23dc38
void sub_0023DBE8_0x23dbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DBE8_0x23dbe8");
#endif

    ctx->pc = 0x23dbe8u;

    // 0x23dbe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dbec: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x23dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x23dbf0: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x23DBF0u;
    {
        const bool branch_taken_0x23dbf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DBF0u;
        // 0x23dbf4: 0xa482003c  sh          $v0, 0x3C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dbf0) {
            ctx->pc = 0x23DC28u;
            goto label_23dc28;
        }
    }
    ctx->pc = 0x23DBF8u;
    // 0x23dbf8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x23dbf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23dbfc: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x23dbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x23dc00: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x23dc00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x23dc04: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x23dc04u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x23dc08: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x23dc08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x23dc0c: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x23dc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
    // 0x23dc10: 0xdca30018  ld          $v1, 0x18($a1)
    ctx->pc = 0x23dc10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23dc14: 0xfc830018  sd          $v1, 0x18($a0)
    ctx->pc = 0x23dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 3));
    // 0x23dc18: 0xdca20020  ld          $v0, 0x20($a1)
    ctx->pc = 0x23dc18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x23dc1c: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x23dc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
    // 0x23dc20: 0xdca30028  ld          $v1, 0x28($a1)
    ctx->pc = 0x23dc20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x23dc24: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x23dc24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
label_23dc28:
    // 0x23dc28: 0xac870034  sw          $a3, 0x34($a0)
    ctx->pc = 0x23dc28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 7));
    // 0x23dc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x23DC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23DC2Cu;
        // 0x23dc30: 0xac860030  sw          $a2, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DC34u;
    // 0x23dc34: 0x0  nop
    ctx->pc = 0x23dc34u;
    // NOP
    ctx->pc = 0x23dc38u;
}
