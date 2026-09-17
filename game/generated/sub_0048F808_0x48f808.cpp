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

// Function: sub_0048F808
// Address: 0x48f808 - 0x48f890
void sub_0048F808_0x48f808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048F808_0x48f808");
#endif

    switch (ctx->pc) {
        case 0x48f860u: goto label_48f860;
        case 0x48f868u: goto label_48f868;
        case 0x48f870u: goto label_48f870;
        default: break;
    }

    ctx->pc = 0x48f808u;

    // 0x48f808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x48f808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x48f80c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x48f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x48f810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48f810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48f814: 0x2463d600  addiu       $v1, $v1, -0x2A00
    ctx->pc = 0x48f814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956544));
    // 0x48f818: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x48f818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x48f81c: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x48f81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x48f820: 0x24a5d680  addiu       $a1, $a1, -0x2980
    ctx->pc = 0x48f820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956672));
    // 0x48f824: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x48f824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x48f828: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x48f828u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D608u));
    // 0x48f82c: 0x24b0009e  addiu       $s0, $a1, 0x9E
    ctx->pc = 0x48f82cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 158));
    // 0x48f830: 0x94640006  lhu         $a0, 0x6($v1)
    ctx->pc = 0x48f830u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x72D606u));
    // 0x48f834: 0x84660000  lh          $a2, 0x0($v1)
    ctx->pc = 0x48f834u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x72D600u));
    // 0x48f838: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x48f838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x48f83c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x48f83cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72D71Eu));
    // 0x48f840: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x48f840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x48f844: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x48f844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x48f848: 0xa4a70094  sh          $a3, 0x94($a1)
    ctx->pc = 0x48f848u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x72D714u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D714u, _value); } while (0);
    // 0x48f84c: 0x6100b  movn        $v0, $zero, $a2
    ctx->pc = 0x48f84cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x48f850: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x48f850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x48f854: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x48f854u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x48f858: 0xc123f9c  jal         func_48FE70
    ctx->pc = 0x48F858u;
    SET_GPR_U32(ctx, 31, 0x48F860u);
    ctx->pc = 0x48F85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48F858u;
    // 0x48f85c: 0xa4a20096  sh          $v0, 0x96($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 150), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48FE70u, 0x48F858u, 0x48F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F860u;
label_48f860:
    // 0x48f860: 0xc123e24  jal         func_48F890
    ctx->pc = 0x48F860u;
    SET_GPR_U32(ctx, 31, 0x48F868u);
    ctx->pc = 0x48F890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F890u, 0x48F860u, 0x48F868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F868u;
label_48f868:
    // 0x48f868: 0xc123e2e  jal         func_48F8B8
    ctx->pc = 0x48F868u;
    SET_GPR_U32(ctx, 31, 0x48F870u);
    ctx->pc = 0x48F8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F8B8u, 0x48F868u, 0x48F870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48F870u;
label_48f870:
    // 0x48f870: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x48f870u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48f874: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x48f874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48f878: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x48f878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x48f87c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x48f87cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x48f880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48f880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48f884: 0x3e00008  jr          $ra
    ctx->pc = 0x48F884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48F884u;
        // 0x48f888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48F884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48F88Cu;
    // 0x48f88c: 0x0  nop
    ctx->pc = 0x48f88cu;
    // NOP
    ctx->pc = 0x48f890u;
}
