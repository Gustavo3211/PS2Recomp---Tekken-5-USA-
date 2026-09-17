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

// Function: sub_004DC4D8
// Address: 0x4dc4d8 - 0x4dc520
void sub_004DC4D8_0x4dc4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC4D8_0x4dc4d8");
#endif

    switch (ctx->pc) {
        case 0x4dc4d8u: goto label_4dc4d8;
        case 0x4dc4dcu: goto label_4dc4dc;
        case 0x4dc4e0u: goto label_4dc4e0;
        case 0x4dc4e4u: goto label_4dc4e4;
        case 0x4dc4e8u: goto label_4dc4e8;
        case 0x4dc4ecu: goto label_4dc4ec;
        case 0x4dc4f0u: goto label_4dc4f0;
        case 0x4dc4f4u: goto label_4dc4f4;
        case 0x4dc4f8u: goto label_4dc4f8;
        case 0x4dc4fcu: goto label_4dc4fc;
        case 0x4dc500u: goto label_4dc500;
        case 0x4dc504u: goto label_4dc504;
        case 0x4dc508u: goto label_4dc508;
        case 0x4dc50cu: goto label_4dc50c;
        case 0x4dc510u: goto label_4dc510;
        case 0x4dc514u: goto label_4dc514;
        case 0x4dc518u: goto label_4dc518;
        case 0x4dc51cu: goto label_4dc51c;
        default: break;
    }

    ctx->pc = 0x4dc4d8u;

label_4dc4d8:
    // 0x4dc4d8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x4dc4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_4dc4dc:
    // 0x4dc4dc: 0x3e00008  jr          $ra
label_4dc4e0:
    if (ctx->pc == 0x4DC4E0u) {
        ctx->pc = 0x4DC4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC4DCu;
        // 0x4dc4e0: 0xa48201bc  sh          $v0, 0x1BC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 444), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC4E4u;
        goto label_4dc4e4;
    }
    ctx->pc = 0x4DC4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC4DCu;
        // 0x4dc4e0: 0xa48201bc  sh          $v0, 0x1BC($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 444), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC4E4u;
label_4dc4e4:
    // 0x4dc4e4: 0x0  nop
    ctx->pc = 0x4dc4e4u;
    // NOP
label_4dc4e8:
    // 0x4dc4e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dc4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4dc4ec:
    // 0x4dc4ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dc4f0:
    // 0x4dc4f0: 0x948201bc  lhu         $v0, 0x1BC($a0)
    ctx->pc = 0x4dc4f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 444)));
label_4dc4f4:
    // 0x4dc4f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4dc4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4dc4f8:
    // 0x4dc4f8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4dc4f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4dc4fc:
    // 0x4dc4fc: 0x2c43000c  sltiu       $v1, $v0, 0xC
    ctx->pc = 0x4dc4fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_4dc500:
    // 0x4dc500: 0x50600037  beql        $v1, $zero, . + 4 + (0x37 << 2)
label_4dc504:
    if (ctx->pc == 0x4DC504u) {
        ctx->pc = 0x4DC504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC500u;
        // 0x4dc504: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC508u;
        goto label_4dc508;
    }
    ctx->pc = 0x4DC500u;
    {
        const bool branch_taken_0x4dc500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dc500) {
            ctx->pc = 0x4DC504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DC500u;
            // 0x4dc504: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DC5E0u;
            return;
        }
    }
    ctx->pc = 0x4DC508u;
label_4dc508:
    // 0x4dc508: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4dc508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4dc50c:
    // 0x4dc50c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4dc50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4dc510:
    // 0x4dc510: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4dc510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4dc514:
    // 0x4dc514: 0x8c63b940  lw          $v1, -0x46C0($v1)
    ctx->pc = 0x4dc514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949184)));
label_4dc518:
    // 0x4dc518: 0x600008  jr          $v1
label_4dc51c:
    if (ctx->pc == 0x4DC51Cu) {
        ctx->pc = 0x4DC520u;
        goto label_fallthrough_0x4dc518;
    }
    ctx->pc = 0x4DC518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC518u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4dc518:
    ctx->pc = 0x4DC520u;
}
