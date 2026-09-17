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

// Function: sub_00328AC0
// Address: 0x328ac0 - 0x328b40
void sub_00328AC0_0x328ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328AC0_0x328ac0");
#endif

    ctx->pc = 0x328ac0u;

    // 0x328ac0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x328ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x328ac4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x328ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x328ac8: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x328ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x328acc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x328accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x328ad0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x328ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x328ad4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x328ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x328ad8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x328ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x328adc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x328adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x328ae0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x328ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x328ae4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x328ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x328ae8: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x328ae8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x328aec: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x328aecu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x328af0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x328af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x328af4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x328af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x328af8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x328af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x328afc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x328afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x328b00: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x328b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x328b04: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x328b04u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x328b08: 0x2484ddb0  addiu       $a0, $a0, -0x2250
    ctx->pc = 0x328b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958512));
    // 0x328b0c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x328b0cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x328b10: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x328b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x328b14: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x328b14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x328b18: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x328b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x328b1c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x328b1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x328b20: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x328b20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x328b24: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x328b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x328b28: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x328b28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x328b2c: 0xe4ac0018  swc1        $f12, 0x18($a1)
    ctx->pc = 0x328b2cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x328b30: 0xe4ad001c  swc1        $f13, 0x1C($a1)
    ctx->pc = 0x328b30u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x328b34: 0x3e00008  jr          $ra
    ctx->pc = 0x328B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328B34u;
        // 0x328b38: 0xaca70014  sw          $a3, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328B3Cu;
    // 0x328b3c: 0x0  nop
    ctx->pc = 0x328b3cu;
    // NOP
    ctx->pc = 0x328b40u;
}
