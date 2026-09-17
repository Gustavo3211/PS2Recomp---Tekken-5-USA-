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

// Function: sub_0049A7F8
// Address: 0x49a7f8 - 0x49a858
void sub_0049A7F8_0x49a7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A7F8_0x49a7f8");
#endif

    switch (ctx->pc) {
        case 0x49a810u: goto label_49a810;
        case 0x49a824u: goto label_49a824;
        case 0x49a83cu: goto label_49a83c;
        case 0x49a844u: goto label_49a844;
        default: break;
    }

    ctx->pc = 0x49a7f8u;

    // 0x49a7f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49a7f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a7fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49a7fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49a800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49a800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a804: 0x81266b8  j           func_499AE0
    ctx->pc = 0x49A804u;
    ctx->pc = 0x49A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A804u;
    // 0x49a808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x499AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499AE0u, 0x49A804u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49A80Cu;
    // 0x49a80c: 0x0  nop
    ctx->pc = 0x49a80cu;
    // NOP
label_49a810:
    // 0x49a810: 0x2605d680  addiu       $a1, $s0, -0x2980
    ctx->pc = 0x49a810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x49a814: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x49a814u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x49a818: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x49a818u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x49a81c: 0xa4a30010  sh          $v1, 0x10($a1)
    ctx->pc = 0x49a81cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x49a820: 0xa4a4000e  sh          $a0, 0xE($a1)
    ctx->pc = 0x49a820u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 4));
label_49a824:
    // 0x49a824: 0x2603d680  addiu       $v1, $s0, -0x2980
    ctx->pc = 0x49a824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x49a828: 0x24630016  addiu       $v1, $v1, 0x16
    ctx->pc = 0x49a828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
    // 0x49a82c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49a82cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49a830: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49a830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49a834: 0xc126932  jal         func_49A4C8
    ctx->pc = 0x49A834u;
    SET_GPR_U32(ctx, 31, 0x49A83Cu);
    ctx->pc = 0x49A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A834u;
    // 0x49a838: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A4C8u, 0x49A834u, 0x49A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A83Cu;
label_49a83c:
    // 0x49a83c: 0xc124c3c  jal         func_4930F0
    ctx->pc = 0x49A83Cu;
    SET_GPR_U32(ctx, 31, 0x49A844u);
    ctx->pc = 0x4930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4930F0u, 0x49A83Cu, 0x49A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A844u;
label_49a844:
    // 0x49a844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49a844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49a848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49a84c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49a84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a850: 0x8124642  j           func_491908
    ctx->pc = 0x49A850u;
    ctx->pc = 0x49A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A850u;
    // 0x49a854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491908u;
    sub_00491908_0x491908(rdram, ctx, runtime); return;
    ctx->pc = 0x49A858u;
}
