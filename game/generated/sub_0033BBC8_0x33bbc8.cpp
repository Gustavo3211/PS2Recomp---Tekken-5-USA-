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

// Function: sub_0033BBC8
// Address: 0x33bbc8 - 0x33bc00
void sub_0033BBC8_0x33bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BBC8_0x33bbc8");
#endif

    switch (ctx->pc) {
        case 0x33bbc8u: goto label_33bbc8;
        case 0x33bbccu: goto label_33bbcc;
        case 0x33bbd0u: goto label_33bbd0;
        case 0x33bbd4u: goto label_33bbd4;
        case 0x33bbd8u: goto label_33bbd8;
        case 0x33bbdcu: goto label_33bbdc;
        case 0x33bbe0u: goto label_33bbe0;
        case 0x33bbe4u: goto label_33bbe4;
        case 0x33bbe8u: goto label_33bbe8;
        case 0x33bbecu: goto label_33bbec;
        case 0x33bbf0u: goto label_33bbf0;
        case 0x33bbf4u: goto label_33bbf4;
        case 0x33bbf8u: goto label_33bbf8;
        case 0x33bbfcu: goto label_33bbfc;
        default: break;
    }

    ctx->pc = 0x33bbc8u;

label_33bbc8:
    // 0x33bbc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33bbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33bbcc:
    // 0x33bbcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33bbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33bbd0:
    // 0x33bbd0: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x33bbd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_33bbd4:
    // 0x33bbd4: 0x2442ffed  addiu       $v0, $v0, -0x13
    ctx->pc = 0x33bbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967277));
label_33bbd8:
    // 0x33bbd8: 0x2c43001a  sltiu       $v1, $v0, 0x1A
    ctx->pc = 0x33bbd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_33bbdc:
    // 0x33bbdc: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
label_33bbe0:
    if (ctx->pc == 0x33BBE0u) {
        ctx->pc = 0x33BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BBDCu;
        // 0x33bbe0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BBE4u;
        goto label_33bbe4;
    }
    ctx->pc = 0x33BBDCu;
    {
        const bool branch_taken_0x33bbdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bbdc) {
            ctx->pc = 0x33BBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BBDCu;
            // 0x33bbe0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BC54u;
            return;
        }
    }
    ctx->pc = 0x33BBE4u;
label_33bbe4:
    // 0x33bbe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33bbe8:
    // 0x33bbe8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_33bbec:
    // 0x33bbec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33bbf0:
    // 0x33bbf0: 0x8c633670  lw          $v1, 0x3670($v1)
    ctx->pc = 0x33bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13936)));
label_33bbf4:
    // 0x33bbf4: 0x600008  jr          $v1
label_33bbf8:
    if (ctx->pc == 0x33BBF8u) {
        ctx->pc = 0x33BBFCu;
        goto label_33bbfc;
    }
    ctx->pc = 0x33BBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BBF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33BBFCu;
label_33bbfc:
    // 0x33bbfc: 0x0  nop
    ctx->pc = 0x33bbfcu;
    // NOP
    ctx->pc = 0x33bc00u;
}
