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

// Function: sub_0048B390
// Address: 0x48b390 - 0x48b3d0
void sub_0048B390_0x48b390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B390_0x48b390");
#endif

    switch (ctx->pc) {
        case 0x48b390u: goto label_48b390;
        case 0x48b394u: goto label_48b394;
        case 0x48b398u: goto label_48b398;
        case 0x48b39cu: goto label_48b39c;
        case 0x48b3a0u: goto label_48b3a0;
        case 0x48b3a4u: goto label_48b3a4;
        case 0x48b3a8u: goto label_48b3a8;
        case 0x48b3acu: goto label_48b3ac;
        case 0x48b3b0u: goto label_48b3b0;
        case 0x48b3b4u: goto label_48b3b4;
        case 0x48b3b8u: goto label_48b3b8;
        case 0x48b3bcu: goto label_48b3bc;
        case 0x48b3c0u: goto label_48b3c0;
        case 0x48b3c4u: goto label_48b3c4;
        case 0x48b3c8u: goto label_48b3c8;
        case 0x48b3ccu: goto label_48b3cc;
        default: break;
    }

    ctx->pc = 0x48b390u;

label_48b390:
    // 0x48b390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48b390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_48b394:
    // 0x48b394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_48b398:
    // 0x48b398: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x48b398u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_48b39c:
    // 0x48b39c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x48b39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_48b3a0:
    // 0x48b3a0: 0x2602d680  addiu       $v0, $s0, -0x2980
    ctx->pc = 0x48b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
label_48b3a4:
    // 0x48b3a4: 0x84420096  lh          $v0, 0x96($v0)
    ctx->pc = 0x48b3a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 150)));
label_48b3a8:
    // 0x48b3a8: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x48b3a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_48b3ac:
    // 0x48b3ac: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
label_48b3b0:
    if (ctx->pc == 0x48B3B0u) {
        ctx->pc = 0x48B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B3ACu;
        // 0x48b3b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B3B4u;
        goto label_48b3b4;
    }
    ctx->pc = 0x48B3ACu;
    {
        const bool branch_taken_0x48b3ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48b3ac) {
            ctx->pc = 0x48B3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48B3ACu;
            // 0x48b3b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48B460u;
            return;
        }
    }
    ctx->pc = 0x48B3B4u;
label_48b3b4:
    // 0x48b3b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48b3b8:
    // 0x48b3b8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_48b3bc:
    // 0x48b3bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48b3c0:
    // 0x48b3c0: 0x8c639e90  lw          $v1, -0x6170($v1)
    ctx->pc = 0x48b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942352)));
label_48b3c4:
    // 0x48b3c4: 0x600008  jr          $v1
label_48b3c8:
    if (ctx->pc == 0x48B3C8u) {
        ctx->pc = 0x48B3CCu;
        goto label_48b3cc;
    }
    ctx->pc = 0x48B3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B3C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x48B3CCu;
label_48b3cc:
    // 0x48b3cc: 0x0  nop
    ctx->pc = 0x48b3ccu;
    // NOP
    ctx->pc = 0x48b3d0u;
}
