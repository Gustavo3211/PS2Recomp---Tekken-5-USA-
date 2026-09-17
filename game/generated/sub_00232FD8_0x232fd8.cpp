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

// Function: sub_00232FD8
// Address: 0x232fd8 - 0x233088
void sub_00232FD8_0x232fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232FD8_0x232fd8");
#endif

    switch (ctx->pc) {
        case 0x232ff8u: goto label_232ff8;
        default: break;
    }

    ctx->pc = 0x232fd8u;

    // 0x232fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232fdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232fe0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x232fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x232fe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232fe8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x232fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x232fec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x232fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x232ff0: 0xc04a151  jal         func_128544
    ctx->pc = 0x232FF0u;
    SET_GPR_U32(ctx, 31, 0x232FF8u);
    ctx->pc = 0x232FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232FF0u;
    // 0x232ff4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x232FF0u, 0x232FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232FF8u;
label_232ff8:
    // 0x232ff8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x232ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x232ffc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x232ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x233000: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x233000u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233004: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x233004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x233008: 0x7e0200c0  sq          $v0, 0xC0($s0)
    ctx->pc = 0x233008u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 192), GPR_VEC(ctx, 2));
    // 0x23300c: 0x7e020060  sq          $v0, 0x60($s0)
    ctx->pc = 0x23300cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 2));
    // 0x233010: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x233010u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
    // 0x233014: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x233014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x233018: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x233018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x23301c: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x23301cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x233020: 0x7e020090  sq          $v0, 0x90($s0)
    ctx->pc = 0x233020u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 2));
    // 0x233024: 0x7e0200a0  sq          $v0, 0xA0($s0)
    ctx->pc = 0x233024u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 160), GPR_VEC(ctx, 2));
    // 0x233028: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x233028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x23302c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x23302cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x233030: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x233030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x233034: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x233034u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x233038: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x233038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x23303c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23303cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x233040: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x233040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x233044: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x233044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x233048: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x233048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x23304c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x23304cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x233050: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x233050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x233054: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x233054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x233058: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x233058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x23305c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x23305cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x233060: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x233060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x233064: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x233064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x233068: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x233068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x23306c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x23306cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x233070: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x233070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x233074: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x233074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x233078: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x233078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23307c: 0x3e00008  jr          $ra
    ctx->pc = 0x23307Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23307Cu;
        // 0x233080: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23307Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233084u;
    // 0x233084: 0x0  nop
    ctx->pc = 0x233084u;
    // NOP
    ctx->pc = 0x233088u;
}
