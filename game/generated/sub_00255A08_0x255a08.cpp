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

// Function: sub_00255A08
// Address: 0x255a08 - 0x255a78
void sub_00255A08_0x255a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255A08_0x255a08");
#endif

    switch (ctx->pc) {
        case 0x255a20u: goto label_255a20;
        case 0x255a64u: goto label_255a64;
        default: break;
    }

    ctx->pc = 0x255a08u;

    // 0x255a08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x255a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x255a0c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x255a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x255a10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x255a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a14: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x255a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x255a18: 0xc0af9ee  jal         func_2BE7B8
    ctx->pc = 0x255A18u;
    SET_GPR_U32(ctx, 31, 0x255A20u);
    ctx->pc = 0x255A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A18u;
    // 0x255a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE7B8u, 0x255A18u, 0x255A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A20u;
label_255a20:
    // 0x255a20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x255a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x255a24: 0x24490048  addiu       $t1, $v0, 0x48
    ctx->pc = 0x255a24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x255a28: 0x3c020900  lui         $v0, 0x900
    ctx->pc = 0x255a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2304 << 16));
    // 0x255a2c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x255a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x255a30: 0x3c080f00  lui         $t0, 0xF00
    ctx->pc = 0x255a30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3840 << 16));
    // 0x255a34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x255a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x255a38: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x255a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x255a3c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x255a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x255a40: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x255A40u;
    {
        const bool branch_taken_0x255a40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x255A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A40u;
        // 0x255a44: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x255a40) {
            ctx->pc = 0x255A64u;
            goto label_255a64;
        }
    }
    ctx->pc = 0x255A48u;
    // 0x255a48: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x255a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x255a4c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x255a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x255a50: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x255a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x255a54: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x255a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x255a58: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x255a58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x255a5c: 0xc08f4d4  jal         func_23D350
    ctx->pc = 0x255A5Cu;
    SET_GPR_U32(ctx, 31, 0x255A64u);
    ctx->pc = 0x255A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x255A5Cu;
    // 0x255a60: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D350u, 0x255A5Cu, 0x255A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x255A64u;
label_255a64:
    // 0x255a64: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x255a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255a68: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x255a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x255a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x255A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x255A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x255A6Cu;
        // 0x255a70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x255A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255A74u;
    // 0x255a74: 0x0  nop
    ctx->pc = 0x255a74u;
    // NOP
    ctx->pc = 0x255a78u;
}
