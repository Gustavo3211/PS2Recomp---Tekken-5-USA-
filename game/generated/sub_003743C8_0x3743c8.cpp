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

// Function: sub_003743C8
// Address: 0x3743c8 - 0x374444
void sub_003743C8_0x3743c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003743C8_0x3743c8");
#endif

    switch (ctx->pc) {
        case 0x3743fcu: goto label_3743fc;
        case 0x37440cu: goto label_37440c;
        case 0x374420u: goto label_374420;
        default: break;
    }

    ctx->pc = 0x3743c8u;

    // 0x3743c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3743c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3743cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3743ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3743d0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3743d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3743d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3743d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3743d8: 0xffbe0028  sd          $fp, 0x28($sp)
    ctx->pc = 0x3743d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 30));
    // 0x3743dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3743dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3743e0: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3743e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3743e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3743e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3743ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3743f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3743f4: 0xc0dd111  jal         func_374444
    ctx->pc = 0x3743F4u;
    SET_GPR_U32(ctx, 31, 0x3743FCu);
    ctx->pc = 0x374444u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374444u, 0x3743F4u, 0x3743FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3743FCu;
label_3743fc:
    // 0x3743fc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x3743fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x374400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x374400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374404: 0xc0dd111  jal         func_374444
    ctx->pc = 0x374404u;
    SET_GPR_U32(ctx, 31, 0x37440Cu);
    ctx->pc = 0x374444u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374444u, 0x374404u, 0x37440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37440Cu;
label_37440c:
    // 0x37440c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37440cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374410: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x374410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374414: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x374414u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374418: 0xc0dcfc4  jal         func_373F10
    ctx->pc = 0x374418u;
    SET_GPR_U32(ctx, 31, 0x374420u);
    ctx->pc = 0x373F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373F10u, 0x374418u, 0x374420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374420u;
label_374420:
    // 0x374420: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x374420u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374424: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x374424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374428: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x374428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37442c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x37442cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374430: 0xdfbe0028  ld          $fp, 0x28($sp)
    ctx->pc = 0x374430u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x374434: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x374434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374438: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x374438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x37443c: 0x3e00008  jr          $ra
    ctx->pc = 0x37443Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37443Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374444u;
}
