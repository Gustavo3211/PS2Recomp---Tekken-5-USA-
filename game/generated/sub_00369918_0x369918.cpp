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

// Function: sub_00369918
// Address: 0x369918 - 0x3699b0
void sub_00369918_0x369918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369918_0x369918");
#endif

    switch (ctx->pc) {
        case 0x36993cu: goto label_36993c;
        case 0x369980u: goto label_369980;
        default: break;
    }

    ctx->pc = 0x369918u;

    // 0x369918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36991c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36991cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x369920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369924: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x369924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x369928: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x369928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36992c: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x36992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x369930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369934: 0xc0b7faa  jal         func_2DFEA8
    ctx->pc = 0x369934u;
    SET_GPR_U32(ctx, 31, 0x36993Cu);
    ctx->pc = 0x369938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369934u;
    // 0x369938: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFEA8u, 0x369934u, 0x36993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36993Cu;
label_36993c:
    // 0x36993c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36993cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x369940: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x369940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x369944: 0x2442d668  addiu       $v0, $v0, -0x2998
    ctx->pc = 0x369944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956648));
    // 0x369948: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x369948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36994c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36994cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x369950: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369954: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x369954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x369958: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x369958u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x36995c: 0x3e00008  jr          $ra
    ctx->pc = 0x36995Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36995Cu;
        // 0x369960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36995Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369964u;
    // 0x369964: 0x0  nop
    ctx->pc = 0x369964u;
    // NOP
    // 0x369968: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x369968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36996c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x36996cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x369970: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x369970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x369974: 0x2484fb44  addiu       $a0, $a0, -0x4BC
    ctx->pc = 0x369974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966084));
    // 0x369978: 0xc048b90  jal         func_122E40
    ctx->pc = 0x369978u;
    SET_GPR_U32(ctx, 31, 0x369980u);
    ctx->pc = 0x36997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369978u;
    // 0x36997c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x369978u, 0x369980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369980u;
label_369980:
    // 0x369980: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x369980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x369984: 0x3e00008  jr          $ra
    ctx->pc = 0x369984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369984u;
        // 0x369988: 0xa0400051  sb          $zero, 0x51($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36998Cu;
    // 0x36998c: 0x0  nop
    ctx->pc = 0x36998cu;
    // NOP
    // 0x369990: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x369990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x369994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x369994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369998: 0x3e00008  jr          $ra
    ctx->pc = 0x369998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369998u;
        // 0x36999c: 0xa0620051  sb          $v0, 0x51($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 81), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3699A0u;
    // 0x3699a0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3699a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3699a4: 0x90620051  lbu         $v0, 0x51($v1)
    ctx->pc = 0x3699a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 81)));
    // 0x3699a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3699A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3699ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3699A8u;
        // 0x3699ac: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3699A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3699B0u;
}
