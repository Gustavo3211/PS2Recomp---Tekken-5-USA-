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

// Function: sub_002B92B8
// Address: 0x2b92b8 - 0x2b9358
void sub_002B92B8_0x2b92b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B92B8_0x2b92b8");
#endif

    switch (ctx->pc) {
        case 0x2b92d4u: goto label_2b92d4;
        case 0x2b9328u: goto label_2b9328;
        default: break;
    }

    ctx->pc = 0x2b92b8u;

    // 0x2b92b8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2b92b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2b92bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b92bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b92c0: 0x24a5dfd8  addiu       $a1, $a1, -0x2028
    ctx->pc = 0x2b92c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959064));
    // 0x2b92c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b92c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b92c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b92c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b92cc: 0xc04a48c  jal         func_129230
    ctx->pc = 0x2B92CCu;
    SET_GPR_U32(ctx, 31, 0x2B92D4u);
    ctx->pc = 0x2B92D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B92CCu;
    // 0x2b92d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x2B92CCu, 0x2B92D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B92D4u;
label_2b92d4:
    // 0x2b92d4: 0xc78390c0  lwc1        $f3, -0x6F40($gp)
    ctx->pc = 0x2b92d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b92d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b92d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b92dc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2b92dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2b92e0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b92e4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2b92e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2b92e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b92e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b92ec: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x2b92ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2b92f0: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x2b92f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x2b92f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b92f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b92f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b92f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b92fc: 0x3c01435c  lui         $at, 0x435C
    ctx->pc = 0x2b92fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17244 << 16));
    // 0x2b9300: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b9300u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9304: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x2b9304u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2b9308: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x2b9308u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2b930c: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2b930cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2b9310: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2b9310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2b9314: 0xe6040020  swc1        $f4, 0x20($s0)
    ctx->pc = 0x2b9314u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2b9318: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x2b9318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x2b931c: 0xe6040018  swc1        $f4, 0x18($s0)
    ctx->pc = 0x2b931cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2b9320: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2b9320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2b9324: 0x0  nop
    ctx->pc = 0x2b9324u;
    // NOP
label_2b9328:
    // 0x2b9328: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2b9328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b932c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b932cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b9330: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2b9330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b9334: 0x0  nop
    ctx->pc = 0x2b9334u;
    // NOP
    // 0x2b9338: 0x0  nop
    ctx->pc = 0x2b9338u;
    // NOP
    // 0x2b933c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B933Cu;
    {
        const bool branch_taken_0x2b933c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B933Cu;
        // 0x2b9340: 0xa0600020  sb          $zero, 0x20($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b933c) {
            ctx->pc = 0x2B9328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9328;
        }
    }
    ctx->pc = 0x2B9344u;
    // 0x2b9344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9348: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b9348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b934c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B934Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B934Cu;
        // 0x2b9350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B934Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9354u;
    // 0x2b9354: 0x0  nop
    ctx->pc = 0x2b9354u;
    // NOP
    ctx->pc = 0x2b9358u;
}
