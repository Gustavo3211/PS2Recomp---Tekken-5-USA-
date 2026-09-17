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

// Function: sub_0049A388
// Address: 0x49a388 - 0x49a3c0
void sub_0049A388_0x49a388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A388_0x49a388");
#endif

    switch (ctx->pc) {
        case 0x49a3acu: goto label_49a3ac;
        default: break;
    }

    ctx->pc = 0x49a388u;

    // 0x49a388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49a388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49a38c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49a38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49a390: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49a390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a394: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x49a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x49a398: 0x8602014a  lh          $v0, 0x14A($s0)
    ctx->pc = 0x49a398u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 330)));
    // 0x49a39c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x49A39Cu;
    {
        const bool branch_taken_0x49a39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49a39c) {
            ctx->pc = 0x49A3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A39Cu;
            // 0x49a3a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A3B0u;
            goto label_49a3b0;
        }
    }
    ctx->pc = 0x49A3A4u;
    // 0x49a3a4: 0xc1268b2  jal         func_49A2C8
    ctx->pc = 0x49A3A4u;
    SET_GPR_U32(ctx, 31, 0x49A3ACu);
    ctx->pc = 0x49A2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A2C8u, 0x49A3A4u, 0x49A3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A3ACu;
label_49a3ac:
    // 0x49a3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49a3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a3b0:
    // 0x49a3b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49a3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a3b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49a3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49a3b8: 0x8128b10  j           func_4A2C40
    ctx->pc = 0x49A3B8u;
    ctx->pc = 0x49A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A3B8u;
    // 0x49a3bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C40u;
    sub_004A2C40_0x4a2c40(rdram, ctx, runtime); return;
    ctx->pc = 0x49A3C0u;
}
