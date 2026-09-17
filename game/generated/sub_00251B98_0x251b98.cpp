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

// Function: sub_00251B98
// Address: 0x251b98 - 0x251c20
void sub_00251B98_0x251b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251B98_0x251b98");
#endif

    switch (ctx->pc) {
        case 0x251bc8u: goto label_251bc8;
        default: break;
    }

    ctx->pc = 0x251b98u;

    // 0x251b98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x251b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251b9c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x251b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x251ba0: 0x2ca30061  sltiu       $v1, $a1, 0x61
    ctx->pc = 0x251ba0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x251ba4: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x251ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x251ba8: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x251ba8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x251bac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x251bacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251bb0: 0xaf85c9f4  sw          $a1, -0x360C($gp)
    ctx->pc = 0x251bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953460), GPR_U32(ctx, 5));
    // 0x251bb4: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x251BB4u;
    {
        const bool branch_taken_0x251bb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x251BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251BB4u;
        // 0x251bb8: 0x2484af00  addiu       $a0, $a0, -0x5100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251bb4) {
            ctx->pc = 0x251C18u;
            goto label_251c18;
        }
    }
    ctx->pc = 0x251BBCu;
    // 0x251bbc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x251bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x251bc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x251bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251bc4: 0x0  nop
    ctx->pc = 0x251bc4u;
    // NOP
label_251bc8:
    // 0x251bc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x251bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x251bcc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x251bccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x251bd0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x251bd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x251bd4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x251bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x251bd8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x251bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x251bdc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x251bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x251be0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x251be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x251be4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x251be4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x251be8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x251be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x251bec: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x251becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x251bf0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x251bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x251bf4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x251bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x251bf8: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x251bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x251bfc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x251bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x251c00: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x251c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x251c04: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x251c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x251c08: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x251c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x251c0c: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x251c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x251c10: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x251C10u;
    {
        const bool branch_taken_0x251c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251C10u;
        // 0x251c14: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251c10) {
            ctx->pc = 0x251BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251bc8;
        }
    }
    ctx->pc = 0x251C18u;
label_251c18:
    // 0x251c18: 0x3e00008  jr          $ra
    ctx->pc = 0x251C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251C20u;
}
