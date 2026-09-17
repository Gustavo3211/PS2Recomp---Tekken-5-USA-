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

// Function: sub_00327BB0
// Address: 0x327bb0 - 0x327c30
void sub_00327BB0_0x327bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327BB0_0x327bb0");
#endif

    ctx->pc = 0x327bb0u;

    // 0x327bb0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x327bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x327bb4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x327bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x327bb8: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x327bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x327bbc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x327bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x327bc0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x327bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x327bc4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x327bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x327bc8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x327bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x327bcc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x327bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x327bd0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x327bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x327bd4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x327bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x327bd8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x327bd8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x327bdc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x327bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x327be0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x327be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x327be4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x327be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327be8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x327be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x327bec: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x327becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x327bf0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x327bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x327bf4: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x327bf4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x327bf8: 0x2484ddb0  addiu       $a0, $a0, -0x2250
    ctx->pc = 0x327bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958512));
    // 0x327bfc: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x327bfcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x327c00: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x327c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x327c04: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x327c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x327c08: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x327c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x327c0c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x327c0cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x327c10: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x327c10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x327c14: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x327c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x327c18: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x327c18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x327c1c: 0xe4ac0018  swc1        $f12, 0x18($a1)
    ctx->pc = 0x327c1cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x327c20: 0xe4ad001c  swc1        $f13, 0x1C($a1)
    ctx->pc = 0x327c20u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x327c24: 0x3e00008  jr          $ra
    ctx->pc = 0x327C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C24u;
        // 0x327c28: 0xaca70014  sw          $a3, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327C2Cu;
    // 0x327c2c: 0x0  nop
    ctx->pc = 0x327c2cu;
    // NOP
    ctx->pc = 0x327c30u;
}
