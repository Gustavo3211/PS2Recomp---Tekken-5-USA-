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

// Function: sub_004A32F8
// Address: 0x4a32f8 - 0x4a3338
void sub_004A32F8_0x4a32f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A32F8_0x4a32f8");
#endif

    switch (ctx->pc) {
        case 0x4a3308u: goto label_4a3308;
        case 0x4a3320u: goto label_4a3320;
        default: break;
    }

    ctx->pc = 0x4a32f8u;

    // 0x4a32f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a32f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a32fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a32fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a3300: 0xc124620  jal         func_491880
    ctx->pc = 0x4A3300u;
    SET_GPR_U32(ctx, 31, 0x4A3308u);
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x4A3300u, 0x4A3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3308u;
label_4a3308:
    // 0x4a3308: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a3308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a330c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4a330cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4a3310: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x4a3310u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4a3314: 0xa423e820  sh          $v1, -0x17E0($at)
    ctx->pc = 0x4a3314u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961184), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a3318: 0xc124910  jal         func_492440
    ctx->pc = 0x4A3318u;
    SET_GPR_U32(ctx, 31, 0x4A3320u);
    ctx->pc = 0x4A331Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3318u;
    // 0x4a331c: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4A3318u, 0x4A3320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3320u;
label_4a3320:
    // 0x4a3320: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x4a3320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x4a3324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a3324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3328: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4a3328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a332c: 0x8123bd2  j           func_48EF48
    ctx->pc = 0x4A332Cu;
    ctx->pc = 0x4A3330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A332Cu;
    // 0x4a3330: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    sub_0048EF48_0x48ef48(rdram, ctx, runtime); return;
    ctx->pc = 0x4A3334u;
    // 0x4a3334: 0x0  nop
    ctx->pc = 0x4a3334u;
    // NOP
    ctx->pc = 0x4a3338u;
}
