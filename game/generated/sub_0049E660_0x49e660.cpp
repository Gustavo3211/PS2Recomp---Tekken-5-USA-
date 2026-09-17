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

// Function: sub_0049E660
// Address: 0x49e660 - 0x49e6c8
void sub_0049E660_0x49e660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E660_0x49e660");
#endif

    switch (ctx->pc) {
        case 0x49e678u: goto label_49e678;
        case 0x49e688u: goto label_49e688;
        case 0x49e694u: goto label_49e694;
        case 0x49e6acu: goto label_49e6ac;
        default: break;
    }

    ctx->pc = 0x49e660u;

    // 0x49e660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49e660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49e664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49e664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49e668: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x49e668u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x49e66c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x49e66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x49e670: 0xc1233c0  jal         func_48CF00
    ctx->pc = 0x49E670u;
    SET_GPR_U32(ctx, 31, 0x49E678u);
    ctx->pc = 0x49E674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E670u;
    // 0x49e674: 0x2610d680  addiu       $s0, $s0, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF00u, 0x49E670u, 0x49E678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E678u;
label_49e678:
    // 0x49e678: 0xa600220c  sh          $zero, 0x220C($s0)
    ctx->pc = 0x49e678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8716), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e67c: 0xa600220e  sh          $zero, 0x220E($s0)
    ctx->pc = 0x49e67cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8718), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e680: 0xc1232f6  jal         func_48CBD8
    ctx->pc = 0x49E680u;
    SET_GPR_U32(ctx, 31, 0x49E688u);
    ctx->pc = 0x49E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E680u;
    // 0x49e684: 0xa60021fe  sh          $zero, 0x21FE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8702), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBD8u, 0x49E680u, 0x49E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E688u;
label_49e688:
    // 0x49e688: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x49e688u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e68c: 0xc124814  jal         func_492050
    ctx->pc = 0x49E68Cu;
    SET_GPR_U32(ctx, 31, 0x49E694u);
    ctx->pc = 0x49E690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E68Cu;
    // 0x49e690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492050u, 0x49E68Cu, 0x49E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E694u;
label_49e694:
    // 0x49e694: 0xa6002218  sh          $zero, 0x2218($s0)
    ctx->pc = 0x49e694u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8728), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e698: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x49e698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x49e69c: 0xa600221a  sh          $zero, 0x221A($s0)
    ctx->pc = 0x49e69cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8730), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e6a0: 0xae022260  sw          $v0, 0x2260($s0)
    ctx->pc = 0x49e6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8800), GPR_U32(ctx, 2));
    // 0x49e6a4: 0xc1242ec  jal         func_490BB0
    ctx->pc = 0x49E6A4u;
    SET_GPR_U32(ctx, 31, 0x49E6ACu);
    ctx->pc = 0x49E6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E6A4u;
    // 0x49e6a8: 0xa600221c  sh          $zero, 0x221C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8732), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x490BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490BB0u, 0x49E6A4u, 0x49E6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E6ACu;
label_49e6ac:
    // 0x49e6ac: 0xa6002212  sh          $zero, 0x2212($s0)
    ctx->pc = 0x49e6acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8722), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e6b0: 0xa6002210  sh          $zero, 0x2210($s0)
    ctx->pc = 0x49e6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8720), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e6b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x49e6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49e6b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49e6b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49e6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x49E6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E6BCu;
        // 0x49e6c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49E6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49E6C4u;
    // 0x49e6c4: 0x0  nop
    ctx->pc = 0x49e6c4u;
    // NOP
    ctx->pc = 0x49e6c8u;
}
