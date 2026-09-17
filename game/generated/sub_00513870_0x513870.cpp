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

// Function: sub_00513870
// Address: 0x513870 - 0x5138d0
void sub_00513870_0x513870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00513870_0x513870");
#endif

    switch (ctx->pc) {
        case 0x5138b4u: goto label_5138b4;
        default: break;
    }

    ctx->pc = 0x513870u;

    // 0x513870: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x513870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x513874: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x513874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x513878: 0x2443f080  addiu       $v1, $v0, -0xF80
    ctx->pc = 0x513878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x51387c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x51387cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x513880: 0x24700078  addiu       $s0, $v1, 0x78
    ctx->pc = 0x513880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x513884: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x513884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x513888: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x513888u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x8FF0F8u));
    // 0x51388c: 0x24714e42  addiu       $s1, $v1, 0x4E42
    ctx->pc = 0x51388cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 20034));
    // 0x513890: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x513890u;
    {
        const bool branch_taken_0x513890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x513894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513890u;
        // 0x513894: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513890) {
            ctx->pc = 0x5138A0u;
            goto label_5138a0;
        }
    }
    ctx->pc = 0x513898u;
    // 0x513898: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x513898u;
    {
        const bool branch_taken_0x513898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513898u;
        // 0x51389c: 0xa4604e42  sh          $zero, 0x4E42($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 20034), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513898) {
            ctx->pc = 0x5138BCu;
            goto label_5138bc;
        }
    }
    ctx->pc = 0x5138A0u;
label_5138a0:
    // 0x5138a0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x5138a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x5138a4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x5138A4u;
    {
        const bool branch_taken_0x5138a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5138a4) {
            ctx->pc = 0x5138A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5138A4u;
            // 0x5138a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5138C0u;
            goto label_5138c0;
        }
    }
    ctx->pc = 0x5138ACu;
    // 0x5138ac: 0xc144e1a  jal         func_513868
    ctx->pc = 0x5138ACu;
    SET_GPR_U32(ctx, 31, 0x5138B4u);
    ctx->pc = 0x513868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x513868u, 0x5138ACu, 0x5138B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5138B4u;
label_5138b4:
    // 0x5138b4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x5138b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x5138b8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x5138b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_5138bc:
    // 0x5138bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5138bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_5138c0:
    // 0x5138c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5138c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5138c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5138c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5138c8: 0x3e00008  jr          $ra
    ctx->pc = 0x5138C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5138CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5138C8u;
        // 0x5138cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5138C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5138D0u;
}
