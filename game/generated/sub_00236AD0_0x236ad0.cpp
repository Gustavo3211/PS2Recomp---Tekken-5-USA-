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

// Function: sub_00236AD0
// Address: 0x236ad0 - 0x236b30
void sub_00236AD0_0x236ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236AD0_0x236ad0");
#endif

    switch (ctx->pc) {
        case 0x236b18u: goto label_236b18;
        default: break;
    }

    ctx->pc = 0x236ad0u;

    // 0x236ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x236ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x236ad4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x236ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x236ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236adc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x236adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x236ae0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x236ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x236ae4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x236ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236ae8: 0x84a30012  lh          $v1, 0x12($a1)
    ctx->pc = 0x236ae8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x236aec: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x236aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236af0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x236af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x236af4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x236af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x236af8: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x236af8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x236afc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x236afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x236b00: 0x84c30012  lh          $v1, 0x12($a2)
    ctx->pc = 0x236b00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x236b04: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x236b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x236b08: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x236b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x236b0c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x236b0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x236b10: 0xc08cb0c  jal         func_232C30
    ctx->pc = 0x236B10u;
    SET_GPR_U32(ctx, 31, 0x236B18u);
    ctx->pc = 0x236B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B10u;
    // 0x236b14: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232C30u, 0x236B10u, 0x236B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B18u;
label_236b18:
    // 0x236b18: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x236b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x236b1c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x236b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x236b20: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x236b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236b24: 0x3e00008  jr          $ra
    ctx->pc = 0x236B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B24u;
        // 0x236b28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236B2Cu;
    // 0x236b2c: 0x0  nop
    ctx->pc = 0x236b2cu;
    // NOP
    ctx->pc = 0x236b30u;
}
