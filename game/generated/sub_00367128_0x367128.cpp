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

// Function: sub_00367128
// Address: 0x367128 - 0x367188
void sub_00367128_0x367128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367128_0x367128");
#endif

    ctx->pc = 0x367128u;

    // 0x367128: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x367128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36712c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x36712cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x367130: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x367130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x367134: 0x8c63a814  lw          $v1, -0x57EC($v1)
    ctx->pc = 0x367134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944788)));
    // 0x367138: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x367138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x36713c: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x36713cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x367140: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x367140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x367144: 0x28850040  slti        $a1, $a0, 0x40
    ctx->pc = 0x367144u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x367148: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x367148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36714c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x36714cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x367150: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x367150u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x367154: 0xac24a814  sw          $a0, -0x57EC($at)
    ctx->pc = 0x367154u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944788), GPR_U32(ctx, 4));
    // 0x367158: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x367158u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36715c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x36715cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x367160: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x367160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x367164: 0x3401a81c  ori         $at, $zero, 0xA81C
    ctx->pc = 0x367164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43036);
    // 0x367168: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x367168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x36716c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36716Cu;
    {
        const bool branch_taken_0x36716c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x36716c) {
            ctx->pc = 0x367180u;
            goto label_367180;
        }
    }
    ctx->pc = 0x367174u;
    // 0x367174: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x367174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x367178: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x367178u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x36717c: 0xac20a814  sw          $zero, -0x57EC($at)
    ctx->pc = 0x36717cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294944788), GPR_U32(ctx, 0));
label_367180:
    // 0x367180: 0x3e00008  jr          $ra
    ctx->pc = 0x367180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367188u;
}
