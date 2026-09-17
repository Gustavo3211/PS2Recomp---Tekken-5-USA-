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

// Function: sub_0036A800
// Address: 0x36a800 - 0x36a850
void sub_0036A800_0x36a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A800_0x36a800");
#endif

    switch (ctx->pc) {
        case 0x36a824u: goto label_36a824;
        case 0x36a83cu: goto label_36a83c;
        default: break;
    }

    ctx->pc = 0x36a800u;

    // 0x36a800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a804: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36a804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36a808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a80c: 0x24506d38  addiu       $s0, $v0, 0x6D38
    ctx->pc = 0x36a80cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27960));
    // 0x36a810: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a810u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6D38u));
    // 0x36a814: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36A814u;
    {
        const bool branch_taken_0x36a814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A814u;
        // 0x36a818: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a814) {
            ctx->pc = 0x36A83Cu;
            goto label_36a83c;
        }
    }
    ctx->pc = 0x36A81Cu;
    // 0x36a81c: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36A81Cu;
    SET_GPR_U32(ctx, 31, 0x36A824u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36A81Cu, 0x36A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A824u;
label_36a824:
    // 0x36a824: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36a824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36a828: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36a828u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36a82c: 0x24a59748  addiu       $a1, $a1, -0x68B8
    ctx->pc = 0x36a82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940488));
    // 0x36a830: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36a830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36a834: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36A834u;
    SET_GPR_U32(ctx, 31, 0x36A83Cu);
    ctx->pc = 0x36A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A834u;
    // 0x36a838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36A834u, 0x36A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A83Cu;
label_36a83c:
    // 0x36a83c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a83cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a844: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a848: 0x3e00008  jr          $ra
    ctx->pc = 0x36A848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A848u;
        // 0x36a84c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A850u;
}
