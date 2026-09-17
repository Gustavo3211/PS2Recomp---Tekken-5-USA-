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

// Function: sub_002B5FD8
// Address: 0x2b5fd8 - 0x2b6088
void sub_002B5FD8_0x2b5fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5FD8_0x2b5fd8");
#endif

    switch (ctx->pc) {
        case 0x2b6030u: goto label_2b6030;
        case 0x2b6068u: goto label_2b6068;
        default: break;
    }

    ctx->pc = 0x2b5fd8u;

    // 0x2b5fd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5fdc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b5fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b5fe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5fe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b5fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5fe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b5fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b5fec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b5fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ff0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b5ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b5ff4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2b5ff4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ff8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b5ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b5ffc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b5ffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6000: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b6000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b6004: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x2b6004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6008: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2b6008u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b600c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2B600Cu;
    {
        const bool branch_taken_0x2b600c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B600Cu;
        // 0x2b6010: 0x32421000  andi        $v0, $s2, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b600c) {
            ctx->pc = 0x2B6020u;
            goto label_2b6020;
        }
    }
    ctx->pc = 0x2B6014u;
    // 0x2b6014: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b6014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b6018: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b6018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b601c: 0xe60000b8  swc1        $f0, 0xB8($s0)
    ctx->pc = 0x2b601cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
label_2b6020:
    // 0x2b6020: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B6020u;
    {
        const bool branch_taken_0x2b6020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6020) {
            ctx->pc = 0x2B6060u;
            goto label_2b6060;
        }
    }
    ctx->pc = 0x2B6028u;
    // 0x2b6028: 0xc0ac628  jal         func_2B18A0
    ctx->pc = 0x2B6028u;
    SET_GPR_U32(ctx, 31, 0x2B6030u);
    ctx->pc = 0x2B602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6028u;
    // 0x2b602c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B18A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B18A0u, 0x2B6028u, 0x2B6030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6030u;
label_2b6030:
    // 0x2b6030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6034: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b6034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6038: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b6038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b603c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2b603cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6040: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b6040u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6044: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2b6044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6048: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b6048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b604c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b604cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b6050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6054: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b6054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6058: 0x80ad8f2  j           func_2B63C8
    ctx->pc = 0x2B6058u;
    ctx->pc = 0x2B605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6058u;
    // 0x2b605c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B63C8u;
    sub_002B63C8_0x2b63c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2B6060u;
label_2b6060:
    // 0x2b6060: 0xc0ad822  jal         func_2B6088
    ctx->pc = 0x2B6060u;
    SET_GPR_U32(ctx, 31, 0x2B6068u);
    ctx->pc = 0x2B6088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6088u, 0x2B6060u, 0x2B6068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6068u;
label_2b6068:
    // 0x2b6068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b606c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b606cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6070: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b6070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6074: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b6074u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6078: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b6078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b607c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B607Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B607Cu;
        // 0x2b6080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B607Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6084u;
    // 0x2b6084: 0x0  nop
    ctx->pc = 0x2b6084u;
    // NOP
    ctx->pc = 0x2b6088u;
}
