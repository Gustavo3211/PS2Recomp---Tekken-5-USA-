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

// Function: sub_0049E498
// Address: 0x49e498 - 0x49e500
void sub_0049E498_0x49e498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E498_0x49e498");
#endif

    switch (ctx->pc) {
        case 0x49e4b8u: goto label_49e4b8;
        case 0x49e4c8u: goto label_49e4c8;
        case 0x49e4d0u: goto label_49e4d0;
        case 0x49e4d8u: goto label_49e4d8;
        default: break;
    }

    ctx->pc = 0x49e498u;

    // 0x49e498: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49e498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49e49c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x49e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x49e4a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49e4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49e4a4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x49e4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x49e4a8: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x49e4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x49e4ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x49e4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x49e4b0: 0xc127940  jal         func_49E500
    ctx->pc = 0x49E4B0u;
    SET_GPR_U32(ctx, 31, 0x49E4B8u);
    ctx->pc = 0x49E4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E4B0u;
    // 0x49e4b4: 0xa6020008  sh          $v0, 0x8($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E500u, 0x49E4B0u, 0x49E4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E4B8u;
label_49e4b8:
    // 0x49e4b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49e4bc: 0xa6022212  sh          $v0, 0x2212($s0)
    ctx->pc = 0x49e4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8722), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e4c0: 0xc1242ec  jal         func_490BB0
    ctx->pc = 0x49E4C0u;
    SET_GPR_U32(ctx, 31, 0x49E4C8u);
    ctx->pc = 0x49E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E4C0u;
    // 0x49e4c4: 0xa6022210  sh          $v0, 0x2210($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8720), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x490BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490BB0u, 0x49E4C0u, 0x49E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E4C8u;
label_49e4c8:
    // 0x49e4c8: 0xc12916e  jal         func_4A45B8
    ctx->pc = 0x49E4C8u;
    SET_GPR_U32(ctx, 31, 0x49E4D0u);
    ctx->pc = 0x4A45B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A45B8u, 0x49E4C8u, 0x49E4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E4D0u;
label_49e4d0:
    // 0x49e4d0: 0xc1232f6  jal         func_48CBD8
    ctx->pc = 0x49E4D0u;
    SET_GPR_U32(ctx, 31, 0x49E4D8u);
    ctx->pc = 0x48CBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBD8u, 0x49E4D0u, 0x49E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E4D8u;
label_49e4d8:
    // 0x49e4d8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x49e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x49e4dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49e4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49e4e0: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x49e4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x49e4e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49e4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49e4e8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x49e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49e4ec: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x49e4ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49e4f0: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x49e4f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x49e4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x49E4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E4F4u;
        // 0x49e4f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49E4F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49E4FCu;
    // 0x49e4fc: 0x0  nop
    ctx->pc = 0x49e4fcu;
    // NOP
    ctx->pc = 0x49e500u;
}
